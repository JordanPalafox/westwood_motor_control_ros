// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#ifndef WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__FUNCTIONS_H_
#define WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "westwood_motor_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__struct.h"

/// Initialize srv/SetMotorIdAndTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request
 * )) before or use
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg);

/// Finalize srv/SetMotorIdAndTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg);

/// Create srv/SetMotorIdAndTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__create();

/// Destroy srv/SetMotorIdAndTarget message.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg);

/// Check for srv/SetMotorIdAndTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * rhs);

/// Copy a srv/SetMotorIdAndTarget message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * output);

/// Initialize array of srv/SetMotorIdAndTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetMotorIdAndTarget messages.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array);

/// Create array of srv/SetMotorIdAndTarget messages.
/**
 * It allocates the memory for the array and calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetMotorIdAndTarget messages.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array);

/// Check for srv/SetMotorIdAndTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * rhs);

/// Copy an array of srv/SetMotorIdAndTarget messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * output);

/// Initialize srv/SetMotorIdAndTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response
 * )) before or use
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg);

/// Finalize srv/SetMotorIdAndTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg);

/// Create srv/SetMotorIdAndTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__create();

/// Destroy srv/SetMotorIdAndTarget message.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg);

/// Check for srv/SetMotorIdAndTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * rhs);

/// Copy a srv/SetMotorIdAndTarget message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * output);

/// Initialize array of srv/SetMotorIdAndTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetMotorIdAndTarget messages.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array);

/// Create array of srv/SetMotorIdAndTarget messages.
/**
 * It allocates the memory for the array and calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetMotorIdAndTarget messages.
/**
 * It calls
 * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array);

/// Check for srv/SetMotorIdAndTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * rhs);

/// Copy an array of srv/SetMotorIdAndTarget messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_westwood_motor_interfaces
bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__FUNCTIONS_H_
