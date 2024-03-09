// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_msgs2:srv/KnockKnock.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_
#define ROB599_MSGS2__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/KnockKnock in the package rob599_msgs2.
typedef struct rob599_msgs2__srv__KnockKnock_Request
{
  uint8_t structure_needs_at_least_one_member;
} rob599_msgs2__srv__KnockKnock_Request;

// Struct for a sequence of rob599_msgs2__srv__KnockKnock_Request.
typedef struct rob599_msgs2__srv__KnockKnock_Request__Sequence
{
  rob599_msgs2__srv__KnockKnock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs2__srv__KnockKnock_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/KnockKnock in the package rob599_msgs2.
typedef struct rob599_msgs2__srv__KnockKnock_Response
{
  uint8_t structure_needs_at_least_one_member;
} rob599_msgs2__srv__KnockKnock_Response;

// Struct for a sequence of rob599_msgs2__srv__KnockKnock_Response.
typedef struct rob599_msgs2__srv__KnockKnock_Response__Sequence
{
  rob599_msgs2__srv__KnockKnock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs2__srv__KnockKnock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS2__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_
