// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_demo:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__SRV__DETAIL__DISTANCE__STRUCT_H_
#define BASE_DEMO__SRV__DETAIL__DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Distance in the package base_demo.
typedef struct base_demo__srv__Distance_Request
{
  float x;
  float y;
  float theta;
} base_demo__srv__Distance_Request;

// Struct for a sequence of base_demo__srv__Distance_Request.
typedef struct base_demo__srv__Distance_Request__Sequence
{
  base_demo__srv__Distance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__srv__Distance_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Distance in the package base_demo.
typedef struct base_demo__srv__Distance_Response
{
  float distance;
} base_demo__srv__Distance_Response;

// Struct for a sequence of base_demo__srv__Distance_Response.
typedef struct base_demo__srv__Distance_Response__Sequence
{
  base_demo__srv__Distance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__srv__Distance_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_DEMO__SRV__DETAIL__DISTANCE__STRUCT_H_
