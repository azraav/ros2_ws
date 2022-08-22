// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__TRAITS_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__TRAITS_HPP_

#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<m2s2_custom_interfaces::msg::RawLeptonData>()
{
  return "m2s2_custom_interfaces::msg::RawLeptonData";
}

template<>
inline const char * name<m2s2_custom_interfaces::msg::RawLeptonData>()
{
  return "m2s2_custom_interfaces/msg/RawLeptonData";
}

template<>
struct has_fixed_size<m2s2_custom_interfaces::msg::RawLeptonData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<m2s2_custom_interfaces::msg::RawLeptonData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<m2s2_custom_interfaces::msg::RawLeptonData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__TRAITS_HPP_
