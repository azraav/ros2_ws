// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flir_lepton_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flir_lepton_msgs/msg/detail/raw_data__struct.h"

/// Initialize msg/RawData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flir_lepton_msgs__msg__RawData
 * )) before or use
 * flir_lepton_msgs__msg__RawData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
bool
flir_lepton_msgs__msg__RawData__init(flir_lepton_msgs__msg__RawData * msg);

/// Finalize msg/RawData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__RawData__fini(flir_lepton_msgs__msg__RawData * msg);

/// Create msg/RawData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flir_lepton_msgs__msg__RawData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
flir_lepton_msgs__msg__RawData *
flir_lepton_msgs__msg__RawData__create();

/// Destroy msg/RawData message.
/**
 * It calls
 * flir_lepton_msgs__msg__RawData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__RawData__destroy(flir_lepton_msgs__msg__RawData * msg);


/// Initialize array of msg/RawData messages.
/**
 * It allocates the memory for the number of elements and calls
 * flir_lepton_msgs__msg__RawData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
bool
flir_lepton_msgs__msg__RawData__Sequence__init(flir_lepton_msgs__msg__RawData__Sequence * array, size_t size);

/// Finalize array of msg/RawData messages.
/**
 * It calls
 * flir_lepton_msgs__msg__RawData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__RawData__Sequence__fini(flir_lepton_msgs__msg__RawData__Sequence * array);

/// Create array of msg/RawData messages.
/**
 * It allocates the memory for the array and calls
 * flir_lepton_msgs__msg__RawData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
flir_lepton_msgs__msg__RawData__Sequence *
flir_lepton_msgs__msg__RawData__Sequence__create(size_t size);

/// Destroy array of msg/RawData messages.
/**
 * It calls
 * flir_lepton_msgs__msg__RawData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__RawData__Sequence__destroy(flir_lepton_msgs__msg__RawData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_
