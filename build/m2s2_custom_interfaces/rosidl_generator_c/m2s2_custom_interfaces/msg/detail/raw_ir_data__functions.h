// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__FUNCTIONS_H_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "m2s2_custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.h"

/// Initialize msg/RawIrData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * m2s2_custom_interfaces__msg__RawIrData
 * )) before or use
 * m2s2_custom_interfaces__msg__RawIrData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
bool
m2s2_custom_interfaces__msg__RawIrData__init(m2s2_custom_interfaces__msg__RawIrData * msg);

/// Finalize msg/RawIrData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__RawIrData__fini(m2s2_custom_interfaces__msg__RawIrData * msg);

/// Create msg/RawIrData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * m2s2_custom_interfaces__msg__RawIrData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
m2s2_custom_interfaces__msg__RawIrData *
m2s2_custom_interfaces__msg__RawIrData__create();

/// Destroy msg/RawIrData message.
/**
 * It calls
 * m2s2_custom_interfaces__msg__RawIrData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__RawIrData__destroy(m2s2_custom_interfaces__msg__RawIrData * msg);


/// Initialize array of msg/RawIrData messages.
/**
 * It allocates the memory for the number of elements and calls
 * m2s2_custom_interfaces__msg__RawIrData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
bool
m2s2_custom_interfaces__msg__RawIrData__Sequence__init(m2s2_custom_interfaces__msg__RawIrData__Sequence * array, size_t size);

/// Finalize array of msg/RawIrData messages.
/**
 * It calls
 * m2s2_custom_interfaces__msg__RawIrData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__RawIrData__Sequence__fini(m2s2_custom_interfaces__msg__RawIrData__Sequence * array);

/// Create array of msg/RawIrData messages.
/**
 * It allocates the memory for the array and calls
 * m2s2_custom_interfaces__msg__RawIrData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
m2s2_custom_interfaces__msg__RawIrData__Sequence *
m2s2_custom_interfaces__msg__RawIrData__Sequence__create(size_t size);

/// Destroy array of msg/RawIrData messages.
/**
 * It calls
 * m2s2_custom_interfaces__msg__RawIrData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__RawIrData__Sequence__destroy(m2s2_custom_interfaces__msg__RawIrData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__FUNCTIONS_H_
