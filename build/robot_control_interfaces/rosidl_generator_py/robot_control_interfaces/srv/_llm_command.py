# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_control_interfaces:srv/LLMCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LLMCommand_Request(type):
    """Metaclass of message 'LLMCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_control_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_control_interfaces.srv.LLMCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__llm_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__llm_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__llm_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__llm_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__llm_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LLMCommand_Request(metaclass=Metaclass_LLMCommand_Request):
    """Message class 'LLMCommand_Request'."""

    __slots__ = [
        '_user_input',
    ]

    _fields_and_field_types = {
        'user_input': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.user_input = kwargs.get('user_input', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.user_input != other.user_input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def user_input(self):
        """Message field 'user_input'."""
        return self._user_input

    @user_input.setter
    def user_input(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_input' field must be of type 'str'"
        self._user_input = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LLMCommand_Response(type):
    """Metaclass of message 'LLMCommand_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_control_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_control_interfaces.srv.LLMCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__llm_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__llm_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__llm_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__llm_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__llm_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LLMCommand_Response(metaclass=Metaclass_LLMCommand_Response):
    """Message class 'LLMCommand_Response'."""

    __slots__ = [
        '_command',
        '_explanation',
        '_success',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'explanation': 'string',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.explanation = kwargs.get('explanation', str())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        if self.explanation != other.explanation:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def explanation(self):
        """Message field 'explanation'."""
        return self._explanation

    @explanation.setter
    def explanation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'explanation' field must be of type 'str'"
        self._explanation = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_LLMCommand(type):
    """Metaclass of service 'LLMCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_control_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_control_interfaces.srv.LLMCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__llm_command

            from robot_control_interfaces.srv import _llm_command
            if _llm_command.Metaclass_LLMCommand_Request._TYPE_SUPPORT is None:
                _llm_command.Metaclass_LLMCommand_Request.__import_type_support__()
            if _llm_command.Metaclass_LLMCommand_Response._TYPE_SUPPORT is None:
                _llm_command.Metaclass_LLMCommand_Response.__import_type_support__()


class LLMCommand(metaclass=Metaclass_LLMCommand):
    from robot_control_interfaces.srv._llm_command import LLMCommand_Request as Request
    from robot_control_interfaces.srv._llm_command import LLMCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
