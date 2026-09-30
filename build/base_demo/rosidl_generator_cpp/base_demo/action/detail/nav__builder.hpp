// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_demo:action/Nav.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__ACTION__DETAIL__NAV__BUILDER_HPP_
#define BASE_DEMO__ACTION__DETAIL__NAV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_demo/action/detail/nav__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_Goal_goal_theta
{
public:
  explicit Init_Nav_Goal_goal_theta(::base_demo::action::Nav_Goal & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_Goal goal_theta(::base_demo::action::Nav_Goal::_goal_theta_type arg)
  {
    msg_.goal_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_Goal msg_;
};

class Init_Nav_Goal_goal_y
{
public:
  explicit Init_Nav_Goal_goal_y(::base_demo::action::Nav_Goal & msg)
  : msg_(msg)
  {}
  Init_Nav_Goal_goal_theta goal_y(::base_demo::action::Nav_Goal::_goal_y_type arg)
  {
    msg_.goal_y = std::move(arg);
    return Init_Nav_Goal_goal_theta(msg_);
  }

private:
  ::base_demo::action::Nav_Goal msg_;
};

class Init_Nav_Goal_goal_x
{
public:
  Init_Nav_Goal_goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_Goal_goal_y goal_x(::base_demo::action::Nav_Goal::_goal_x_type arg)
  {
    msg_.goal_x = std::move(arg);
    return Init_Nav_Goal_goal_y(msg_);
  }

private:
  ::base_demo::action::Nav_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_Goal>()
{
  return base_demo::action::builder::Init_Nav_Goal_goal_x();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_Result_turtle_theta
{
public:
  explicit Init_Nav_Result_turtle_theta(::base_demo::action::Nav_Result & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_Result turtle_theta(::base_demo::action::Nav_Result::_turtle_theta_type arg)
  {
    msg_.turtle_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_Result msg_;
};

class Init_Nav_Result_turtle_y
{
public:
  explicit Init_Nav_Result_turtle_y(::base_demo::action::Nav_Result & msg)
  : msg_(msg)
  {}
  Init_Nav_Result_turtle_theta turtle_y(::base_demo::action::Nav_Result::_turtle_y_type arg)
  {
    msg_.turtle_y = std::move(arg);
    return Init_Nav_Result_turtle_theta(msg_);
  }

private:
  ::base_demo::action::Nav_Result msg_;
};

class Init_Nav_Result_turtle_x
{
public:
  Init_Nav_Result_turtle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_Result_turtle_y turtle_x(::base_demo::action::Nav_Result::_turtle_x_type arg)
  {
    msg_.turtle_x = std::move(arg);
    return Init_Nav_Result_turtle_y(msg_);
  }

private:
  ::base_demo::action::Nav_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_Result>()
{
  return base_demo::action::builder::Init_Nav_Result_turtle_x();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_Feedback_distance
{
public:
  Init_Nav_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_demo::action::Nav_Feedback distance(::base_demo::action::Nav_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_Feedback>()
{
  return base_demo::action::builder::Init_Nav_Feedback_distance();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_SendGoal_Request_goal
{
public:
  explicit Init_Nav_SendGoal_Request_goal(::base_demo::action::Nav_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_SendGoal_Request goal(::base_demo::action::Nav_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_SendGoal_Request msg_;
};

class Init_Nav_SendGoal_Request_goal_id
{
public:
  Init_Nav_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_SendGoal_Request_goal goal_id(::base_demo::action::Nav_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nav_SendGoal_Request_goal(msg_);
  }

private:
  ::base_demo::action::Nav_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_SendGoal_Request>()
{
  return base_demo::action::builder::Init_Nav_SendGoal_Request_goal_id();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_SendGoal_Response_stamp
{
public:
  explicit Init_Nav_SendGoal_Response_stamp(::base_demo::action::Nav_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_SendGoal_Response stamp(::base_demo::action::Nav_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_SendGoal_Response msg_;
};

class Init_Nav_SendGoal_Response_accepted
{
public:
  Init_Nav_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_SendGoal_Response_stamp accepted(::base_demo::action::Nav_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Nav_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_demo::action::Nav_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_SendGoal_Response>()
{
  return base_demo::action::builder::Init_Nav_SendGoal_Response_accepted();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_GetResult_Request_goal_id
{
public:
  Init_Nav_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_demo::action::Nav_GetResult_Request goal_id(::base_demo::action::Nav_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_GetResult_Request>()
{
  return base_demo::action::builder::Init_Nav_GetResult_Request_goal_id();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_GetResult_Response_result
{
public:
  explicit Init_Nav_GetResult_Response_result(::base_demo::action::Nav_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_GetResult_Response result(::base_demo::action::Nav_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_GetResult_Response msg_;
};

class Init_Nav_GetResult_Response_status
{
public:
  Init_Nav_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_GetResult_Response_result status(::base_demo::action::Nav_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Nav_GetResult_Response_result(msg_);
  }

private:
  ::base_demo::action::Nav_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_GetResult_Response>()
{
  return base_demo::action::builder::Init_Nav_GetResult_Response_status();
}

}  // namespace base_demo


namespace base_demo
{

namespace action
{

namespace builder
{

class Init_Nav_FeedbackMessage_feedback
{
public:
  explicit Init_Nav_FeedbackMessage_feedback(::base_demo::action::Nav_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_demo::action::Nav_FeedbackMessage feedback(::base_demo::action::Nav_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::action::Nav_FeedbackMessage msg_;
};

class Init_Nav_FeedbackMessage_goal_id
{
public:
  Init_Nav_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_FeedbackMessage_feedback goal_id(::base_demo::action::Nav_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nav_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_demo::action::Nav_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::action::Nav_FeedbackMessage>()
{
  return base_demo::action::builder::Init_Nav_FeedbackMessage_goal_id();
}

}  // namespace base_demo

#endif  // BASE_DEMO__ACTION__DETAIL__NAV__BUILDER_HPP_
