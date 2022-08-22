// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__BUILDER_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__BUILDER_HPP_

#include "flir_lepton_msgs/msg/detail/temperature_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flir_lepton_msgs
{

namespace msg
{

namespace builder
{

class Init_TemperatureMsg_data
{
public:
  explicit Init_TemperatureMsg_data(::flir_lepton_msgs::msg::TemperatureMsg & msg)
  : msg_(msg)
  {}
  ::flir_lepton_msgs::msg::TemperatureMsg data(::flir_lepton_msgs::msg::TemperatureMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureMsg msg_;
};

class Init_TemperatureMsg_unit
{
public:
  explicit Init_TemperatureMsg_unit(::flir_lepton_msgs::msg::TemperatureMsg & msg)
  : msg_(msg)
  {}
  Init_TemperatureMsg_data unit(::flir_lepton_msgs::msg::TemperatureMsg::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_TemperatureMsg_data(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureMsg msg_;
};

class Init_TemperatureMsg_width
{
public:
  explicit Init_TemperatureMsg_width(::flir_lepton_msgs::msg::TemperatureMsg & msg)
  : msg_(msg)
  {}
  Init_TemperatureMsg_unit width(::flir_lepton_msgs::msg::TemperatureMsg::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TemperatureMsg_unit(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureMsg msg_;
};

class Init_TemperatureMsg_height
{
public:
  explicit Init_TemperatureMsg_height(::flir_lepton_msgs::msg::TemperatureMsg & msg)
  : msg_(msg)
  {}
  Init_TemperatureMsg_width height(::flir_lepton_msgs::msg::TemperatureMsg::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TemperatureMsg_width(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureMsg msg_;
};

class Init_TemperatureMsg_header
{
public:
  Init_TemperatureMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemperatureMsg_height header(::flir_lepton_msgs::msg::TemperatureMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TemperatureMsg_height(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flir_lepton_msgs::msg::TemperatureMsg>()
{
  return flir_lepton_msgs::msg::builder::Init_TemperatureMsg_header();
}

}  // namespace flir_lepton_msgs

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__BUILDER_HPP_
