// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/msg/detail/audio_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
audio_common_msgs__msg__AudioData__init(audio_common_msgs__msg__AudioData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__msg__AudioData__fini(audio_common_msgs__msg__AudioData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

audio_common_msgs__msg__AudioData *
audio_common_msgs__msg__AudioData__create()
{
  audio_common_msgs__msg__AudioData * msg = (audio_common_msgs__msg__AudioData *)malloc(sizeof(audio_common_msgs__msg__AudioData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__msg__AudioData));
  bool success = audio_common_msgs__msg__AudioData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__msg__AudioData__destroy(audio_common_msgs__msg__AudioData * msg)
{
  if (msg) {
    audio_common_msgs__msg__AudioData__fini(msg);
  }
  free(msg);
}


bool
audio_common_msgs__msg__AudioData__Sequence__init(audio_common_msgs__msg__AudioData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  audio_common_msgs__msg__AudioData * data = NULL;
  if (size) {
    data = (audio_common_msgs__msg__AudioData *)calloc(size, sizeof(audio_common_msgs__msg__AudioData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__msg__AudioData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__msg__AudioData__fini(&data[i - 1]);
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
audio_common_msgs__msg__AudioData__Sequence__fini(audio_common_msgs__msg__AudioData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      audio_common_msgs__msg__AudioData__fini(&array->data[i]);
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

audio_common_msgs__msg__AudioData__Sequence *
audio_common_msgs__msg__AudioData__Sequence__create(size_t size)
{
  audio_common_msgs__msg__AudioData__Sequence * array = (audio_common_msgs__msg__AudioData__Sequence *)malloc(sizeof(audio_common_msgs__msg__AudioData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__msg__AudioData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__msg__AudioData__Sequence__destroy(audio_common_msgs__msg__AudioData__Sequence * array)
{
  if (array) {
    audio_common_msgs__msg__AudioData__Sequence__fini(array);
  }
  free(array);
}
