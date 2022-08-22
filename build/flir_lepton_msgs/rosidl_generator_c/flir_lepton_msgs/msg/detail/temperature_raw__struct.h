// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flir_lepton_msgs:msg/TemperatureRaw.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__STRUCT_H_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TemperatureRaw in the package flir_lepton_msgs.
typedef struct flir_lepton_msgs__msg__TemperatureRaw
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__uint16__Sequence data;
} flir_lepton_msgs__msg__TemperatureRaw;

// Struct for a sequence of flir_lepton_msgs__msg__TemperatureRaw.
typedef struct flir_lepton_msgs__msg__TemperatureRaw__Sequence
{
  flir_lepton_msgs__msg__TemperatureRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flir_lepton_msgs__msg__TemperatureRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__STRUCT_H_
