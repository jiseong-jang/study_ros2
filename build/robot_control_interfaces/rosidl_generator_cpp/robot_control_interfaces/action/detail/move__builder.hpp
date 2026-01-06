// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_control_interfaces:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_control_interfaces/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Goal_speed
{
public:
  explicit Init_Move_Goal_speed(::robot_control_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_Goal speed(::robot_control_interfaces::action::Move_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_duration
{
public:
  explicit Init_Move_Goal_duration(::robot_control_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_speed duration(::robot_control_interfaces::action::Move_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_Move_Goal_speed(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_direction
{
public:
  Init_Move_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_duration direction(::robot_control_interfaces::action::Move_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Move_Goal_duration(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_Goal>()
{
  return robot_control_interfaces::action::builder::Init_Move_Goal_direction();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Result_distance_traveled
{
public:
  explicit Init_Move_Result_distance_traveled(::robot_control_interfaces::action::Move_Result & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_Result distance_traveled(::robot_control_interfaces::action::Move_Result::_distance_traveled_type arg)
  {
    msg_.distance_traveled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Result msg_;
};

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Result_distance_traveled success(::robot_control_interfaces::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Move_Result_distance_traveled(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_Result>()
{
  return robot_control_interfaces::action::builder::Init_Move_Result_success();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_progress
{
public:
  explicit Init_Move_Feedback_progress(::robot_control_interfaces::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_Feedback progress(::robot_control_interfaces::action::Move_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Feedback msg_;
};

class Init_Move_Feedback_time_remaining
{
public:
  Init_Move_Feedback_time_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Feedback_progress time_remaining(::robot_control_interfaces::action::Move_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return Init_Move_Feedback_progress(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_Feedback>()
{
  return robot_control_interfaces::action::builder::Init_Move_Feedback_time_remaining();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::robot_control_interfaces::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_SendGoal_Request goal(::robot_control_interfaces::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::robot_control_interfaces::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_SendGoal_Request>()
{
  return robot_control_interfaces::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::robot_control_interfaces::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_SendGoal_Response stamp(::robot_control_interfaces::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::robot_control_interfaces::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_SendGoal_Response>()
{
  return robot_control_interfaces::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_control_interfaces::action::Move_GetResult_Request goal_id(::robot_control_interfaces::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_GetResult_Request>()
{
  return robot_control_interfaces::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::robot_control_interfaces::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_GetResult_Response result(::robot_control_interfaces::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::robot_control_interfaces::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_GetResult_Response>()
{
  return robot_control_interfaces::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::robot_control_interfaces::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::Move_FeedbackMessage feedback(::robot_control_interfaces::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::robot_control_interfaces::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_control_interfaces::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::Move_FeedbackMessage>()
{
  return robot_control_interfaces::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace robot_control_interfaces

#endif  // ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
