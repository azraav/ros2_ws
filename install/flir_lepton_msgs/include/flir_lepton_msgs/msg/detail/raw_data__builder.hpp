// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_

#include "flir_lepton_msgs/msg/detail/raw_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flir_lepton_msgs
{

namespace msg
{

namespace builder
{

class Init_RawData_raw_values
{
public:
  explicit Init_RawData_raw_values(::flir_lepton_msgs::msg::RawData & msg)
  : msg_(msg)
  {}
  ::flir_lepton_msgs::msg::RawData raw_values(::flir_lepton_msgs::msg::RawData::_raw_values_type arg)
  {
    msg_.raw_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flir_lepton_msgs::msg::RawData msg_;
};

class Init_RawData_header
{
public:
  Init_RawData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawData_raw_values header(::flir_lepton_msgs::msg::RawData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawData_raw_values(msg_);
  }

private:
  ::flir_lepton_msgs::msg::RawData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flir_lepton_msgs::msg::RawData>()
{
  return flir_lepton_msgs::msg::builder::Init_RawData_header();
}

}  // namespace flir_lepton_msgs

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
