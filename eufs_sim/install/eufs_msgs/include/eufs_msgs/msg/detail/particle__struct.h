// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'map'
#include "eufs_msgs/msg/detail/cone_array_with_covariance__struct.h"

// Struct defined in msg/Particle in the package eufs_msgs.
typedef struct eufs_msgs__msg__Particle
{
  geometry_msgs__msg__Pose pose;
  eufs_msgs__msg__ConeArrayWithCovariance map;
  double weight;
} eufs_msgs__msg__Particle;

// Struct for a sequence of eufs_msgs__msg__Particle.
typedef struct eufs_msgs__msg__Particle__Sequence
{
  eufs_msgs__msg__Particle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__Particle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE__STRUCT_H_
