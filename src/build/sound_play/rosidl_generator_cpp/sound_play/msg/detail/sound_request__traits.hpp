// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sound_play:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_
#define SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_

#include "sound_play/msg/detail/sound_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::msg::SoundRequest>()
{
  return "sound_play::msg::SoundRequest";
}

template<>
inline const char * name<sound_play::msg::SoundRequest>()
{
  return "sound_play/msg/SoundRequest";
}

template<>
struct has_fixed_size<sound_play::msg::SoundRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sound_play::msg::SoundRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sound_play::msg::SoundRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__TRAITS_HPP_
