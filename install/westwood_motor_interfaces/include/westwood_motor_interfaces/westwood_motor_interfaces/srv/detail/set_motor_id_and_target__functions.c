// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice
#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motor_ids`
// Member `target_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motor_ids, 0)) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(msg);
    return false;
  }
  // target_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_positions, 0)) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(msg);
    return false;
  }
  return true;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->motor_ids);
  // target_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->target_positions);
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motor_ids), &(rhs->motor_ids)))
  {
    return false;
  }
  // target_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_positions), &(rhs->target_positions)))
  {
    return false;
  }
  return true;
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motor_ids), &(output->motor_ids)))
  {
    return false;
  }
  // target_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_positions), &(output->target_positions)))
  {
    return false;
  }
  return true;
}

westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request *)allocator.allocate(sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request));
  bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * data = NULL;

  if (size) {
    data = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request *)allocator.zero_allocate(size, sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence *)allocator.allocate(sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request * data =
      (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `previous_positions`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(msg);
    return false;
  }
  // previous_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->previous_positions, 0)) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(msg);
    return false;
  }
  return true;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // previous_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->previous_positions);
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // previous_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->previous_positions), &(rhs->previous_positions)))
  {
    return false;
  }
  return true;
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // previous_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->previous_positions), &(output->previous_positions)))
  {
    return false;
  }
  return true;
}

westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response *)allocator.allocate(sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response));
  bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__init(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * data = NULL;

  if (size) {
    data = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response *)allocator.zero_allocate(size, sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__fini(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence *
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array = (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence *)allocator.allocate(sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__destroy(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__are_equal(const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * lhs, const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence__copy(
  const westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * input,
  westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response * data =
      (westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
