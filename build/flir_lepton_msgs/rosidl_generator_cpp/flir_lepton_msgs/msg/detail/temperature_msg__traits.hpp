// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__TRAITS_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__TRAITS_HPP_

#include "flir_lepton_msgs/msg/detail/temperature_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flir_lepton_msgs::msg::TemperatureMsg>()
{
  return "flir_lepton_msgs::msg::TemperatureMsg";
}

template<>
inline const char * name<flir_lepton_msgs::msg::TemperatureMsg>()
{
  return "flir_lepton_msgs/msg/TemperatureMsg";
}

template<>
struct has_fixed_size<flir_lepton_msgs::msg::TemperatureMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flir_lepton_msgs::msg::TemperatureMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flir_lepton_msgs::msg::TemperatureMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__TRAITS_HPP_
