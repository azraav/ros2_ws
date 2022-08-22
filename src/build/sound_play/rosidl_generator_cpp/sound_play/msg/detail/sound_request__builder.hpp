// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sound_play:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
#define SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_

#include "sound_play/msg/detail/sound_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sound_play
{

namespace msg
{

namespace builder
{

class Init_SoundRequest_arg2
{
public:
  explicit Init_SoundRequest_arg2(::sound_play::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  ::sound_play::msg::SoundRequest arg2(::sound_play::msg::SoundRequest::_arg2_type arg)
  {
    msg_.arg2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play::msg::SoundRequest msg_;
};

class Init_SoundRequest_arg
{
public:
  explicit Init_SoundRequest_arg(::sound_play::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg2 arg(::sound_play::msg::SoundRequest::_arg_type arg)
  {
    msg_.arg = std::move(arg);
    return Init_SoundRequest_arg2(msg_);
  }

private:
  ::sound_play::msg::SoundRequest msg_;
};

class Init_SoundRequest_volume
{
public:
  explicit Init_SoundRequest_volume(::sound_play::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg volume(::sound_play::msg::SoundRequest::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_SoundRequest_arg(msg_);
  }

private:
  ::sound_play::msg::SoundRequest msg_;
};

class Init_SoundRequest_command
{
public:
  explicit Init_SoundRequest_command(::sound_play::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_volume command(::sound_play::msg::SoundRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SoundRequest_volume(msg_);
  }

private:
  ::sound_play::msg::SoundRequest msg_;
};

class Init_SoundRequest_sound
{
public:
  Init_SoundRequest_sound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_command sound(::sound_play::msg::SoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_SoundRequest_command(msg_);
  }

private:
  ::sound_play::msg::SoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play::msg::SoundRequest>()
{
  return sound_play::msg::builder::Init_SoundRequest_sound();
}

}  // namespace sound_play

#endif  // SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
