// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_demo:action/Nav.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__ACTION__DETAIL__NAV__STRUCT_H_
#define BASE_DEMO__ACTION__DETAIL__NAV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_Goal
{
  float goal_x;
  float goal_y;
  float goal_theta;
} base_demo__action__Nav_Goal;

// Struct for a sequence of base_demo__action__Nav_Goal.
typedef struct base_demo__action__Nav_Goal__Sequence
{
  base_demo__action__Nav_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_Result
{
  float turtle_x;
  float turtle_y;
  float turtle_theta;
} base_demo__action__Nav_Result;

// Struct for a sequence of base_demo__action__Nav_Result.
typedef struct base_demo__action__Nav_Result__Sequence
{
  base_demo__action__Nav_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_Feedback
{
  float distance;
} base_demo__action__Nav_Feedback;

// Struct for a sequence of base_demo__action__Nav_Feedback.
typedef struct base_demo__action__Nav_Feedback__Sequence
{
  base_demo__action__Nav_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_demo/action/detail/nav__struct.h"

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_demo__action__Nav_Goal goal;
} base_demo__action__Nav_SendGoal_Request;

// Struct for a sequence of base_demo__action__Nav_SendGoal_Request.
typedef struct base_demo__action__Nav_SendGoal_Request__Sequence
{
  base_demo__action__Nav_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_demo__action__Nav_SendGoal_Response;

// Struct for a sequence of base_demo__action__Nav_SendGoal_Response.
typedef struct base_demo__action__Nav_SendGoal_Response__Sequence
{
  base_demo__action__Nav_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_demo__action__Nav_GetResult_Request;

// Struct for a sequence of base_demo__action__Nav_GetResult_Request.
typedef struct base_demo__action__Nav_GetResult_Request__Sequence
{
  base_demo__action__Nav_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_demo/action/detail/nav__struct.h"

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_GetResult_Response
{
  int8_t status;
  base_demo__action__Nav_Result result;
} base_demo__action__Nav_GetResult_Response;

// Struct for a sequence of base_demo__action__Nav_GetResult_Response.
typedef struct base_demo__action__Nav_GetResult_Response__Sequence
{
  base_demo__action__Nav_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_demo/action/detail/nav__struct.h"

/// Struct defined in action/Nav in the package base_demo.
typedef struct base_demo__action__Nav_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_demo__action__Nav_Feedback feedback;
} base_demo__action__Nav_FeedbackMessage;

// Struct for a sequence of base_demo__action__Nav_FeedbackMessage.
typedef struct base_demo__action__Nav_FeedbackMessage__Sequence
{
  base_demo__action__Nav_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Nav_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_DEMO__ACTION__DETAIL__NAV__STRUCT_H_
