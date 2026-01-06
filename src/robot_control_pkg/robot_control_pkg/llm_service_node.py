import rclpy
from rclpy.node import Node
from robot_control_interfaces.srv import LLMCommand

try:
	import ollama
	OLLAMA_AVAILABLE = True
except ImportError:
	OLLAMA_AVAILABLE = False

class LLMServiceNode(Node):

	def __init__(self):
		super().__init__('llm_service_node')
		self.declare_parameter('model_name', 'phi3:mini')
		self.model_name = self.get_parameter('model_name').value

		self.srv = self.create_service(
			LLMCommand,
			'llm_command',
			self.handle_llm_request
		)

		self.get_logger().info(f'LLM Service started with model: {self.model_name}')

		if not OLLAMA_AVAILABLE:
			self.get_logger().warn('Ollama not installed. Using fallback parser.')

	def handle_llm_request(self, request, response):
		self.get_logger().info(f'Received: "{request.user_input}"')

		try:
			if OLLAMA_AVAILABLE:
				command, explanation = self._ask_llm(request.user_input)
			else:
				command, explanation = self._fallback_parse(request.user_input)

			response.command = command
			response.explanation = explanation
			response.success = True

		except Exception as e:
			self.get_logger().error(f'LLM Error: {e}')
			response.command = 'stop'
			response.explanation = f'Error occurred: {str(e)}'
			response.success = False 

		return response

	def _ask_llm(self, user_text: str) -> tuple:
    	system_prompt = """You are a robot movement controller. 
    		Output ONLY the following format:
    		COMMAND: [forward, backward, left, right, stop]
    		EXPLANATION: [one sentence]

    		Rules:
    			- 'go' or 'move' -> forward
    		- 'turn left' -> left
    		- 'turn right' -> right
    		- 'back' -> backward
    		- Default to 'stop' ONLY if the command is completely gibberish."""

    	result = ollama.chat(
        	model=self.model_name,
        	messages=[
            	{'role': 'system', 'content': system_prompt},
            	{'role': 'user', 'content': user_text}
        	]
    	)

		response_text = result['message']['content']
		return self._parse_llm_response(response_text)

	def _parse_llm_response(self, text: str) -> tuple:
    	text_lower = text.lower()
    	command = 'stop'
    	explanation = "No explanation"

    	if 'forward' in text_lower or 'go' in text_lower:
        	command = 'forward'
    	elif 'backward' in text_lower or 'back' in text_lower:
    	    command = 'backward'
    	elif 'left' in text_lower:
        	command = 'left'
    	elif 'right' in text_lower:
        	command = 'right'
    	else:
        	command = 'stop'

    	if 'explanation:' in text_lower:
        	parts = text_lower.split('explanation:', 1)
        	if len(parts) > 1:
            	explanation = parts[1].strip().split('\n')[0]

		return command, explanation

	def _fallback_parse(self, text: str) -> tuple:
		text_lower = text.lower()

		keyword_map = {
			'forward': ['forward','go'],
			'backward': ['backward', 'back'],
			'left': ['left'],
			'right': ['right'],
			'stop': ['stop', 'halt'],
		}

		for command, keywords in keyword_map.items():
			if any(kw in text_lower for kw in keywords):
				return command, f'Keyword matched: {command}'

		return 'stop', 'Could not understand, stopping for safety.'

def main(args=None):
	rclpy.init(args=args)
	node = LLMServiceNode()

	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass
	finally:
		node.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()