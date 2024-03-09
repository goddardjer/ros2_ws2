// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rob599_msgs2:srv/Load.idl
// generated code does not contain a copyright notice
#include "rob599_msgs2/srv/detail/load__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
rob599_msgs2__srv__Load_Request__init(rob599_msgs2__srv__Load_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    rob599_msgs2__srv__Load_Request__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs2__srv__Load_Request__fini(rob599_msgs2__srv__Load_Request * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

bool
rob599_msgs2__srv__Load_Request__are_equal(const rob599_msgs2__srv__Load_Request * lhs, const rob599_msgs2__srv__Load_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filename), &(rhs->filename)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs2__srv__Load_Request__copy(
  const rob599_msgs2__srv__Load_Request * input,
  rob599_msgs2__srv__Load_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__copy(
      &(input->filename), &(output->filename)))
  {
    return false;
  }
  return true;
}

rob599_msgs2__srv__Load_Request *
rob599_msgs2__srv__Load_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Request * msg = (rob599_msgs2__srv__Load_Request *)allocator.allocate(sizeof(rob599_msgs2__srv__Load_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs2__srv__Load_Request));
  bool success = rob599_msgs2__srv__Load_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs2__srv__Load_Request__destroy(rob599_msgs2__srv__Load_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs2__srv__Load_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs2__srv__Load_Request__Sequence__init(rob599_msgs2__srv__Load_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Request * data = NULL;

  if (size) {
    data = (rob599_msgs2__srv__Load_Request *)allocator.zero_allocate(size, sizeof(rob599_msgs2__srv__Load_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs2__srv__Load_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs2__srv__Load_Request__fini(&data[i - 1]);
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
rob599_msgs2__srv__Load_Request__Sequence__fini(rob599_msgs2__srv__Load_Request__Sequence * array)
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
      rob599_msgs2__srv__Load_Request__fini(&array->data[i]);
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

rob599_msgs2__srv__Load_Request__Sequence *
rob599_msgs2__srv__Load_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Request__Sequence * array = (rob599_msgs2__srv__Load_Request__Sequence *)allocator.allocate(sizeof(rob599_msgs2__srv__Load_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs2__srv__Load_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs2__srv__Load_Request__Sequence__destroy(rob599_msgs2__srv__Load_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs2__srv__Load_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs2__srv__Load_Request__Sequence__are_equal(const rob599_msgs2__srv__Load_Request__Sequence * lhs, const rob599_msgs2__srv__Load_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs2__srv__Load_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs2__srv__Load_Request__Sequence__copy(
  const rob599_msgs2__srv__Load_Request__Sequence * input,
  rob599_msgs2__srv__Load_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs2__srv__Load_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs2__srv__Load_Request * data =
      (rob599_msgs2__srv__Load_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs2__srv__Load_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs2__srv__Load_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs2__srv__Load_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rob599_msgs2__srv__Load_Response__init(rob599_msgs2__srv__Load_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
rob599_msgs2__srv__Load_Response__fini(rob599_msgs2__srv__Load_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
rob599_msgs2__srv__Load_Response__are_equal(const rob599_msgs2__srv__Load_Response * lhs, const rob599_msgs2__srv__Load_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
rob599_msgs2__srv__Load_Response__copy(
  const rob599_msgs2__srv__Load_Response * input,
  rob599_msgs2__srv__Load_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

rob599_msgs2__srv__Load_Response *
rob599_msgs2__srv__Load_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Response * msg = (rob599_msgs2__srv__Load_Response *)allocator.allocate(sizeof(rob599_msgs2__srv__Load_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs2__srv__Load_Response));
  bool success = rob599_msgs2__srv__Load_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs2__srv__Load_Response__destroy(rob599_msgs2__srv__Load_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs2__srv__Load_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs2__srv__Load_Response__Sequence__init(rob599_msgs2__srv__Load_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Response * data = NULL;

  if (size) {
    data = (rob599_msgs2__srv__Load_Response *)allocator.zero_allocate(size, sizeof(rob599_msgs2__srv__Load_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs2__srv__Load_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs2__srv__Load_Response__fini(&data[i - 1]);
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
rob599_msgs2__srv__Load_Response__Sequence__fini(rob599_msgs2__srv__Load_Response__Sequence * array)
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
      rob599_msgs2__srv__Load_Response__fini(&array->data[i]);
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

rob599_msgs2__srv__Load_Response__Sequence *
rob599_msgs2__srv__Load_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs2__srv__Load_Response__Sequence * array = (rob599_msgs2__srv__Load_Response__Sequence *)allocator.allocate(sizeof(rob599_msgs2__srv__Load_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs2__srv__Load_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs2__srv__Load_Response__Sequence__destroy(rob599_msgs2__srv__Load_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs2__srv__Load_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs2__srv__Load_Response__Sequence__are_equal(const rob599_msgs2__srv__Load_Response__Sequence * lhs, const rob599_msgs2__srv__Load_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs2__srv__Load_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs2__srv__Load_Response__Sequence__copy(
  const rob599_msgs2__srv__Load_Response__Sequence * input,
  rob599_msgs2__srv__Load_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs2__srv__Load_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs2__srv__Load_Response * data =
      (rob599_msgs2__srv__Load_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs2__srv__Load_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs2__srv__Load_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs2__srv__Load_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
