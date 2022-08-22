// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__FUNCTIONS_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "audio_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "audio_common_msgs/msg/detail/audio_info__struct.h"

/// Initialize msg/AudioInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audio_common_msgs__msg__AudioInfo
 * )) before or use
 * audio_common_msgs__msg__AudioInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__msg__AudioInfo__init(audio_common_msgs__msg__AudioInfo * msg);

/// Finalize msg/AudioInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__msg__AudioInfo__fini(audio_common_msgs__msg__AudioInfo * msg);

/// Create msg/AudioInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audio_common_msgs__msg__AudioInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__msg__AudioInfo *
audio_common_msgs__msg__AudioInfo__create();

/// Destroy msg/AudioInfo message.
/**
 * It calls
 * audio_common_msgs__msg__AudioInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__msg__AudioInfo__destroy(audio_common_msgs__msg__AudioInfo * msg);


/// Initialize array of msg/AudioInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * audio_common_msgs__msg__AudioInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__msg__AudioInfo__Sequence__init(audio_common_msgs__msg__AudioInfo__Sequence * array, size_t size);

/// Finalize array of msg/AudioInfo messages.
/**
 * It calls
 * audio_common_msgs__msg__AudioInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__msg__AudioInfo__Sequence__fini(audio_common_msgs__msg__AudioInfo__Sequence * array);

/// Create array of msg/AudioInfo messages.
/**
 * It allocates the memory for the array and calls
 * audio_common_msgs__msg__AudioInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__msg__AudioInfo__Sequence *
audio_common_msgs__msg__AudioInfo__Sequence__create(size_t size);

/// Destroy array of msg/AudioInfo messages.
/**
 * It calls
 * audio_common_msgs__msg__AudioInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__msg__AudioInfo__Sequence__destroy(audio_common_msgs__msg__AudioInfo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__FUNCTIONS_H_
