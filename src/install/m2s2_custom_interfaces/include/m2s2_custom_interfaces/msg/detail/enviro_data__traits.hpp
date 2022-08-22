// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__TRAITS_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__TRAITS_HPP_

#include "m2s2_custom_interfaces/msg/detail/enviro_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<m2s2_custom_interfaces::msg::EnviroData>()
{
  return "m2s2_custom_interfaces::msg::EnviroData";
}

template<>
inline const char * name<m2s2_custom_interfaces::msg::EnviroData>()
{
  return "m2s2_custom_interfaces/msg/EnviroData";
}

template<>
struct has_fixed_size<m2s2_custom_interfaces::msg::EnviroData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<m2s2_custom_interfaces::msg::EnviroData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<m2s2_custom_interfaces::msg::EnviroData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__TRAITS_HPP_
