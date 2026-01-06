// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_control_interfaces:srv/LLMCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_H_
#define ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_input'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LLMCommand in the package robot_control_interfaces.
typedef struct robot_control_interfaces__srv__LLMCommand_Request
{
  rosidl_runtime_c__String user_input;
} robot_control_interfaces__srv__LLMCommand_Request;

// Struct for a sequence of robot_control_interfaces__srv__LLMCommand_Request.
typedef struct robot_control_interfaces__srv__LLMCommand_Request__Sequence
{
  robot_control_interfaces__srv__LLMCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__srv__LLMCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'explanation'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LLMCommand in the package robot_control_interfaces.
typedef struct robot_control_interfaces__srv__LLMCommand_Response
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String explanation;
  bool success;
} robot_control_interfaces__srv__LLMCommand_Response;

// Struct for a sequence of robot_control_interfaces__srv__LLMCommand_Response.
typedef struct robot_control_interfaces__srv__LLMCommand_Response__Sequence
{
  robot_control_interfaces__srv__LLMCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__srv__LLMCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CONTROL_INTERFACES__SRV__DETAIL__LLM_COMMAND__STRUCT_H_
