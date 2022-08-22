// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flir_lepton_msgs:msg/TemperatureRaw.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__BUILDER_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__BUILDER_HPP_

#include "flir_lepton_msgs/msg/detail/temperature_raw__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flir_lepton_msgs
{

namespace msg
{

namespace builder
{

class Init_TemperatureRaw_data
{
public:
  explicit Init_TemperatureRaw_data(::flir_lepton_msgs::msg::TemperatureRaw & msg)
  : msg_(msg)
  {}
  ::flir_lepton_msgs::msg::TemperatureRaw data(::flir_lepton_msgs::msg::TemperatureRaw::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureRaw msg_;
};

class Init_TemperatureRaw_width
{
public:
  explicit Init_TemperatureRaw_width(::flir_lepton_msgs::msg::TemperatureRaw & msg)
  : msg_(msg)
  {}
  Init_TemperatureRaw_data width(::flir_lepton_msgs::msg::TemperatureRaw::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TemperatureRaw_data(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureRaw msg_;
};

class Init_TemperatureRaw_height
{
public:
  explicit Init_TemperatureRaw_height(::flir_lepton_msgs::msg::TemperatureRaw & msg)
  : msg_(msg)
  {}
  Init_TemperatureRaw_width height(::flir_lepton_msgs::msg::TemperatureRaw::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TemperatureRaw_width(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureRaw msg_;
};

class Init_TemperatureRaw_header
{
public:
  Init_TemperatureRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemperatureRaw_height header(::flir_lepton_msgs::msg::TemperatureRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TemperatureRaw_height(msg_);
  }

private:
  ::flir_lepton_msgs::msg::TemperatureRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flir_lepton_msgs::msg::TemperatureRaw>()
{
  return flir_lepton_msgs::msg::builder::Init_TemperatureRaw_header();
}

}  // namespace flir_lepton_msgs

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__BUILDER_HPP_
