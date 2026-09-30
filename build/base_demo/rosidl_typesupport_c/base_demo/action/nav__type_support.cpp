// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from base_demo:action/Nav.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_demo/action/detail/nav__struct.h"
#include "base_demo/action/detail/nav__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Goal_type_support_ids_t;

static const _Nav_Goal_type_support_ids_t _Nav_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Goal_type_support_symbol_names_t _Nav_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_Goal)),
  }
};

typedef struct _Nav_Goal_type_support_data_t
{
  void * data[2];
} _Nav_Goal_type_support_data_t;

static _Nav_Goal_type_support_data_t _Nav_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Goal_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_Goal)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Result_type_support_ids_t;

static const _Nav_Result_type_support_ids_t _Nav_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Result_type_support_symbol_names_t _Nav_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_Result)),
  }
};

typedef struct _Nav_Result_type_support_data_t
{
  void * data[2];
} _Nav_Result_type_support_data_t;

static _Nav_Result_type_support_data_t _Nav_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Result_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_Result)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_Feedback_type_support_ids_t;

static const _Nav_Feedback_type_support_ids_t _Nav_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_Feedback_type_support_symbol_names_t _Nav_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_Feedback)),
  }
};

typedef struct _Nav_Feedback_type_support_data_t
{
  void * data[2];
} _Nav_Feedback_type_support_data_t;

static _Nav_Feedback_type_support_data_t _Nav_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_Feedback_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_Feedback)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_Request_type_support_ids_t;

static const _Nav_SendGoal_Request_type_support_ids_t _Nav_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_Request_type_support_symbol_names_t _Nav_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_SendGoal_Request)),
  }
};

typedef struct _Nav_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_Request_type_support_data_t;

static _Nav_SendGoal_Request_type_support_data_t _Nav_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_Request_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_SendGoal_Request)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_Response_type_support_ids_t;

static const _Nav_SendGoal_Response_type_support_ids_t _Nav_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_Response_type_support_symbol_names_t _Nav_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_SendGoal_Response)),
  }
};

typedef struct _Nav_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_Response_type_support_data_t;

static _Nav_SendGoal_Response_type_support_data_t _Nav_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_Response_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_SendGoal_Response)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_SendGoal_type_support_ids_t;

static const _Nav_SendGoal_type_support_ids_t _Nav_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_SendGoal_type_support_symbol_names_t _Nav_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_SendGoal)),
  }
};

typedef struct _Nav_SendGoal_type_support_data_t
{
  void * data[2];
} _Nav_SendGoal_type_support_data_t;

static _Nav_SendGoal_type_support_data_t _Nav_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_SendGoal_service_typesupport_map = {
  2,
  "base_demo",
  &_Nav_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Nav_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Nav_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Nav_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_SendGoal)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_Request_type_support_ids_t;

static const _Nav_GetResult_Request_type_support_ids_t _Nav_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_Request_type_support_symbol_names_t _Nav_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_GetResult_Request)),
  }
};

typedef struct _Nav_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_Request_type_support_data_t;

static _Nav_GetResult_Request_type_support_data_t _Nav_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_Request_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_GetResult_Request)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_Response_type_support_ids_t;

static const _Nav_GetResult_Response_type_support_ids_t _Nav_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_Response_type_support_symbol_names_t _Nav_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_GetResult_Response)),
  }
};

typedef struct _Nav_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_Response_type_support_data_t;

static _Nav_GetResult_Response_type_support_data_t _Nav_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_Response_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_GetResult_Response)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_GetResult_type_support_ids_t;

static const _Nav_GetResult_type_support_ids_t _Nav_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_GetResult_type_support_symbol_names_t _Nav_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_GetResult)),
  }
};

typedef struct _Nav_GetResult_type_support_data_t
{
  void * data[2];
} _Nav_GetResult_type_support_data_t;

static _Nav_GetResult_type_support_data_t _Nav_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_GetResult_service_typesupport_map = {
  2,
  "base_demo",
  &_Nav_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Nav_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Nav_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Nav_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_GetResult)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_demo/action/detail/nav__struct.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Nav_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Nav_FeedbackMessage_type_support_ids_t;

static const _Nav_FeedbackMessage_type_support_ids_t _Nav_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Nav_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Nav_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Nav_FeedbackMessage_type_support_symbol_names_t _Nav_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_demo, action, Nav_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_demo, action, Nav_FeedbackMessage)),
  }
};

typedef struct _Nav_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Nav_FeedbackMessage_type_support_data_t;

static _Nav_FeedbackMessage_type_support_data_t _Nav_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Nav_FeedbackMessage_message_typesupport_map = {
  2,
  "base_demo",
  &_Nav_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Nav_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Nav_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Nav_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Nav_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_demo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_demo, action, Nav_FeedbackMessage)() {
  return &::base_demo::action::rosidl_typesupport_c::Nav_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "base_demo/action/nav.h"
// already included above
// #include "base_demo/action/detail/nav__type_support.h"

static rosidl_action_type_support_t _base_demo__action__Nav__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, base_demo, action, Nav)()
{
  // Thread-safe by always writing the same values to the static struct
  _base_demo__action__Nav__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, base_demo, action, Nav_SendGoal)();
  _base_demo__action__Nav__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, base_demo, action, Nav_GetResult)();
  _base_demo__action__Nav__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _base_demo__action__Nav__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, base_demo, action, Nav_FeedbackMessage)();
  _base_demo__action__Nav__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_base_demo__action__Nav__typesupport_c;
}

#ifdef __cplusplus
}
#endif
