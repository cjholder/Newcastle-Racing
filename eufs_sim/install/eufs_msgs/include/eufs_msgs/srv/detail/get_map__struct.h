// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
#define EUFS_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetMap in the package eufs_msgs.
typedef struct eufs_msgs__srv__GetMap_Request
{
  uint8_t structure_needs_at_least_one_member;
} eufs_msgs__srv__GetMap_Request;

// Struct for a sequence of eufs_msgs__srv__GetMap_Request.
typedef struct eufs_msgs__srv__GetMap_Request__Sequence
{
  eufs_msgs__srv__GetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__GetMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map_path'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetMap in the package eufs_msgs.
typedef struct eufs_msgs__srv__GetMap_Response
{
  rosidl_runtime_c__String__Sequence map_path;
} eufs_msgs__srv__GetMap_Response;

// Struct for a sequence of eufs_msgs__srv__GetMap_Response.
typedef struct eufs_msgs__srv__GetMap_Response__Sequence
{
  eufs_msgs__srv__GetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__GetMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
