// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__BUILDER_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__BUILDER_HPP_

#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace m2s2_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_RawIrData_raw_values
{
public:
  explicit Init_RawIrData_raw_values(::m2s2_custom_interfaces::msg::RawIrData & msg)
  : msg_(msg)
  {}
  ::m2s2_custom_interfaces::msg::RawIrData raw_values(::m2s2_custom_interfaces::msg::RawIrData::_raw_values_type arg)
  {
    msg_.raw_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawIrData msg_;
};

class Init_RawIrData_header
{
public:
  Init_RawIrData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawIrData_raw_values header(::m2s2_custom_interfaces::msg::RawIrData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawIrData_raw_values(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawIrData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::m2s2_custom_interfaces::msg::RawIrData>()
{
  return m2s2_custom_interfaces::msg::builder::Init_RawIrData_header();
}

}  // namespace m2s2_custom_interfaces

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__BUILDER_HPP_
