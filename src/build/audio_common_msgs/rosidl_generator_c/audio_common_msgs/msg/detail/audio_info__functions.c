// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/msg/detail/audio_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sample_format`
// Member `coding_format`
#include "rosidl_runtime_c/string_functions.h"

bool
audio_common_msgs__msg__AudioInfo__init(audio_common_msgs__msg__AudioInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    audio_common_msgs__msg__AudioInfo__fini(msg);
    return false;
  }
  // channels
  // sample_rate
  // sample_format
  if (!rosidl_runtime_c__String__init(&msg->sample_format)) {
    audio_common_msgs__msg__AudioInfo__fini(msg);
    return false;
  }
  // bitrate
  // coding_format
  if (!rosidl_runtime_c__String__init(&msg->coding_format)) {
    audio_common_msgs__msg__AudioInfo__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__msg__AudioInfo__fini(audio_common_msgs__msg__AudioInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // channels
  // sample_rate
  // sample_format
  rosidl_runtime_c__String__fini(&msg->sample_format);
  // bitrate
  // coding_format
  rosidl_runtime_c__String__fini(&msg->coding_format);
}

audio_common_msgs__msg__AudioInfo *
audio_common_msgs__msg__AudioInfo__create()
{
  audio_common_msgs__msg__AudioInfo * msg = (audio_common_msgs__msg__AudioInfo *)malloc(sizeof(audio_common_msgs__msg__AudioInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__msg__AudioInfo));
  bool success = audio_common_msgs__msg__AudioInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__msg__AudioInfo__destroy(audio_common_msgs__msg__AudioInfo * msg)
{
  if (msg) {
    audio_common_msgs__msg__AudioInfo__fini(msg);
  }
  free(msg);
}


bool
audio_common_msgs__msg__AudioInfo__Sequence__init(audio_common_msgs__msg__AudioInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  audio_common_msgs__msg__AudioInfo * data = NULL;
  if (size) {
    data = (audio_common_msgs__msg__AudioInfo *)calloc(size, sizeof(audio_common_msgs__msg__AudioInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__msg__AudioInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__msg__AudioInfo__fini(&data[i - 1]);
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
audio_common_msgs__msg__AudioInfo__Sequence__fini(audio_common_msgs__msg__AudioInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      audio_common_msgs__msg__AudioInfo__fini(&array->data[i]);
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

audio_common_msgs__msg__AudioInfo__Sequence *
audio_common_msgs__msg__AudioInfo__Sequence__create(size_t size)
{
  audio_common_msgs__msg__AudioInfo__Sequence * array = (audio_common_msgs__msg__AudioInfo__Sequence *)malloc(sizeof(audio_common_msgs__msg__AudioInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__msg__AudioInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__msg__AudioInfo__Sequence__destroy(audio_common_msgs__msg__AudioInfo__Sequence * array)
{
  if (array) {
    audio_common_msgs__msg__AudioInfo__Sequence__fini(array);
  }
  free(array);
}
