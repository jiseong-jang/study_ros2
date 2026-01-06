import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Twist
from robot_control_interfaces.srv import LLMCommand
from robot_control_interfaces.action import Move
from .utils.keyboard_handler import KeyboardHandler
class TeleopNode(Node):
	def __init__(self):
		super().__init__('teleop_node')
		self.declare_parameter('linear_speed', 0.2)
		self.declare_parameter('angular_speed', 0.5)
		self.declare_parameter('cmd_vel_topic', '/cmd_vel')

		self.linear_speed = self.get_parameter('linear_speed').value
		self.angular_speed = self.get_parameter('angular_speed').value
		cmd_vel_topic = self.get_parameter('cmd_vel_topic').value

		self.vel_publisher = self.create_publisher(Twist, cmd_vel_topic, 10)
		self.llm_client = self.create_client(LLMCommand, 'llm_command')
		self.move_action_client = ActionClient(self, Move, 'move_robot')
		self.llm_mode = False 
		self.running = True
		self.get_logger().info('Teleop Node initialized')

	def send_velocity(self, linear_x: float, angular_z: float):
		twist = Twist()
		twist.linear.x = linear_x
		twist.angular.z = angular_z
		self.vel_publisher.publish(twist)

	def handle_keyboard_command(self, command: str, kb_settings):
		velocity_map = {
			'forward':  (self.linear_speed, 0.0),
			'backward': (-self.linear_speed, 0.0),
			'left':     (0.0, self.angular_speed),
			'right':    (0.0, -self.angular_speed),
			'stop':     (0.0, 0.0),
		}

		if command in velocity_map:
			linear, angular = velocity_map[command]
			self.send_velocity(linear, angular)
			self.get_logger().info(f'Command: {command}')
		elif command == 'llm_mode':
			self.enter_llm_mode(kb_settings)
		elif command == 'quit':
			self.running = False

	def enter_llm_mode(self, kb_settings):
		self.send_velocity(0.0, 0.0)
		print('Starting LLM mode')

		if not self.llm_client.wait_for_service(timeout_sec = 2.0):
			print('Not found LLM. go to keyboard moode')
			return

		import termios, sys, tty

		while True:
			try:
				termios.tcsetattr(sys.stdin, termios.TCSADRAIN, kb_settings)
				user_input = input('\n command: ').strip()
				tty.setraw(sys.stdin.fileno())

				if not user_input or user_input.lower() in ['exit', 'quit']:
					print('goto keyboard mode\n')
					KeyboardHandler.print_instructions()
					break

				self.call_llm_service(user_input)

			except EOFError:
				break

	def call_llm_service(self, user_input: str):
		print('AI is thinking...')
		request = LLMCommand.Request()
		request.user_input = user_input

		future = self.llm_client.call_async(request)
		rclpy.spin_until_future_complete(self, future, timeout_sec=30.0)

		if future.result() is not None:
			result = future.result()
			print(f'translating: {result.explanation}')
			print(f' command: {result.command}')

			self.send_move_action(result.command)
		else:
			print('Failed to call LLM service.')

	def send_move_action(self, direction: str):
		if not self.move_action_client.wait_for_server(timeout_sec=2.0):
			print('no action server, directily controllll')
			self.handle_keyboard_command(direction)
			return

		goal_msg = Move.Goal()
		goal_msg.direction = direction
		goal_msg.duration = 2.0 
		goal_msg.speed = 1.0 

		print(f'start moving: {direction}')

		send_goal_future = self.move_action_client.send_goal_async(
			goal_msg,
			feedback_callback=self.move_feedback_callback
		)
		send_goal_future.add_done_callback(self.goal_response_callback)

	def move_feedback_callback(self, feedback_msg):
		feedback = feedback_msg.feedback
		progress = int(feedback.progress * 100)
		print(f'\r progress: {progress}% | remaining time: {feedback.time_remaining:.1f}s', end='')

	def goal_response_callback(self, future):
		goal_handle = future.result()
		if not goal_handle.accepted:
			print('rejected')
			return

		result_future = goal_handle.get_result_async()
		result_future.add_done_callback(self.get_result_callback)

	def get_result_callback(self, future):
		result = future.result().result
		if result.success:
			print("success")
		else:
			print("canceled")

	def run(self):
		KeyboardHandler.print_instructions()

		with KeyboardHandler() as kb:
			while self.running and rclpy.ok():
				command = kb.get_key(timeout=0.1)

				if command:
					self.handle_keyboard_command(command,kb.settings)
				else:
					pass

				rclpy.spin_once(self, timeout_sec=0.01)

		self.send_velocity(0.0, 0.0)
		print('\n exit program')

def main(args=None):
	rclpy.init(args=args)
	node = TeleopNode()

	try:
		node.run()
	except KeyboardInterrupt:
		pass
	finally:
		node.send_velocity(0.0, 0.0)
		node.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()