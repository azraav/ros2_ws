// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace example_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const example_interfaces::msg::Int16MultiArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  example_interfaces::msg::Int16MultiArray &);
size_t get_serialized_size(
  const example_interfaces::msg::Int16MultiArray &,
  size_t current_alignment);
size_t
max_serialized_size_Int16MultiArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace example_interfaces


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: raw_values
  example_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.raw_values,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  m2s2_custom_interfaces::msg::RawIrData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: raw_values
  example_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.raw_values);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
get_serialized_size(
  const m2s2_custom_interfaces::msg::RawIrData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: raw_values

  current_alignment +=
    example_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.raw_values, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_m2s2_custom_interfaces
max_serialized_size_RawIrData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: raw_values
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16MultiArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RawIrData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const m2s2_custom_interfaces::msg::RawIrData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RawIrData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<m2s2_custom_interfaces::msg::RawIrData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RawIrData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const m2s2_custom_interfaces::msg::RawIrData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RawIrData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RawIrData(full_bounded, 0);
}

static message_type_support_callbacks_t _RawIrData__callbacks = {
  "m2s2_custom_interfaces::msg",
  "RawIrData",
  _RawIrData__cdr_serialize,
  _RawIrData__cdr_deserialize,
  _RawIrData__get_serialized_size,
  _RawIrData__max_serialized_size
};

static rosidl_message_type_support_t _RawIrData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RawIrData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace m2s2_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_m2s2_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<m2s2_custom_interfaces::msg::RawIrData>()
{
  return &m2s2_custom_interfaces::msg::typesupport_fastrtps_cpp::_RawIrData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, m2s2_custom_interfaces, msg, RawIrData)() {
  return &m2s2_custom_interfaces::msg::typesupport_fastrtps_cpp::_RawIrData__handle;
}

#ifdef __cplusplus
}
#endif
