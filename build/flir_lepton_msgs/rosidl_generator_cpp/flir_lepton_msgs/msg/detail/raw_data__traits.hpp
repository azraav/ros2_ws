// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__TRAITS_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__TRAITS_HPP_

#include "flir_lepton_msgs/msg/detail/raw_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'raw_values'
#include "example_interfaces/msg/detail/int16_multi_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flir_lepton_msgs::msg::RawData>()
{
  return "flir_lepton_msgs::msg::RawData";
}

template<>
inline const char * name<flir_lepton_msgs::msg::RawData>()
{
  return "flir_lepton_msgs/msg/RawData";
}

template<>
struct has_fixed_size<flir_lepton_msgs::msg::RawData>
  : std::integral_constant<bool, has_fixed_size<example_interfaces::msg::Int16MultiArray>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<flir_lepton_msgs::msg::RawData>
  : std::integral_constant<bool, has_bounded_size<example_interfaces::msg::Int16MultiArray>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<flir_lepton_msgs::msg::RawData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__TRAITS_HPP_
