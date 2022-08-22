// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sound_play:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__FUNCTIONS_H_
#define SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sound_play/msg/rosidl_generator_c__visibility_control.h"

#include "sound_play/msg/detail/sound_request__struct.h"

/// Initialize msg/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__msg__SoundRequest
 * )) before or use
 * sound_play__msg__SoundRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__msg__SoundRequest__init(sound_play__msg__SoundRequest * msg);

/// Finalize msg/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__msg__SoundRequest__fini(sound_play__msg__SoundRequest * msg);

/// Create msg/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__msg__SoundRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__msg__SoundRequest *
sound_play__msg__SoundRequest__create();

/// Destroy msg/SoundRequest message.
/**
 * It calls
 * sound_play__msg__SoundRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__msg__SoundRequest__destroy(sound_play__msg__SoundRequest * msg);


/// Initialize array of msg/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__msg__SoundRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__msg__SoundRequest__Sequence__init(sound_play__msg__SoundRequest__Sequence * array, size_t size);

/// Finalize array of msg/SoundRequest messages.
/**
 * It calls
 * sound_play__msg__SoundRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__msg__SoundRequest__Sequence__fini(sound_play__msg__SoundRequest__Sequence * array);

/// Create array of msg/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__msg__SoundRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__msg__SoundRequest__Sequence *
sound_play__msg__SoundRequest__Sequence__create(size_t size);

/// Destroy array of msg/SoundRequest messages.
/**
 * It calls
 * sound_play__msg__SoundRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__msg__SoundRequest__Sequence__destroy(sound_play__msg__SoundRequest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SOUND_PLAY__MSG__DETAIL__SOUND_REQUEST__FUNCTIONS_H_
