// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#ifndef WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_H_
#define WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_ids'
// Member 'target_positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetMotorIdAndTarget in the package westwood_motor_interfaces.
typedef struct westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request
{
  rosidl_runtime_c__int32__Sequence motor_ids;
  rosidl_runtime_c__float__Sequence target_positions;
} westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request;

// Struct for a sequence of westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request.
typedef struct westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence
{
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'previous_positions'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetMotorIdAndTarget in the package westwood_motor_interfaces.
typedef struct westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__float__Sequence previous_positions;
} westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response;

// Struct for a sequence of westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response.
typedef struct westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence
{
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_H_
