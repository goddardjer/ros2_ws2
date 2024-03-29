// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_msgs2:srv/Load.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__SRV__DETAIL__LOAD__BUILDER_HPP_
#define ROB599_MSGS2__SRV__DETAIL__LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_msgs2/srv/detail/load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_msgs2
{

namespace srv
{

namespace builder
{

class Init_Load_Request_filename
{
public:
  Init_Load_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs2::srv::Load_Request filename(::rob599_msgs2::srv::Load_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs2::srv::Load_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs2::srv::Load_Request>()
{
  return rob599_msgs2::srv::builder::Init_Load_Request_filename();
}

}  // namespace rob599_msgs2


namespace rob599_msgs2
{

namespace srv
{

namespace builder
{

class Init_Load_Response_success
{
public:
  Init_Load_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs2::srv::Load_Response success(::rob599_msgs2::srv::Load_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs2::srv::Load_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs2::srv::Load_Response>()
{
  return rob599_msgs2::srv::builder::Init_Load_Response_success();
}

}  // namespace rob599_msgs2

#endif  // ROB599_MSGS2__SRV__DETAIL__LOAD__BUILDER_HPP_
