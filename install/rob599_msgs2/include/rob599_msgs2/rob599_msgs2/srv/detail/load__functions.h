// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rob599_msgs2:srv/Load.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS2__SRV__DETAIL__LOAD__FUNCTIONS_H_
#define ROB599_MSGS2__SRV__DETAIL__LOAD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rob599_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "rob599_msgs2/srv/detail/load__struct.h"

/// Initialize srv/Load message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rob599_msgs2__srv__Load_Request
 * )) before or use
 * rob599_msgs2__srv__Load_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__init(rob599_msgs2__srv__Load_Request * msg);

/// Finalize srv/Load message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Request__fini(rob599_msgs2__srv__Load_Request * msg);

/// Create srv/Load message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rob599_msgs2__srv__Load_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
rob599_msgs2__srv__Load_Request *
rob599_msgs2__srv__Load_Request__create();

/// Destroy srv/Load message.
/**
 * It calls
 * rob599_msgs2__srv__Load_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Request__destroy(rob599_msgs2__srv__Load_Request * msg);

/// Check for srv/Load message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__are_equal(const rob599_msgs2__srv__Load_Request * lhs, const rob599_msgs2__srv__Load_Request * rhs);

/// Copy a srv/Load message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__copy(
  const rob599_msgs2__srv__Load_Request * input,
  rob599_msgs2__srv__Load_Request * output);

/// Initialize array of srv/Load messages.
/**
 * It allocates the memory for the number of elements and calls
 * rob599_msgs2__srv__Load_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__Sequence__init(rob599_msgs2__srv__Load_Request__Sequence * array, size_t size);

/// Finalize array of srv/Load messages.
/**
 * It calls
 * rob599_msgs2__srv__Load_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Request__Sequence__fini(rob599_msgs2__srv__Load_Request__Sequence * array);

/// Create array of srv/Load messages.
/**
 * It allocates the memory for the array and calls
 * rob599_msgs2__srv__Load_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
rob599_msgs2__srv__Load_Request__Sequence *
rob599_msgs2__srv__Load_Request__Sequence__create(size_t size);

/// Destroy array of srv/Load messages.
/**
 * It calls
 * rob599_msgs2__srv__Load_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Request__Sequence__destroy(rob599_msgs2__srv__Load_Request__Sequence * array);

/// Check for srv/Load message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__Sequence__are_equal(const rob599_msgs2__srv__Load_Request__Sequence * lhs, const rob599_msgs2__srv__Load_Request__Sequence * rhs);

/// Copy an array of srv/Load messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Request__Sequence__copy(
  const rob599_msgs2__srv__Load_Request__Sequence * input,
  rob599_msgs2__srv__Load_Request__Sequence * output);

/// Initialize srv/Load message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rob599_msgs2__srv__Load_Response
 * )) before or use
 * rob599_msgs2__srv__Load_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__init(rob599_msgs2__srv__Load_Response * msg);

/// Finalize srv/Load message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Response__fini(rob599_msgs2__srv__Load_Response * msg);

/// Create srv/Load message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rob599_msgs2__srv__Load_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
rob599_msgs2__srv__Load_Response *
rob599_msgs2__srv__Load_Response__create();

/// Destroy srv/Load message.
/**
 * It calls
 * rob599_msgs2__srv__Load_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Response__destroy(rob599_msgs2__srv__Load_Response * msg);

/// Check for srv/Load message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__are_equal(const rob599_msgs2__srv__Load_Response * lhs, const rob599_msgs2__srv__Load_Response * rhs);

/// Copy a srv/Load message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__copy(
  const rob599_msgs2__srv__Load_Response * input,
  rob599_msgs2__srv__Load_Response * output);

/// Initialize array of srv/Load messages.
/**
 * It allocates the memory for the number of elements and calls
 * rob599_msgs2__srv__Load_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__Sequence__init(rob599_msgs2__srv__Load_Response__Sequence * array, size_t size);

/// Finalize array of srv/Load messages.
/**
 * It calls
 * rob599_msgs2__srv__Load_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Response__Sequence__fini(rob599_msgs2__srv__Load_Response__Sequence * array);

/// Create array of srv/Load messages.
/**
 * It allocates the memory for the array and calls
 * rob599_msgs2__srv__Load_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
rob599_msgs2__srv__Load_Response__Sequence *
rob599_msgs2__srv__Load_Response__Sequence__create(size_t size);

/// Destroy array of srv/Load messages.
/**
 * It calls
 * rob599_msgs2__srv__Load_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
void
rob599_msgs2__srv__Load_Response__Sequence__destroy(rob599_msgs2__srv__Load_Response__Sequence * array);

/// Check for srv/Load message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__Sequence__are_equal(const rob599_msgs2__srv__Load_Response__Sequence * lhs, const rob599_msgs2__srv__Load_Response__Sequence * rhs);

/// Copy an array of srv/Load messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs2
bool
rob599_msgs2__srv__Load_Response__Sequence__copy(
  const rob599_msgs2__srv__Load_Response__Sequence * input,
  rob599_msgs2__srv__Load_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS2__SRV__DETAIL__LOAD__FUNCTIONS_H_
