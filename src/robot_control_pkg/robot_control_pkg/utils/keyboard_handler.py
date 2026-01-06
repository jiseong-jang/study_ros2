import sys
import select
import tty
import termios

class KeyboardHandler:
    def __init__(self):
        self.settings = termios.tcgetattr(sys.stdin)
        self.key_map = {
            'w': 'forward',
            's': 'backward',
            'a': 'left',
            'd': 'right',
            ' ': 'stop',
            's': 'stop',
            'l': 'llm_mode',
            'q': 'quit'
        }

    def __enter__(self):
        tty.setraw(sys.stdin.fileno())
        return self

    def __exit__(self, type, value, traceback):
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)

    def get_key(self, timeout=0.1):
        tty.setraw(sys.stdin.fileno())
        rlist, _, _ = select.select([sys.stdin], [], [], timeout)
        if rlist:
            key = sys.stdin.read(1)
            return self.key_map.get(key.lower(), None)
        return None

    @staticmethod
    def print_instructions():
        print("""
---------------------------------------
    W 
    S
    A
    D
    Space/S
    
    L : LLM
    Q 
---------------------------------------
        """)