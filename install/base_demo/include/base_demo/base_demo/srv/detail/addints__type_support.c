// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_demo:srv/Addints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_demo/srv/detail/addints__rosidl_typesupport_introspection_c.h"
#include "base_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_demo/srv/detail/addints__functions.h"
#include "base_demo/srv/detail/addints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_demo__srv__Addints_Request__init(message_memory);
}

void base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_fini_function(void * message_memory)
{
  base_demo__srv__Addints_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_member_array[2] = {
  {
    "num1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_demo__srv__Addints_Request, num1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_demo__srv__Addints_Request, num2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_members = {
  "base_demo__srv",  // message namespace
  "Addints_Request",  // message name
  2,  // number of fields
  sizeof(base_demo__srv__Addints_Request),
  base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_member_array,  // message members
  base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_type_support_handle = {
  0,
  &base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Request)() {
  if (!base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_type_support_handle.typesupport_identifier) {
    base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_demo__srv__Addints_Request__rosidl_typesupport_introspection_c__Addints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_demo/srv/detail/addints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_demo/srv/detail/addints__functions.h"
// already included above
// #include "base_demo/srv/detail/addints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_demo__srv__Addints_Response__init(message_memory);
}

void base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_fini_function(void * message_memory)
{
  base_demo__srv__Addints_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_demo__srv__Addints_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_members = {
  "base_demo__srv",  // message namespace
  "Addints_Response",  // message name
  1,  // number of fields
  sizeof(base_demo__srv__Addints_Response),
  base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_member_array,  // message members
  base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_type_support_handle = {
  0,
  &base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Response)() {
  if (!base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_type_support_handle.typesupport_identifier) {
    base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_demo__srv__Addints_Response__rosidl_typesupport_introspection_c__Addints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_demo/srv/detail/addints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_members = {
  "base_demo__srv",  // service namespace
  "Addints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_Request_message_type_support_handle,
  NULL  // response message
  // base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_type_support_handle = {
  0,
  &base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints)() {
  if (!base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_type_support_handle.typesupport_identifier) {
    base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, srv, Addints_Response)()->data;
  }

  return &base_demo__srv__detail__addints__rosidl_typesupport_introspection_c__Addints_service_type_support_handle;
}
