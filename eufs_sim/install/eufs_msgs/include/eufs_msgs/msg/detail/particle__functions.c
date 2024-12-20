// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eufs_msgs:msg/Particle.idl
// generated code does not contain a copyright notice
#include "eufs_msgs/msg/detail/particle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `map`
#include "eufs_msgs/msg/detail/cone_array_with_covariance__functions.h"

bool
eufs_msgs__msg__Particle__init(eufs_msgs__msg__Particle * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    eufs_msgs__msg__Particle__fini(msg);
    return false;
  }
  // map
  if (!eufs_msgs__msg__ConeArrayWithCovariance__init(&msg->map)) {
    eufs_msgs__msg__Particle__fini(msg);
    return false;
  }
  // weight
  return true;
}

void
eufs_msgs__msg__Particle__fini(eufs_msgs__msg__Particle * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // map
  eufs_msgs__msg__ConeArrayWithCovariance__fini(&msg->map);
  // weight
}

bool
eufs_msgs__msg__Particle__are_equal(const eufs_msgs__msg__Particle * lhs, const eufs_msgs__msg__Particle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // map
  if (!eufs_msgs__msg__ConeArrayWithCovariance__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
eufs_msgs__msg__Particle__copy(
  const eufs_msgs__msg__Particle * input,
  eufs_msgs__msg__Particle * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // map
  if (!eufs_msgs__msg__ConeArrayWithCovariance__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // weight
  output->weight = input->weight;
  return true;
}

eufs_msgs__msg__Particle *
eufs_msgs__msg__Particle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__Particle * msg = (eufs_msgs__msg__Particle *)allocator.allocate(sizeof(eufs_msgs__msg__Particle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eufs_msgs__msg__Particle));
  bool success = eufs_msgs__msg__Particle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eufs_msgs__msg__Particle__destroy(eufs_msgs__msg__Particle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eufs_msgs__msg__Particle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eufs_msgs__msg__Particle__Sequence__init(eufs_msgs__msg__Particle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__Particle * data = NULL;

  if (size) {
    data = (eufs_msgs__msg__Particle *)allocator.zero_allocate(size, sizeof(eufs_msgs__msg__Particle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eufs_msgs__msg__Particle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eufs_msgs__msg__Particle__fini(&data[i - 1]);
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
eufs_msgs__msg__Particle__Sequence__fini(eufs_msgs__msg__Particle__Sequence * array)
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
      eufs_msgs__msg__Particle__fini(&array->data[i]);
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

eufs_msgs__msg__Particle__Sequence *
eufs_msgs__msg__Particle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__Particle__Sequence * array = (eufs_msgs__msg__Particle__Sequence *)allocator.allocate(sizeof(eufs_msgs__msg__Particle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eufs_msgs__msg__Particle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eufs_msgs__msg__Particle__Sequence__destroy(eufs_msgs__msg__Particle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eufs_msgs__msg__Particle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eufs_msgs__msg__Particle__Sequence__are_equal(const eufs_msgs__msg__Particle__Sequence * lhs, const eufs_msgs__msg__Particle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eufs_msgs__msg__Particle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eufs_msgs__msg__Particle__Sequence__copy(
  const eufs_msgs__msg__Particle__Sequence * input,
  eufs_msgs__msg__Particle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eufs_msgs__msg__Particle);
    eufs_msgs__msg__Particle * data =
      (eufs_msgs__msg__Particle *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eufs_msgs__msg__Particle__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          eufs_msgs__msg__Particle__fini(&data[i]);
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
    if (!eufs_msgs__msg__Particle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
