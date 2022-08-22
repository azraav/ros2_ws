// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_

#include "audio_common_msgs/msg/detail/audio_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioData_data
{
public:
  explicit Init_AudioData_data(::audio_common_msgs::msg::AudioData & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::AudioData data(::audio_common_msgs::msg::AudioData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

class Init_AudioData_header
{
public:
  Init_AudioData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioData_data header(::audio_common_msgs::msg::AudioData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioData_data(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::AudioData>()
{
  return audio_common_msgs::msg::builder::Init_AudioData_header();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
