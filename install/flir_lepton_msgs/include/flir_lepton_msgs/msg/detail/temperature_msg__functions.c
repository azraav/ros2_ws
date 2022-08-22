// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice
#include "flir_lepton_msgs/msg/detail/temperature_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
flir_lepton_msgs__msg__TemperatureMsg__init(flir_lepton_msgs__msg__TemperatureMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    flir_lepton_msgs__msg__TemperatureMsg__fini(msg);
    return false;
  }
  // height
  // width
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    flir_lepton_msgs__msg__TemperatureMsg__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    flir_lepton_msgs__msg__TemperatureMsg__fini(msg);
    return false;
  }
  return true;
}

void
flir_lepton_msgs__msg__TemperatureMsg__fini(flir_lepton_msgs__msg__TemperatureMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

flir_lepton_msgs__msg__TemperatureMsg *
flir_lepton_msgs__msg__TemperatureMsg__create()
{
  flir_lepton_msgs__msg__TemperatureMsg * msg = (flir_lepton_msgs__msg__TemperatureMsg *)malloc(sizeof(flir_lepton_msgs__msg__TemperatureMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flir_lepton_msgs__msg__TemperatureMsg));
  bool success = flir_lepton_msgs__msg__TemperatureMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
flir_lepton_msgs__msg__TemperatureMsg__destroy(flir_lepton_msgs__msg__TemperatureMsg * msg)
{
  if (msg) {
    flir_lepton_msgs__msg__TemperatureMsg__fini(msg);
  }
  free(msg);
}


bool
flir_lepton_msgs__msg__TemperatureMsg__Sequence__init(flir_lepton_msgs__msg__TemperatureMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  flir_lepton_msgs__msg__TemperatureMsg * data = NULL;
  if (size) {
    data = (flir_lepton_msgs__msg__TemperatureMsg *)calloc(size, sizeof(flir_lepton_msgs__msg__TemperatureMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flir_lepton_msgs__msg__TemperatureMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flir_lepton_msgs__msg__TemperatureMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
flir_lepton_msgs__msg__TemperatureMsg__Sequence__fini(flir_lepton_msgs__msg__TemperatureMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      flir_lepton_msgs__msg__TemperatureMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

flir_lepton_msgs__msg__TemperatureMsg__Sequence *
flir_lepton_msgs__msg__TemperatureMsg__Sequence__create(size_t size)
{
  flir_lepton_msgs__msg__TemperatureMsg__Sequence * array = (flir_lepton_msgs__msg__TemperatureMsg__Sequence *)malloc(sizeof(flir_lepton_msgs__msg__TemperatureMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = flir_lepton_msgs__msg__TemperatureMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
flir_lepton_msgs__msg__TemperatureMsg__Sequence__destroy(flir_lepton_msgs__msg__TemperatureMsg__Sequence * array)
{
  if (array) {
    flir_lepton_msgs__msg__TemperatureMsg__Sequence__fini(array);
  }
  free(array);
}
