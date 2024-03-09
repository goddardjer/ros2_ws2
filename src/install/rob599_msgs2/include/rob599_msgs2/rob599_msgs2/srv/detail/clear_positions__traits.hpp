// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_msgs2:srv/ClearPositions.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__SRV__DETAIL__CLEAR_POSITIONS__TRAITS_HPP_
#define ROB599_MSGS2__SRV__DETAIL__CLEAR_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_msgs2/srv/detail/clear_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearPositions_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearPositions_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::srv::ClearPositions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::srv::ClearPositions_Request & msg)
{
  return rob599_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::srv::ClearPositions_Request>()
{
  return "rob599_msgs2::srv::ClearPositions_Request";
}

template<>
inline const char * name<rob599_msgs2::srv::ClearPositions_Request>()
{
  return "rob599_msgs2/srv/ClearPositions_Request";
}

template<>
struct has_fixed_size<rob599_msgs2::srv::ClearPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs2::srv::ClearPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs2::srv::ClearPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearPositions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearPositions_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearPositions_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs2::srv::ClearPositions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs2::srv::ClearPositions_Response & msg)
{
  return rob599_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs2::srv::ClearPositions_Response>()
{
  return "rob599_msgs2::srv::ClearPositions_Response";
}

template<>
inline const char * name<rob599_msgs2::srv::ClearPositions_Response>()
{
  return "rob599_msgs2/srv/ClearPositions_Response";
}

template<>
struct has_fixed_size<rob599_msgs2::srv::ClearPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs2::srv::ClearPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs2::srv::ClearPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_msgs2::srv::ClearPositions>()
{
  return "rob599_msgs2::srv::ClearPositions";
}

template<>
inline const char * name<rob599_msgs2::srv::ClearPositions>()
{
  return "rob599_msgs2/srv/ClearPositions";
}

template<>
struct has_fixed_size<rob599_msgs2::srv::ClearPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_msgs2::srv::ClearPositions_Request>::value &&
    has_fixed_size<rob599_msgs2::srv::ClearPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_msgs2::srv::ClearPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_msgs2::srv::ClearPositions_Request>::value &&
    has_bounded_size<rob599_msgs2::srv::ClearPositions_Response>::value
  >
{
};

template<>
struct is_service<rob599_msgs2::srv::ClearPositions>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_msgs2::srv::ClearPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_msgs2::srv::ClearPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROB599_MSGS2__SRV__DETAIL__CLEAR_POSITIONS__TRAITS_HPP_
