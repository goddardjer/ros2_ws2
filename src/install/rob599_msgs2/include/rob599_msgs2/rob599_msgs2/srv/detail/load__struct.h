// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_msgs2:srv/Load.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__SRV__DETAIL__LOAD__STRUCT_H_
#define ROB599_MSGS2__SRV__DETAIL__LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Load in the package rob599_msgs2.
typedef struct rob599_msgs2__srv__Load_Request
{
  rosidl_runtime_c__String filename;
} rob599_msgs2__srv__Load_Request;

// Struct for a sequence of rob599_msgs2__srv__Load_Request.
typedef struct rob599_msgs2__srv__Load_Request__Sequence
{
  rob599_msgs2__srv__Load_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs2__srv__Load_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Load in the package rob599_msgs2.
typedef struct rob599_msgs2__srv__Load_Response
{
  bool success;
} rob599_msgs2__srv__Load_Response;

// Struct for a sequence of rob599_msgs2__srv__Load_Response.
typedef struct rob599_msgs2__srv__Load_Response__Sequence
{
  rob599_msgs2__srv__Load_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs2__srv__Load_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS2__SRV__DETAIL__LOAD__STRUCT_H_
