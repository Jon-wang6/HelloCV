// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_demo:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_
#define BASE_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_demo/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_demo
{

namespace srv
{

namespace builder
{

class Init_Distance_Request_theta
{
public:
  explicit Init_Distance_Request_theta(::base_demo::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  ::base_demo::srv::Distance_Request theta(::base_demo::srv::Distance_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::srv::Distance_Request msg_;
};

class Init_Distance_Request_y
{
public:
  explicit Init_Distance_Request_y(::base_demo::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  Init_Distance_Request_theta y(::base_demo::srv::Distance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Distance_Request_theta(msg_);
  }

private:
  ::base_demo::srv::Distance_Request msg_;
};

class Init_Distance_Request_x
{
public:
  Init_Distance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Request_y x(::base_demo::srv::Distance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Distance_Request_y(msg_);
  }

private:
  ::base_demo::srv::Distance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::srv::Distance_Request>()
{
  return base_demo::srv::builder::Init_Distance_Request_x();
}

}  // namespace base_demo


namespace base_demo
{

namespace srv
{

namespace builder
{

class Init_Distance_Response_distance
{
public:
  Init_Distance_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_demo::srv::Distance_Response distance(::base_demo::srv::Distance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_demo::srv::Distance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_demo::srv::Distance_Response>()
{
  return base_demo::srv::builder::Init_Distance_Response_distance();
}

}  // namespace base_demo

#endif  // BASE_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_
