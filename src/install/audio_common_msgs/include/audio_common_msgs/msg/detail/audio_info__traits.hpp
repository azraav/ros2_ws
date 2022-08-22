// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_

#include "audio_common_msgs/msg/detail/audio_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audio_common_msgs::msg::AudioInfo>()
{
  return "audio_common_msgs::msg::AudioInfo";
}

template<>
inline const char * name<audio_common_msgs::msg::AudioInfo>()
{
  return "audio_common_msgs/msg/AudioInfo";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::AudioInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::AudioInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::msg::AudioInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
