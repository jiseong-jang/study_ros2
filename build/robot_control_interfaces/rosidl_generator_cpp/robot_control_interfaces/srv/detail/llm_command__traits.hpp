// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_control_interfaces:srv/LLMCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__TRAITS_HPP_
#define ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_control_interfaces/srv/detail/llm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LLMCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_input
  {
    out << "user_input: ";
    rosidl_generator_traits::value_to_yaml(msg.user_input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LLMCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_input: ";
    rosidl_generator_traits::value_to_yaml(msg.user_input, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LLMCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::srv::LLMCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::srv::LLMCommand_Request & msg)
{
  return robot_control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::srv::LLMCommand_Request>()
{
  return "robot_control_interfaces::srv::LLMCommand_Request";
}

template<>
inline const char * name<robot_control_interfaces::srv::LLMCommand_Request>()
{
  return "robot_control_interfaces/srv/LLMCommand_Request";
}

template<>
struct has_fixed_size<robot_control_interfaces::srv::LLMCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_control_interfaces::srv::LLMCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_control_interfaces::srv::LLMCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LLMCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: explanation
  {
    out << "explanation: ";
    rosidl_generator_traits::value_to_yaml(msg.explanation, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LLMCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: explanation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explanation: ";
    rosidl_generator_traits::value_to_yaml(msg.explanation, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LLMCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::srv::LLMCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::srv::LLMCommand_Response & msg)
{
  return robot_control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::srv::LLMCommand_Response>()
{
  return "robot_control_interfaces::srv::LLMCommand_Response";
}

template<>
inline const char * name<robot_control_interfaces::srv::LLMCommand_Response>()
{
  return "robot_control_interfaces/srv/LLMCommand_Response";
}

template<>
struct has_fixed_size<robot_control_interfaces::srv::LLMCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_control_interfaces::srv::LLMCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_control_interfaces::srv::LLMCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_control_interfaces::srv::LLMCommand>()
{
  return "robot_control_interfaces::srv::LLMCommand";
}

template<>
inline const char * name<robot_control_interfaces::srv::LLMCommand>()
{
  return "robot_control_interfaces/srv/LLMCommand";
}

template<>
struct has_fixed_size<robot_control_interfaces::srv::LLMCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_control_interfaces::srv::LLMCommand_Request>::value &&
    has_fixed_size<robot_control_interfaces::srv::LLMCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_control_interfaces::srv::LLMCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_control_interfaces::srv::LLMCommand_Request>::value &&
    has_bounded_size<robot_control_interfaces::srv::LLMCommand_Response>::value
  >
{
};

template<>
struct is_service<robot_control_interfaces::srv::LLMCommand>
  : std::true_type
{
};

template<>
struct is_service_request<robot_control_interfaces::srv::LLMCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_control_interfaces::srv::LLMCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__TRAITS_HPP_
