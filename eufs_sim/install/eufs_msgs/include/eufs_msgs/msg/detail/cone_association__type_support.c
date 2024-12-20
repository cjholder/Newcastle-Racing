// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/ConeAssociation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/cone_association__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/cone_association__functions.h"
#include "eufs_msgs/msg/detail/cone_association__struct.h"


// Include directives for member types
// Member `first`
// Member `second`
#include "eufs_msgs/msg/cone_with_covariance.h"
// Member `first`
// Member `second`
#include "eufs_msgs/msg/detail/cone_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__ConeAssociation__init(message_memory);
}

void ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_fini_function(void * message_memory)
{
  eufs_msgs__msg__ConeAssociation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_member_array[2] = {
  {
    "first",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ConeAssociation, first),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ConeAssociation, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_members = {
  "eufs_msgs__msg",  // message namespace
  "ConeAssociation",  // message name
  2,  // number of fields
  sizeof(eufs_msgs__msg__ConeAssociation),
  ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_member_array,  // message members
  ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_init_function,  // function to initialize message memory (memory has to be allocated)
  ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_type_support_handle = {
  0,
  &ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, ConeAssociation)() {
  ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, ConeWithCovariance)();
  ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, ConeWithCovariance)();
  if (!ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_type_support_handle.typesupport_identifier) {
    ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConeAssociation__rosidl_typesupport_introspection_c__ConeAssociation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
