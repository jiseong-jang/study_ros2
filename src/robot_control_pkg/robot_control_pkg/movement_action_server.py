import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from robot_control_interfaces.action import Move

class MovementActionServer(Node):
	DIRECTION_VELOCITIES = {
		'forward': {'linear_x': 0.4, 'angular_z': 0.0},
		'backward': {'linear_x': -0.2, 'angular_z': 0.0},
		'left': {'linear_x': 0.0, 'angular_z': 0.5},
		'right': {'linear_x': 0.0, 'angular_z': -0.5},
		'stop': {'linear_x': 0.0, 'angular_z': 0.0},
	}

	def __init__(self):
		super().__init__('movement_action_server')

		self.declare_parameter('cmd_vel_topic', '/cmd_vel')
		cmd_vel_topic = self.get_parameter('cmd_vel_topic').value

		self.vel_publisher = self.create_publisher(Twist, cmd_vel_topic, 10)
		self._cb_group = ReentrantCallbackGroup()
		self._action_server = ActionServer(
			self,
			Move,
			'move_robot',
			execute_callback=self.execute_callback,
			goal_callback=self.goal_callback,
			cancel_callback=self.cancel_callback,
			callback_group=self._cb_group
		)

		self._current_goal = None
		self.get_logger().info('Movement Action Server started')

	def goal_callback(self, goal_request):
		self.get_logger().info(f'Goal received: {goal_request.direction}')
		return GoalResponse.ACCEPT

	def cancel_callback(self, goal_handle):
		self.get_logger().info('Cancel requested')
		self.stop_robot()
		return CancelResponse.ACCEPT

	async def execute_callback(self, goal_handle):
		self.get_logger().info(f'Executing: {goal_handle.request.direction}')

		direction = goal_handle.request.direction
		duration = goal_handle.request.duration if goal_handle.request.duration > 0 else 2.0
		speed_multiplier = goal_handle.request.speed if goal_handle.request.speed > 0 else 1.0

		velocities = self.DIRECTION_VELOCITIES.get(direction, self.DIRECTION_VELOCITIES['stop'])

		twist = Twist()
		twist.linear.x = velocities['linear_x']*speed_multiplier
		twist.angular.z = velocities['angular_z']*speed_multiplier

		feedback_msg = Move.Feedback()

		start_time = self.get_clock().now()
		duration_nav = rclpy.duration.Duration(seconds=duration)
		rate = self.create_rate(10)

		while(time.time() - start_time) < duration:
			if goal_handle.is_cancel_requested:
				goal_handle.canceled()
				self.stop_robot()
				result = Move.Result()
				result.success = False
				result.distance_traveled = (time.time() - start_time) * abs(twist.linear.x)
				return result

			self.vel_publisher.publish(twist)

			elapsed = time.time() - start_time
			feedback_msg.time_remaining = max(0.0, duration - elapsed)
			feedback_msg.progress = min(1.0, elapsed/duration)
			goal_handle.publish_feedback(feedback_msg)

			rate.sleep()

		self.stop_robot()

		goal_handle.succeed()
		result = Move.Result()
		result.success = True
		result.distance_traveled = duration * abs(velocities['linear_x']*speed_multiplier)

		self.get_logger().info(f'Action completed: {direction}')
		return result

	def stop_robot(self):
		twist = Twist()
		self.vel_publisher.publish(twist)

def main(args=None):
	rclpy.init(args=args)
	node = MovementActionServer()

	executor = MultiThreadedExecutor()
	executor.add_node(node)

	try:
		executor.spin()
	except KeyboardInterrupt:
		pass
	finally:
		node.stop_robot()
		node.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()