#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Kill_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__Kill_Request__init(msg: *mut Kill_Request) -> bool;
    fn turtlesim__srv__Kill_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Kill_Request>, size: usize) -> bool;
    fn turtlesim__srv__Kill_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Kill_Request>);
    fn turtlesim__srv__Kill_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Kill_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Kill_Request>) -> bool;
}

// Corresponds to turtlesim__srv__Kill_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Kill_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for Kill_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__Kill_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__Kill_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Kill_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Kill_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Kill_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/Kill_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Kill_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Kill_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__Kill_Response__init(msg: *mut Kill_Response) -> bool;
    fn turtlesim__srv__Kill_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Kill_Response>, size: usize) -> bool;
    fn turtlesim__srv__Kill_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Kill_Response>);
    fn turtlesim__srv__Kill_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Kill_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Kill_Response>) -> bool;
}

// Corresponds to turtlesim__srv__Kill_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Kill_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Kill_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__Kill_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__Kill_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Kill_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Kill_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Kill_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Kill_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/Kill_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Kill_Response() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__SetPen_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__SetPen_Request__init(msg: *mut SetPen_Request) -> bool;
    fn turtlesim__srv__SetPen_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPen_Request>, size: usize) -> bool;
    fn turtlesim__srv__SetPen_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPen_Request>);
    fn turtlesim__srv__SetPen_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPen_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPen_Request>) -> bool;
}

// Corresponds to turtlesim__srv__SetPen_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPen_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub off: u8,

}



impl Default for SetPen_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__SetPen_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__SetPen_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPen_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPen_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPen_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/SetPen_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__SetPen_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__SetPen_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__SetPen_Response__init(msg: *mut SetPen_Response) -> bool;
    fn turtlesim__srv__SetPen_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPen_Response>, size: usize) -> bool;
    fn turtlesim__srv__SetPen_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPen_Response>);
    fn turtlesim__srv__SetPen_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPen_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPen_Response>) -> bool;
}

// Corresponds to turtlesim__srv__SetPen_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPen_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetPen_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__SetPen_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__SetPen_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPen_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__SetPen_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPen_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPen_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/SetPen_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__SetPen_Response() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Spawn_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__Spawn_Request__init(msg: *mut Spawn_Request) -> bool;
    fn turtlesim__srv__Spawn_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Spawn_Request>, size: usize) -> bool;
    fn turtlesim__srv__Spawn_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Spawn_Request>);
    fn turtlesim__srv__Spawn_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Spawn_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Spawn_Request>) -> bool;
}

// Corresponds to turtlesim__srv__Spawn_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Spawn_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,

    /// Optional.  A unique name will be created and returned if this is empty
    pub name: rosidl_runtime_rs::String,

}



impl Default for Spawn_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__Spawn_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__Spawn_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Spawn_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Spawn_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Spawn_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/Spawn_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Spawn_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Spawn_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__Spawn_Response__init(msg: *mut Spawn_Response) -> bool;
    fn turtlesim__srv__Spawn_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Spawn_Response>, size: usize) -> bool;
    fn turtlesim__srv__Spawn_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Spawn_Response>);
    fn turtlesim__srv__Spawn_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Spawn_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Spawn_Response>) -> bool;
}

// Corresponds to turtlesim__srv__Spawn_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Spawn_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for Spawn_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__Spawn_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__Spawn_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Spawn_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__Spawn_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Spawn_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Spawn_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/Spawn_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__Spawn_Response() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportAbsolute_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__TeleportAbsolute_Request__init(msg: *mut TeleportAbsolute_Request) -> bool;
    fn turtlesim__srv__TeleportAbsolute_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Request>, size: usize) -> bool;
    fn turtlesim__srv__TeleportAbsolute_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Request>);
    fn turtlesim__srv__TeleportAbsolute_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleportAbsolute_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Request>) -> bool;
}

// Corresponds to turtlesim__srv__TeleportAbsolute_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleportAbsolute_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,

}



impl Default for TeleportAbsolute_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__TeleportAbsolute_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__TeleportAbsolute_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleportAbsolute_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleportAbsolute_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleportAbsolute_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/TeleportAbsolute_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportAbsolute_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportAbsolute_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__TeleportAbsolute_Response__init(msg: *mut TeleportAbsolute_Response) -> bool;
    fn turtlesim__srv__TeleportAbsolute_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Response>, size: usize) -> bool;
    fn turtlesim__srv__TeleportAbsolute_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Response>);
    fn turtlesim__srv__TeleportAbsolute_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleportAbsolute_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleportAbsolute_Response>) -> bool;
}

// Corresponds to turtlesim__srv__TeleportAbsolute_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleportAbsolute_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TeleportAbsolute_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__TeleportAbsolute_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__TeleportAbsolute_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleportAbsolute_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportAbsolute_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleportAbsolute_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleportAbsolute_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/TeleportAbsolute_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportAbsolute_Response() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportRelative_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__TeleportRelative_Request__init(msg: *mut TeleportRelative_Request) -> bool;
    fn turtlesim__srv__TeleportRelative_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Request>, size: usize) -> bool;
    fn turtlesim__srv__TeleportRelative_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Request>);
    fn turtlesim__srv__TeleportRelative_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleportRelative_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Request>) -> bool;
}

// Corresponds to turtlesim__srv__TeleportRelative_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleportRelative_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular: f32,

}



impl Default for TeleportRelative_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__TeleportRelative_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__TeleportRelative_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleportRelative_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleportRelative_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleportRelative_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/TeleportRelative_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportRelative_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportRelative_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__srv__TeleportRelative_Response__init(msg: *mut TeleportRelative_Response) -> bool;
    fn turtlesim__srv__TeleportRelative_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Response>, size: usize) -> bool;
    fn turtlesim__srv__TeleportRelative_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Response>);
    fn turtlesim__srv__TeleportRelative_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleportRelative_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleportRelative_Response>) -> bool;
}

// Corresponds to turtlesim__srv__TeleportRelative_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleportRelative_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TeleportRelative_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__srv__TeleportRelative_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__srv__TeleportRelative_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleportRelative_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__srv__TeleportRelative_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleportRelative_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleportRelative_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/srv/TeleportRelative_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__srv__TeleportRelative_Response() }
  }
}






#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__Kill() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__srv__Kill
#[allow(missing_docs, non_camel_case_types)]
pub struct Kill;

impl rosidl_runtime_rs::Service for Kill {
    type Request = Kill_Request;
    type Response = Kill_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__Kill() }
    }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__SetPen() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__srv__SetPen
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPen;

impl rosidl_runtime_rs::Service for SetPen {
    type Request = SetPen_Request;
    type Response = SetPen_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__SetPen() }
    }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__Spawn() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__srv__Spawn
#[allow(missing_docs, non_camel_case_types)]
pub struct Spawn;

impl rosidl_runtime_rs::Service for Spawn {
    type Request = Spawn_Request;
    type Response = Spawn_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__Spawn() }
    }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__TeleportAbsolute() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__srv__TeleportAbsolute
#[allow(missing_docs, non_camel_case_types)]
pub struct TeleportAbsolute;

impl rosidl_runtime_rs::Service for TeleportAbsolute {
    type Request = TeleportAbsolute_Request;
    type Response = TeleportAbsolute_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__TeleportAbsolute() }
    }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__TeleportRelative() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__srv__TeleportRelative
#[allow(missing_docs, non_camel_case_types)]
pub struct TeleportRelative;

impl rosidl_runtime_rs::Service for TeleportRelative {
    type Request = TeleportRelative_Request;
    type Response = TeleportRelative_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__srv__TeleportRelative() }
    }
}


