// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__STRUCT_H_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RawLeptonData in the package m2s2_custom_interfaces.
typedef struct m2s2_custom_interfaces__msg__RawLeptonData
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__String encoding;
  uint8_t is_bigendian;
  uint32_t step;
  rosidl_runtime_c__uint16__Sequence data;
} m2s2_custom_interfaces__msg__RawLeptonData;

// Struct for a sequence of m2s2_custom_interfaces__msg__RawLeptonData.
typedef struct m2s2_custom_interfaces__msg__RawLeptonData__Sequence
{
  m2s2_custom_interfaces__msg__RawLeptonData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} m2s2_custom_interfaces__msg__RawLeptonData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_LEPTON_DATA__STRUCT_H_
