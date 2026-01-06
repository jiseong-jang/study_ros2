// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_control_interfaces:srv/LLMCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_HPP_
#define ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_control_interfaces__srv__LLMCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_control_interfaces__srv__LLMCommand_Request __declspec(deprecated)
#endif

namespace robot_control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LLMCommand_Request_
{
  using Type = LLMCommand_Request_<ContainerAllocator>;

  explicit LLMCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_input = "";
    }
  }

  explicit LLMCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_input(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_input = "";
    }
  }

  // field types and members
  using _user_input_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_input_type user_input;

  // setters for named parameter idiom
  Type & set__user_input(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_control_interfaces__srv__LLMCommand_Request
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_control_interfaces__srv__LLMCommand_Request
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LLMCommand_Request_ & other) const
  {
    if (this->user_input != other.user_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const LLMCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LLMCommand_Request_

// alias to use template instance with default allocator
using LLMCommand_Request =
  robot_control_interfaces::srv::LLMCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_control_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_control_interfaces__srv__LLMCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_control_interfaces__srv__LLMCommand_Response __declspec(deprecated)
#endif

namespace robot_control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LLMCommand_Response_
{
  using Type = LLMCommand_Response_<ContainerAllocator>;

  explicit LLMCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->explanation = "";
      this->success = false;
    }
  }

  explicit LLMCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    explanation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->explanation = "";
      this->success = false;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _explanation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _explanation_type explanation;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__explanation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->explanation = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_control_interfaces__srv__LLMCommand_Response
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_control_interfaces__srv__LLMCommand_Response
    std::shared_ptr<robot_control_interfaces::srv::LLMCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LLMCommand_Response_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->explanation != other.explanation) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LLMCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LLMCommand_Response_

// alias to use template instance with default allocator
using LLMCommand_Response =
  robot_control_interfaces::srv::LLMCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_control_interfaces

namespace robot_control_interfaces
{

namespace srv
{

struct LLMCommand
{
  using Request = robot_control_interfaces::srv::LLMCommand_Request;
  using Response = robot_control_interfaces::srv::LLMCommand_Response;
};

}  // namespace srv

}  // namespace robot_control_interfaces

#endif  // ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_HPP_
