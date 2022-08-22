// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "m2s2_custom_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"

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

namespace m2s2_custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
cdr_serialize(
  const m2s2_custom_interfaces::msg::RawIrData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  m2s2_custom_interfaces::msg::RawIrData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
get_serialized_size(
  const m2s2_custom_interfaces::msg::RawIrData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
max_serialized_size_RawIrData(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace m2s2_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, m2s2_custom_interfaces, msg, RawIrData)();

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
