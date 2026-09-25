// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_demo:srv/Addints.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__SRV__DETAIL__ADDINTS__BUILDER_HPP_
#define BASE_DEMO__SRV__DETAIL__ADDINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_demo/srv/detail/addints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_demo
{

namespace srv
{

namespace builder
{

class Init_Addints_Request_num2
{
public:
  explicit Init_Addints_Request_num2(::base_demo::srv::Addints_Request & msg)
  : msg_(msg)
  {}
  ::base_demo::srv::Addints_Request num2(::base_demo::srv::Addints_Request::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::srv::Addints_Request msg_;
};

class Init_Addints_Request_num1
{
public:
  Init_Addints_Request_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Addints_Request_num2 num1(::base_demo::srv::Addints_Request::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_Addints_Request_num2(msg_);
  }

private:
  ::base_demo::srv::Addints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::srv::Addints_Request>()
{
  return base_demo::srv::builder::Init_Addints_Request_num1();
}

}  // namespace base_demo


namespace base_demo
{

namespace srv
{

namespace builder
{

class Init_Addints_Response_sum
{
public:
  Init_Addints_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_demo::srv::Addints_Response sum(::base_demo::srv::Addints_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::srv::Addints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::srv::Addints_Response>()
{
  return base_demo::srv::builder::Init_Addints_Response_sum();
}

}  // namespace base_demo

#endif  // BASE_DEMO__SRV__DETAIL__ADDINTS__BUILDER_HPP_
