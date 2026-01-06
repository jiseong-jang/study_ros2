// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_control_interfaces:srv/LLMCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__BUILDER_HPP_
#define ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_control_interfaces/srv/detail/llm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_control_interfaces
{

namespace srv
{

namespace builder
{

class Init_LLMCommand_Request_user_input
{
public:
  Init_LLMCommand_Request_user_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_control_interfaces::srv::LLMCommand_Request user_input(::robot_control_interfaces::srv::LLMCommand_Request::_user_input_type arg)
  {
    msg_.user_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::srv::LLMCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::srv::LLMCommand_Request>()
{
  return robot_control_interfaces::srv::builder::Init_LLMCommand_Request_user_input();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace srv
{

namespace builder
{

class Init_LLMCommand_Response_success
{
public:
  explicit Init_LLMCommand_Response_success(::robot_control_interfaces::srv::LLMCommand_Response & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::srv::LLMCommand_Response success(::robot_control_interfaces::srv::LLMCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::srv::LLMCommand_Response msg_;
};

class Init_LLMCommand_Response_explanation
{
public:
  explicit Init_LLMCommand_Response_explanation(::robot_control_interfaces::srv::LLMCommand_Response & msg)
  : msg_(msg)
  {}
  Init_LLMCommand_Response_success explanation(::robot_control_interfaces::srv::LLMCommand_Response::_explanation_type arg)
  {
    msg_.explanation = std::move(arg);
    return Init_LLMCommand_Response_success(msg_);
  }

private:
  ::robot_control_interfaces::srv::LLMCommand_Response msg_;
};

class Init_LLMCommand_Response_command
{
public:
  Init_LLMCommand_Response_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LLMCommand_Response_explanation command(::robot_control_interfaces::srv::LLMCommand_Response::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_LLMCommand_Response_explanation(msg_);
  }

private:
  ::robot_control_interfaces::srv::LLMCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::srv::LLMCommand_Response>()
{
  return robot_control_interfaces::srv::builder::Init_LLMCommand_Response_command();
}

}  // namespace robot_control_interfaces

#endif  // ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__BUILDER_HPP_
