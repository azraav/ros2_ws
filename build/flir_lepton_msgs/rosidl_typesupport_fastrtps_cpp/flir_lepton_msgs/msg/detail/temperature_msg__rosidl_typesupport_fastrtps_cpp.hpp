// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "flir_lepton_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "flir_lepton_msgs/msg/detail/temperature_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace flir_lepton_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flir_lepton_msgs
cdr_serialize(
  const flir_lepton_msgs::msg::TemperatureMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flir_lepton_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flir_lepton_msgs::msg::TemperatureMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flir_lepton_msgs
get_serialized_size(
  const flir_lepton_msgs::msg::TemperatureMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flir_lepton_msgs
max_serialized_size_TemperatureMsg(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flir_lepton_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flir_lepton_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flir_lepton_msgs, msg, TemperatureMsg)();

#ifdef __cplusplus
}
#endif

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
