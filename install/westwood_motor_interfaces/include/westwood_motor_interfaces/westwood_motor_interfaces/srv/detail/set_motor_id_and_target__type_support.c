// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__rosidl_typesupport_introspection_c.h"
#include "westwood_motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__functions.h"
#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__struct.h"


// Include directives for member types
// Member `motor_ids`
// Member `target_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(message_memory);
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_fini_function(void * message_memory)
{
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(message_memory);
}

size_t westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Request__motor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__motor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__motor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Request__motor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__motor_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Request__motor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__motor_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Request__motor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Request__target_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__target_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__target_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Request__target_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__target_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Request__target_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__target_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Request__target_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_member_array[2] = {
  {
    "motor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request, motor_ids),  // bytes offset in struct
    NULL,  // default value
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Request__motor_ids,  // size() function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__motor_ids,  // get_const(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__motor_ids,  // get(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Request__motor_ids,  // fetch(index, &value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Request__motor_ids,  // assign(index, value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Request__motor_ids  // resize(index) function pointer
  },
  {
    "target_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request, target_positions),  // bytes offset in struct
    NULL,  // default value
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Request__target_positions,  // size() function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Request__target_positions,  // get_const(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Request__target_positions,  // get(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Request__target_positions,  // fetch(index, &value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Request__target_positions,  // assign(index, value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Request__target_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_members = {
  "westwood_motor_interfaces__srv",  // message namespace
  "SetMotorIdAndTarget_Request",  // message name
  2,  // number of fields
  sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request),
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_member_array,  // message members
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_type_support_handle = {
  0,
  &westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_westwood_motor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Request)() {
  if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_type_support_handle.typesupport_identifier) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "westwood_motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__functions.h"
// already included above
// #include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `previous_positions`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(message_memory);
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_fini_function(void * message_memory)
{
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(message_memory);
}

size_t westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Response__previous_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Response__previous_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Response__previous_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Response__previous_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Response__previous_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Response__previous_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Response__previous_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Response__previous_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response, previous_positions),  // bytes offset in struct
    NULL,  // default value
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__size_function__SetMotorIdAndTarget_Response__previous_positions,  // size() function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_const_function__SetMotorIdAndTarget_Response__previous_positions,  // get_const(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__get_function__SetMotorIdAndTarget_Response__previous_positions,  // get(index) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__fetch_function__SetMotorIdAndTarget_Response__previous_positions,  // fetch(index, &value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__assign_function__SetMotorIdAndTarget_Response__previous_positions,  // assign(index, value) function pointer
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__resize_function__SetMotorIdAndTarget_Response__previous_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_members = {
  "westwood_motor_interfaces__srv",  // message namespace
  "SetMotorIdAndTarget_Response",  // message name
  3,  // number of fields
  sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response),
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_member_array,  // message members
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_type_support_handle = {
  0,
  &westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_westwood_motor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Response)() {
  if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_type_support_handle.typesupport_identifier) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "westwood_motor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_members = {
  "westwood_motor_interfaces__srv",  // service namespace
  "SetMotorIdAndTarget",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Request_message_type_support_handle,
  NULL  // response message
  // westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_Response_message_type_support_handle
};

static rosidl_service_type_support_t westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_type_support_handle = {
  0,
  &westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_westwood_motor_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget)() {
  if (!westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_type_support_handle.typesupport_identifier) {
    westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, westwood_motor_interfaces, srv, SetMotorIdAndTarget_Response)()->data;
  }

  return &westwood_motor_interfaces__srv__detail__set_motor_id_and_target__rosidl_typesupport_introspection_c__SetMotorIdAndTarget_service_type_support_handle;
}
