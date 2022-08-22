// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__BUILDER_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__BUILDER_HPP_

#include "m2s2_custom_interfaces/msg/detail/enviro_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace m2s2_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_EnviroData_humidity
{
public:
  explicit Init_EnviroData_humidity(::m2s2_custom_interfaces::msg::EnviroData & msg)
  : msg_(msg)
  {}
  ::m2s2_custom_interfaces::msg::EnviroData humidity(::m2s2_custom_interfaces::msg::EnviroData::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::EnviroData msg_;
};

class Init_EnviroData_pressure
{
public:
  explicit Init_EnviroData_pressure(::m2s2_custom_interfaces::msg::EnviroData & msg)
  : msg_(msg)
  {}
  Init_EnviroData_humidity pressure(::m2s2_custom_interfaces::msg::EnviroData::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_EnviroData_humidity(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::EnviroData msg_;
};

class Init_EnviroData_temperature
{
public:
  explicit Init_EnviroData_temperature(::m2s2_custom_interfaces::msg::EnviroData & msg)
  : msg_(msg)
  {}
  Init_EnviroData_pressure temperature(::m2s2_custom_interfaces::msg::EnviroData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_EnviroData_pressure(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::EnviroData msg_;
};

class Init_EnviroData_header
{
public:
  Init_EnviroData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnviroData_temperature header(::m2s2_custom_interfaces::msg::EnviroData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnviroData_temperature(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::EnviroData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::m2s2_custom_interfaces::msg::EnviroData>()
{
  return m2s2_custom_interfaces::msg::builder::Init_EnviroData_header();
}

}  // namespace m2s2_custom_interfaces

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__BUILDER_HPP_
