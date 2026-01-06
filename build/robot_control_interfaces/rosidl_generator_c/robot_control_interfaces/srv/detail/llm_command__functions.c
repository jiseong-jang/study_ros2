// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_control_interfaces:srv/LLMCommand.idl
// generated code does not contain a copyright notice
#include "robot_control_interfaces/srv/detail/llm_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `user_input`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_control_interfaces__srv__LLMCommand_Request__init(robot_control_interfaces__srv__LLMCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // user_input
  if (!rosidl_runtime_c__String__init(&msg->user_input)) {
    robot_control_interfaces__srv__LLMCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_control_interfaces__srv__LLMCommand_Request__fini(robot_control_interfaces__srv__LLMCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // user_input
  rosidl_runtime_c__String__fini(&msg->user_input);
}

bool
robot_control_interfaces__srv__LLMCommand_Request__are_equal(const robot_control_interfaces__srv__LLMCommand_Request * lhs, const robot_control_interfaces__srv__LLMCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_input
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_input), &(rhs->user_input)))
  {
    return false;
  }
  return true;
}

bool
robot_control_interfaces__srv__LLMCommand_Request__copy(
  const robot_control_interfaces__srv__LLMCommand_Request * input,
  robot_control_interfaces__srv__LLMCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // user_input
  if (!rosidl_runtime_c__String__copy(
      &(input->user_input), &(output->user_input)))
  {
    return false;
  }
  return true;
}

robot_control_interfaces__srv__LLMCommand_Request *
robot_control_interfaces__srv__LLMCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Request * msg = (robot_control_interfaces__srv__LLMCommand_Request *)allocator.allocate(sizeof(robot_control_interfaces__srv__LLMCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_control_interfaces__srv__LLMCommand_Request));
  bool success = robot_control_interfaces__srv__LLMCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_control_interfaces__srv__LLMCommand_Request__destroy(robot_control_interfaces__srv__LLMCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_control_interfaces__srv__LLMCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_control_interfaces__srv__LLMCommand_Request__Sequence__init(robot_control_interfaces__srv__LLMCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Request * data = NULL;

  if (size) {
    data = (robot_control_interfaces__srv__LLMCommand_Request *)allocator.zero_allocate(size, sizeof(robot_control_interfaces__srv__LLMCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_control_interfaces__srv__LLMCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_control_interfaces__srv__LLMCommand_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_control_interfaces__srv__LLMCommand_Request__Sequence__fini(robot_control_interfaces__srv__LLMCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_control_interfaces__srv__LLMCommand_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_control_interfaces__srv__LLMCommand_Request__Sequence *
robot_control_interfaces__srv__LLMCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Request__Sequence * array = (robot_control_interfaces__srv__LLMCommand_Request__Sequence *)allocator.allocate(sizeof(robot_control_interfaces__srv__LLMCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_control_interfaces__srv__LLMCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_control_interfaces__srv__LLMCommand_Request__Sequence__destroy(robot_control_interfaces__srv__LLMCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_control_interfaces__srv__LLMCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_control_interfaces__srv__LLMCommand_Request__Sequence__are_equal(const robot_control_interfaces__srv__LLMCommand_Request__Sequence * lhs, const robot_control_interfaces__srv__LLMCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_control_interfaces__srv__LLMCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_control_interfaces__srv__LLMCommand_Request__Sequence__copy(
  const robot_control_interfaces__srv__LLMCommand_Request__Sequence * input,
  robot_control_interfaces__srv__LLMCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_control_interfaces__srv__LLMCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_control_interfaces__srv__LLMCommand_Request * data =
      (robot_control_interfaces__srv__LLMCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_control_interfaces__srv__LLMCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_control_interfaces__srv__LLMCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_control_interfaces__srv__LLMCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `command`
// Member `explanation`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
robot_control_interfaces__srv__LLMCommand_Response__init(robot_control_interfaces__srv__LLMCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    robot_control_interfaces__srv__LLMCommand_Response__fini(msg);
    return false;
  }
  // explanation
  if (!rosidl_runtime_c__String__init(&msg->explanation)) {
    robot_control_interfaces__srv__LLMCommand_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
robot_control_interfaces__srv__LLMCommand_Response__fini(robot_control_interfaces__srv__LLMCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // explanation
  rosidl_runtime_c__String__fini(&msg->explanation);
  // success
}

bool
robot_control_interfaces__srv__LLMCommand_Response__are_equal(const robot_control_interfaces__srv__LLMCommand_Response * lhs, const robot_control_interfaces__srv__LLMCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // explanation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->explanation), &(rhs->explanation)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
robot_control_interfaces__srv__LLMCommand_Response__copy(
  const robot_control_interfaces__srv__LLMCommand_Response * input,
  robot_control_interfaces__srv__LLMCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // explanation
  if (!rosidl_runtime_c__String__copy(
      &(input->explanation), &(output->explanation)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

robot_control_interfaces__srv__LLMCommand_Response *
robot_control_interfaces__srv__LLMCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Response * msg = (robot_control_interfaces__srv__LLMCommand_Response *)allocator.allocate(sizeof(robot_control_interfaces__srv__LLMCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_control_interfaces__srv__LLMCommand_Response));
  bool success = robot_control_interfaces__srv__LLMCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_control_interfaces__srv__LLMCommand_Response__destroy(robot_control_interfaces__srv__LLMCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_control_interfaces__srv__LLMCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_control_interfaces__srv__LLMCommand_Response__Sequence__init(robot_control_interfaces__srv__LLMCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Response * data = NULL;

  if (size) {
    data = (robot_control_interfaces__srv__LLMCommand_Response *)allocator.zero_allocate(size, sizeof(robot_control_interfaces__srv__LLMCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_control_interfaces__srv__LLMCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_control_interfaces__srv__LLMCommand_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_control_interfaces__srv__LLMCommand_Response__Sequence__fini(robot_control_interfaces__srv__LLMCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_control_interfaces__srv__LLMCommand_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_control_interfaces__srv__LLMCommand_Response__Sequence *
robot_control_interfaces__srv__LLMCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_control_interfaces__srv__LLMCommand_Response__Sequence * array = (robot_control_interfaces__srv__LLMCommand_Response__Sequence *)allocator.allocate(sizeof(robot_control_interfaces__srv__LLMCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_control_interfaces__srv__LLMCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_control_interfaces__srv__LLMCommand_Response__Sequence__destroy(robot_control_interfaces__srv__LLMCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_control_interfaces__srv__LLMCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_control_interfaces__srv__LLMCommand_Response__Sequence__are_equal(const robot_control_interfaces__srv__LLMCommand_Response__Sequence * lhs, const robot_control_interfaces__srv__LLMCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_control_interfaces__srv__LLMCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_control_interfaces__srv__LLMCommand_Response__Sequence__copy(
  const robot_control_interfaces__srv__LLMCommand_Response__Sequence * input,
  robot_control_interfaces__srv__LLMCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_control_interfaces__srv__LLMCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_control_interfaces__srv__LLMCommand_Response * data =
      (robot_control_interfaces__srv__LLMCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_control_interfaces__srv__LLMCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_control_interfaces__srv__LLMCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_control_interfaces__srv__LLMCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
