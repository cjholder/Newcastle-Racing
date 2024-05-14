// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/particle_slam__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/particle_slam__functions.h"
#include "eufs_msgs/msg/detail/particle_slam__struct.h"


// Include directives for member types
// Member `particles`
#include "eufs_msgs/msg/particle.h"
// Member `particles`
#include "eufs_msgs/msg/detail/particle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__ParticleSLAM__init(message_memory);
}

void ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_fini_function(void * message_memory)
{
  eufs_msgs__msg__ParticleSLAM__fini(message_memory);
}

size_t ParticleSLAM__rosidl_typesupport_introspection_c__size_function__Particle__particles(
  const void * untyped_member)
{
  const eufs_msgs__msg__Particle__Sequence * member =
    (const eufs_msgs__msg__Particle__Sequence *)(untyped_member);
  return member->size;
}

const void * ParticleSLAM__rosidl_typesupport_introspection_c__get_const_function__Particle__particles(
  const void * untyped_member, size_t index)
{
  const eufs_msgs__msg__Particle__Sequence * member =
    (const eufs_msgs__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParticleSLAM__rosidl_typesupport_introspection_c__get_function__Particle__particles(
  void * untyped_member, size_t index)
{
  eufs_msgs__msg__Particle__Sequence * member =
    (eufs_msgs__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParticleSLAM__rosidl_typesupport_introspection_c__resize_function__Particle__particles(
  void * untyped_member, size_t size)
{
  eufs_msgs__msg__Particle__Sequence * member =
    (eufs_msgs__msg__Particle__Sequence *)(untyped_member);
  eufs_msgs__msg__Particle__Sequence__fini(member);
  return eufs_msgs__msg__Particle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_member_array[2] = {
  {
    "best_particle_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ParticleSLAM, best_particle_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "particles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ParticleSLAM, particles),  // bytes offset in struct
    NULL,  // default value
    ParticleSLAM__rosidl_typesupport_introspection_c__size_function__Particle__particles,  // size() function pointer
    ParticleSLAM__rosidl_typesupport_introspection_c__get_const_function__Particle__particles,  // get_const(index) function pointer
    ParticleSLAM__rosidl_typesupport_introspection_c__get_function__Particle__particles,  // get(index) function pointer
    ParticleSLAM__rosidl_typesupport_introspection_c__resize_function__Particle__particles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_members = {
  "eufs_msgs__msg",  // message namespace
  "ParticleSLAM",  // message name
  2,  // number of fields
  sizeof(eufs_msgs__msg__ParticleSLAM),
  ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_member_array,  // message members
  ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_init_function,  // function to initialize message memory (memory has to be allocated)
  ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_type_support_handle = {
  0,
  &ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, ParticleSLAM)() {
  ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, Particle)();
  if (!ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_type_support_handle.typesupport_identifier) {
    ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParticleSLAM__rosidl_typesupport_introspection_c__ParticleSLAM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
