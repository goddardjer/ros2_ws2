// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_msgs2:action/Patrol.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__ACTION__DETAIL__PATROL__TRAITS_HPP_
#define ROB599_MSGS2__ACTION__DETAIL__PATROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_msgs2/action/detail/patrol__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_Goal & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Patrol_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Patrol_Goal & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_Goal & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_Goal>()
{
  return "rob599_msgs2::action::Patrol_Goal";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_Goal>()
{
  return "rob599_msgs2/action/Patrol_Goal";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Patrol_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Patrol_Result & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_Result & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_Result>()
{
  return "rob599_msgs2::action::Patrol_Result";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_Result>()
{
  return "rob599_msgs2/action/Patrol_Result";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Patrol_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Patrol_Feedback & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_Feedback & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_Feedback>()
{
  return "rob599_msgs2::action::Patrol_Feedback";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_Feedback>()
{
  return "rob599_msgs2/action/Patrol_Feedback";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "rob599_msgs2/action/detail/patrol__traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_SendGoal_Request & msg,
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
  const Patrol_SendGoal_Request & msg,
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

inline std::string to_yaml(const Patrol_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_SendGoal_Request & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_SendGoal_Request>()
{
  return "rob599_msgs2::action::Patrol_SendGoal_Request";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_SendGoal_Request>()
{
  return "rob599_msgs2/action/Patrol_SendGoal_Request";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<rob599_msgs2::action::Patrol_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<rob599_msgs2::action::Patrol_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_SendGoal_Response & msg,
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
  const Patrol_SendGoal_Response & msg,
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

inline std::string to_yaml(const Patrol_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_SendGoal_Response & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_SendGoal_Response>()
{
  return "rob599_msgs2::action::Patrol_SendGoal_Response";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_SendGoal_Response>()
{
  return "rob599_msgs2/action/Patrol_SendGoal_Response";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_SendGoal>()
{
  return "rob599_msgs2::action::Patrol_SendGoal";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_SendGoal>()
{
  return "rob599_msgs2/action/Patrol_SendGoal";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_msgs2::action::Patrol_SendGoal_Request>::value &&
    has_fixed_size<rob599_msgs2::action::Patrol_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_msgs2::action::Patrol_SendGoal_Request>::value &&
    has_bounded_size<rob599_msgs2::action::Patrol_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<rob599_msgs2::action::Patrol_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_msgs2::action::Patrol_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_msgs2::action::Patrol_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_GetResult_Request & msg,
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
  const Patrol_GetResult_Request & msg,
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

inline std::string to_yaml(const Patrol_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_GetResult_Request & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_GetResult_Request>()
{
  return "rob599_msgs2::action::Patrol_GetResult_Request";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_GetResult_Request>()
{
  return "rob599_msgs2/action/Patrol_GetResult_Request";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "rob599_msgs2/action/detail/patrol__traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_GetResult_Response & msg,
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
  const Patrol_GetResult_Response & msg,
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

inline std::string to_yaml(const Patrol_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_GetResult_Response & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_GetResult_Response>()
{
  return "rob599_msgs2::action::Patrol_GetResult_Response";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_GetResult_Response>()
{
  return "rob599_msgs2/action/Patrol_GetResult_Response";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<rob599_msgs2::action::Patrol_Result>::value> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<rob599_msgs2::action::Patrol_Result>::value> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_GetResult>()
{
  return "rob599_msgs2::action::Patrol_GetResult";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_GetResult>()
{
  return "rob599_msgs2/action/Patrol_GetResult";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_msgs2::action::Patrol_GetResult_Request>::value &&
    has_fixed_size<rob599_msgs2::action::Patrol_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_msgs2::action::Patrol_GetResult_Request>::value &&
    has_bounded_size<rob599_msgs2::action::Patrol_GetResult_Response>::value
  >
{
};

template<>
struct is_service<rob599_msgs2::action::Patrol_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_msgs2::action::Patrol_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_msgs2::action::Patrol_GetResult_Response>
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
// #include "rob599_msgs2/action/detail/patrol__traits.hpp"

namespace rob599_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const Patrol_FeedbackMessage & msg,
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
  const Patrol_FeedbackMessage & msg,
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

inline std::string to_yaml(const Patrol_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::action::Patrol_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::action::Patrol_FeedbackMessage & msg)
{
  return rob599_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::action::Patrol_FeedbackMessage>()
{
  return "rob599_msgs2::action::Patrol_FeedbackMessage";
}

template<>
inline const char * name<rob599_msgs2::action::Patrol_FeedbackMessage>()
{
  return "rob599_msgs2/action/Patrol_FeedbackMessage";
}

template<>
struct has_fixed_size<rob599_msgs2::action::Patrol_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<rob599_msgs2::action::Patrol_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rob599_msgs2::action::Patrol_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<rob599_msgs2::action::Patrol_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rob599_msgs2::action::Patrol_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<rob599_msgs2::action::Patrol>
  : std::true_type
{
};

template<>
struct is_action_goal<rob599_msgs2::action::Patrol_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<rob599_msgs2::action::Patrol_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<rob599_msgs2::action::Patrol_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROB599_MSGS2__ACTION__DETAIL__PATROL__TRAITS_HPP_