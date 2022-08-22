// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__TRAITS_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__TRAITS_HPP_

#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"
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
inline const char * data_type<m2s2_custom_interfaces::msg::RawIrData>()
{
  return "m2s2_custom_interfaces::msg::RawIrData";
}

template<>
inline const char * name<m2s2_custom_interfaces::msg::RawIrData>()
{
  return "m2s2_custom_interfaces/msg/RawIrData";
}

template<>
struct has_fixed_size<m2s2_custom_interfaces::msg::RawIrData>
  : std::integral_constant<bool, has_fixed_size<example_interfaces::msg::Int16MultiArray>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<m2s2_custom_interfaces::msg::RawIrData>
  : std::integral_constant<bool, has_bounded_size<example_interfaces::msg::Int16MultiArray>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<m2s2_custom_interfaces::msg::RawIrData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__TRAITS_HPP_
