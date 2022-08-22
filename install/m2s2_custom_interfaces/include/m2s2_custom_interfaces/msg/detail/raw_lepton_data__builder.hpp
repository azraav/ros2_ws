// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__BUILDER_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__BUILDER_HPP_

#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace m2s2_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_RawLeptonData_data
{
public:
  explicit Init_RawLeptonData_data(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  ::m2s2_custom_interfaces::msg::RawLeptonData data(::m2s2_custom_interfaces::msg::RawLeptonData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_step
{
public:
  explicit Init_RawLeptonData_step(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  Init_RawLeptonData_data step(::m2s2_custom_interfaces::msg::RawLeptonData::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_RawLeptonData_data(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_is_bigendian
{
public:
  explicit Init_RawLeptonData_is_bigendian(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  Init_RawLeptonData_step is_bigendian(::m2s2_custom_interfaces::msg::RawLeptonData::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_RawLeptonData_step(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_encoding
{
public:
  explicit Init_RawLeptonData_encoding(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  Init_RawLeptonData_is_bigendian encoding(::m2s2_custom_interfaces::msg::RawLeptonData::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_RawLeptonData_is_bigendian(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_width
{
public:
  explicit Init_RawLeptonData_width(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  Init_RawLeptonData_encoding width(::m2s2_custom_interfaces::msg::RawLeptonData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RawLeptonData_encoding(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_height
{
public:
  explicit Init_RawLeptonData_height(::m2s2_custom_interfaces::msg::RawLeptonData & msg)
  : msg_(msg)
  {}
  Init_RawLeptonData_width height(::m2s2_custom_interfaces::msg::RawLeptonData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RawLeptonData_width(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

class Init_RawLeptonData_header
{
public:
  Init_RawLeptonData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawLeptonData_height header(::m2s2_custom_interfaces::msg::RawLeptonData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawLeptonData_height(msg_);
  }

private:
  ::m2s2_custom_interfaces::msg::RawLeptonData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::m2s2_custom_interfaces::msg::RawLeptonData>()
{
  return m2s2_custom_interfaces::msg::builder::Init_RawLeptonData_header();
}

}  // namespace m2s2_custom_interfaces

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__BUILDER_HPP_
