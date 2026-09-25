// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_demo:action/Progress.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_
#define BASE_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_demo/action/detail/progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_Goal & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_Goal>()
{
  return "base_demo::action::Progress_Goal";
}

template<>
inline const char * name<base_demo::action::Progress_Goal>()
{
  return "base_demo/action/Progress_Goal";
}

template<>
struct has_fixed_size<base_demo::action::Progress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_demo::action::Progress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_demo::action::Progress_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_Result & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_Result>()
{
  return "base_demo::action::Progress_Result";
}

template<>
inline const char * name<base_demo::action::Progress_Result>()
{
  return "base_demo/action/Progress_Result";
}

template<>
struct has_fixed_size<base_demo::action::Progress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_demo::action::Progress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_demo::action::Progress_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_Feedback & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_Feedback>()
{
  return "base_demo::action::Progress_Feedback";
}

template<>
inline const char * name<base_demo::action::Progress_Feedback>()
{
  return "base_demo/action/Progress_Feedback";
}

template<>
struct has_fixed_size<base_demo::action::Progress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_demo::action::Progress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_demo::action::Progress_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "base_demo/action/detail/progress__traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_SendGoal_Request & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_SendGoal_Request>()
{
  return "base_demo::action::Progress_SendGoal_Request";
}

template<>
inline const char * name<base_demo::action::Progress_SendGoal_Request>()
{
  return "base_demo/action/Progress_SendGoal_Request";
}

template<>
struct has_fixed_size<base_demo::action::Progress_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<base_demo::action::Progress_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_demo::action::Progress_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<base_demo::action::Progress_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_demo::action::Progress_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_SendGoal_Response & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_SendGoal_Response>()
{
  return "base_demo::action::Progress_SendGoal_Response";
}

template<>
inline const char * name<base_demo::action::Progress_SendGoal_Response>()
{
  return "base_demo/action/Progress_SendGoal_Response";
}

template<>
struct has_fixed_size<base_demo::action::Progress_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<base_demo::action::Progress_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<base_demo::action::Progress_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_demo::action::Progress_SendGoal>()
{
  return "base_demo::action::Progress_SendGoal";
}

template<>
inline const char * name<base_demo::action::Progress_SendGoal>()
{
  return "base_demo/action/Progress_SendGoal";
}

template<>
struct has_fixed_size<base_demo::action::Progress_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<base_demo::action::Progress_SendGoal_Request>::value &&
    has_fixed_size<base_demo::action::Progress_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_demo::action::Progress_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<base_demo::action::Progress_SendGoal_Request>::value &&
    has_bounded_size<base_demo::action::Progress_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<base_demo::action::Progress_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<base_demo::action::Progress_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_demo::action::Progress_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_GetResult_Request & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_GetResult_Request>()
{
  return "base_demo::action::Progress_GetResult_Request";
}

template<>
inline const char * name<base_demo::action::Progress_GetResult_Request>()
{
  return "base_demo/action/Progress_GetResult_Request";
}

template<>
struct has_fixed_size<base_demo::action::Progress_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_demo::action::Progress_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_demo::action::Progress_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "base_demo/action/detail/progress__traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_GetResult_Response & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_GetResult_Response>()
{
  return "base_demo::action::Progress_GetResult_Response";
}

template<>
inline const char * name<base_demo::action::Progress_GetResult_Response>()
{
  return "base_demo/action/Progress_GetResult_Response";
}

template<>
struct has_fixed_size<base_demo::action::Progress_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<base_demo::action::Progress_Result>::value> {};

template<>
struct has_bounded_size<base_demo::action::Progress_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<base_demo::action::Progress_Result>::value> {};

template<>
struct is_message<base_demo::action::Progress_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_demo::action::Progress_GetResult>()
{
  return "base_demo::action::Progress_GetResult";
}

template<>
inline const char * name<base_demo::action::Progress_GetResult>()
{
  return "base_demo/action/Progress_GetResult";
}

template<>
struct has_fixed_size<base_demo::action::Progress_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<base_demo::action::Progress_GetResult_Request>::value &&
    has_fixed_size<base_demo::action::Progress_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_demo::action::Progress_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<base_demo::action::Progress_GetResult_Request>::value &&
    has_bounded_size<base_demo::action::Progress_GetResult_Response>::value
  >
{
};

template<>
struct is_service<base_demo::action::Progress_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<base_demo::action::Progress_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_demo::action::Progress_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "base_demo/action/detail/progress__traits.hpp"

namespace base_demo
{

namespace action
{

inline void to_flow_style_yaml(
  const Progress_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Progress_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Progress_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace base_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_demo::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_demo::action::Progress_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_demo::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_demo::action::to_yaml() instead")]]
inline std::string to_yaml(const base_demo::action::Progress_FeedbackMessage & msg)
{
  return base_demo::action::to_yaml(msg);
}

template<>
inline const char * data_type<base_demo::action::Progress_FeedbackMessage>()
{
  return "base_demo::action::Progress_FeedbackMessage";
}

template<>
inline const char * name<base_demo::action::Progress_FeedbackMessage>()
{
  return "base_demo/action/Progress_FeedbackMessage";
}

template<>
struct has_fixed_size<base_demo::action::Progress_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<base_demo::action::Progress_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_demo::action::Progress_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<base_demo::action::Progress_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_demo::action::Progress_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<base_demo::action::Progress>
  : std::true_type
{
};

template<>
struct is_action_goal<base_demo::action::Progress_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<base_demo::action::Progress_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<base_demo::action::Progress_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BASE_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_
