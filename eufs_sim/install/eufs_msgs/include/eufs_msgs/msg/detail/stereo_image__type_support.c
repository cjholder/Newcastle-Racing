// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/StereoImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/stereo_image__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/stereo_image__functions.h"
#include "eufs_msgs/msg/detail/stereo_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `color`
// Member `depth`
#include "sensor_msgs/msg/image.h"
// Member `color`
// Member `depth`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StereoImage__rosidl_typesupport_introspection_c__StereoImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__StereoImage__init(message_memory);
}

void StereoImage__rosidl_typesupport_introspection_c__StereoImage_fini_function(void * message_memory)
{
  eufs_msgs__msg__StereoImage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__StereoImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__StereoImage, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__StereoImage, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_members = {
  "eufs_msgs__msg",  // message namespace
  "StereoImage",  // message name
  3,  // number of fields
  sizeof(eufs_msgs__msg__StereoImage),
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_member_array,  // message members
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_init_function,  // function to initialize message memory (memory has to be allocated)
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_type_support_handle = {
  0,
  &StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, StereoImage)() {
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_type_support_handle.typesupport_identifier) {
    StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StereoImage__rosidl_typesupport_introspection_c__StereoImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
