// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eufs_msgs:srv/RecordStart.idl
// generated code does not contain a copyright notice
#include "eufs_msgs/srv/detail/record_start__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
eufs_msgs__srv__RecordStart_Request__init(eufs_msgs__srv__RecordStart_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pack_number
  return true;
}

void
eufs_msgs__srv__RecordStart_Request__fini(eufs_msgs__srv__RecordStart_Request * msg)
{
  if (!msg) {
    return;
  }
  // pack_number
}

bool
eufs_msgs__srv__RecordStart_Request__are_equal(const eufs_msgs__srv__RecordStart_Request * lhs, const eufs_msgs__srv__RecordStart_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pack_number
  if (lhs->pack_number != rhs->pack_number) {
    return false;
  }
  return true;
}

bool
eufs_msgs__srv__RecordStart_Request__copy(
  const eufs_msgs__srv__RecordStart_Request * input,
  eufs_msgs__srv__RecordStart_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pack_number
  output->pack_number = input->pack_number;
  return true;
}

eufs_msgs__srv__RecordStart_Request *
eufs_msgs__srv__RecordStart_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Request * msg = (eufs_msgs__srv__RecordStart_Request *)allocator.allocate(sizeof(eufs_msgs__srv__RecordStart_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eufs_msgs__srv__RecordStart_Request));
  bool success = eufs_msgs__srv__RecordStart_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eufs_msgs__srv__RecordStart_Request__destroy(eufs_msgs__srv__RecordStart_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eufs_msgs__srv__RecordStart_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eufs_msgs__srv__RecordStart_Request__Sequence__init(eufs_msgs__srv__RecordStart_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Request * data = NULL;

  if (size) {
    data = (eufs_msgs__srv__RecordStart_Request *)allocator.zero_allocate(size, sizeof(eufs_msgs__srv__RecordStart_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eufs_msgs__srv__RecordStart_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eufs_msgs__srv__RecordStart_Request__fini(&data[i - 1]);
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
eufs_msgs__srv__RecordStart_Request__Sequence__fini(eufs_msgs__srv__RecordStart_Request__Sequence * array)
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
      eufs_msgs__srv__RecordStart_Request__fini(&array->data[i]);
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

eufs_msgs__srv__RecordStart_Request__Sequence *
eufs_msgs__srv__RecordStart_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Request__Sequence * array = (eufs_msgs__srv__RecordStart_Request__Sequence *)allocator.allocate(sizeof(eufs_msgs__srv__RecordStart_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eufs_msgs__srv__RecordStart_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eufs_msgs__srv__RecordStart_Request__Sequence__destroy(eufs_msgs__srv__RecordStart_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eufs_msgs__srv__RecordStart_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eufs_msgs__srv__RecordStart_Request__Sequence__are_equal(const eufs_msgs__srv__RecordStart_Request__Sequence * lhs, const eufs_msgs__srv__RecordStart_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eufs_msgs__srv__RecordStart_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eufs_msgs__srv__RecordStart_Request__Sequence__copy(
  const eufs_msgs__srv__RecordStart_Request__Sequence * input,
  eufs_msgs__srv__RecordStart_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eufs_msgs__srv__RecordStart_Request);
    eufs_msgs__srv__RecordStart_Request * data =
      (eufs_msgs__srv__RecordStart_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eufs_msgs__srv__RecordStart_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          eufs_msgs__srv__RecordStart_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eufs_msgs__srv__RecordStart_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
eufs_msgs__srv__RecordStart_Response__init(eufs_msgs__srv__RecordStart_Response * msg)
{
  if (!msg) {
    return false;
  }
  // start_recording
  return true;
}

void
eufs_msgs__srv__RecordStart_Response__fini(eufs_msgs__srv__RecordStart_Response * msg)
{
  if (!msg) {
    return;
  }
  // start_recording
}

bool
eufs_msgs__srv__RecordStart_Response__are_equal(const eufs_msgs__srv__RecordStart_Response * lhs, const eufs_msgs__srv__RecordStart_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_recording
  if (lhs->start_recording != rhs->start_recording) {
    return false;
  }
  return true;
}

bool
eufs_msgs__srv__RecordStart_Response__copy(
  const eufs_msgs__srv__RecordStart_Response * input,
  eufs_msgs__srv__RecordStart_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // start_recording
  output->start_recording = input->start_recording;
  return true;
}

eufs_msgs__srv__RecordStart_Response *
eufs_msgs__srv__RecordStart_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Response * msg = (eufs_msgs__srv__RecordStart_Response *)allocator.allocate(sizeof(eufs_msgs__srv__RecordStart_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eufs_msgs__srv__RecordStart_Response));
  bool success = eufs_msgs__srv__RecordStart_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eufs_msgs__srv__RecordStart_Response__destroy(eufs_msgs__srv__RecordStart_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eufs_msgs__srv__RecordStart_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eufs_msgs__srv__RecordStart_Response__Sequence__init(eufs_msgs__srv__RecordStart_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Response * data = NULL;

  if (size) {
    data = (eufs_msgs__srv__RecordStart_Response *)allocator.zero_allocate(size, sizeof(eufs_msgs__srv__RecordStart_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eufs_msgs__srv__RecordStart_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eufs_msgs__srv__RecordStart_Response__fini(&data[i - 1]);
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
eufs_msgs__srv__RecordStart_Response__Sequence__fini(eufs_msgs__srv__RecordStart_Response__Sequence * array)
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
      eufs_msgs__srv__RecordStart_Response__fini(&array->data[i]);
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

eufs_msgs__srv__RecordStart_Response__Sequence *
eufs_msgs__srv__RecordStart_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__srv__RecordStart_Response__Sequence * array = (eufs_msgs__srv__RecordStart_Response__Sequence *)allocator.allocate(sizeof(eufs_msgs__srv__RecordStart_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eufs_msgs__srv__RecordStart_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eufs_msgs__srv__RecordStart_Response__Sequence__destroy(eufs_msgs__srv__RecordStart_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eufs_msgs__srv__RecordStart_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eufs_msgs__srv__RecordStart_Response__Sequence__are_equal(const eufs_msgs__srv__RecordStart_Response__Sequence * lhs, const eufs_msgs__srv__RecordStart_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eufs_msgs__srv__RecordStart_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eufs_msgs__srv__RecordStart_Response__Sequence__copy(
  const eufs_msgs__srv__RecordStart_Response__Sequence * input,
  eufs_msgs__srv__RecordStart_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eufs_msgs__srv__RecordStart_Response);
    eufs_msgs__srv__RecordStart_Response * data =
      (eufs_msgs__srv__RecordStart_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eufs_msgs__srv__RecordStart_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          eufs_msgs__srv__RecordStart_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eufs_msgs__srv__RecordStart_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
