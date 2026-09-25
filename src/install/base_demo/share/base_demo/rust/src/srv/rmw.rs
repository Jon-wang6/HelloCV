#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__srv__Addints_Request() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__srv__Addints_Request__init(msg: *mut Addints_Request) -> bool;
    fn base_demo__srv__Addints_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Addints_Request>, size: usize) -> bool;
    fn base_demo__srv__Addints_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Addints_Request>);
    fn base_demo__srv__Addints_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Addints_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Addints_Request>) -> bool;
}

// Corresponds to base_demo__srv__Addints_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Addints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub num1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num2: i32,

}



impl Default for Addints_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__srv__Addints_Request__init(&mut msg as *mut _) {
        panic!("Call to base_demo__srv__Addints_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Addints_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Addints_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Addints_Request where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/srv/Addints_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__srv__Addints_Request() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__srv__Addints_Response() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__srv__Addints_Response__init(msg: *mut Addints_Response) -> bool;
    fn base_demo__srv__Addints_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Addints_Response>, size: usize) -> bool;
    fn base_demo__srv__Addints_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Addints_Response>);
    fn base_demo__srv__Addints_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Addints_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Addints_Response>) -> bool;
}

// Corresponds to base_demo__srv__Addints_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Addints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i32,

}



impl Default for Addints_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__srv__Addints_Response__init(&mut msg as *mut _) {
        panic!("Call to base_demo__srv__Addints_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Addints_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__srv__Addints_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Addints_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Addints_Response where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/srv/Addints_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__srv__Addints_Response() }
  }
}






#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__base_demo__srv__Addints() -> *const std::ffi::c_void;
}

// Corresponds to base_demo__srv__Addints
#[allow(missing_docs, non_camel_case_types)]
pub struct Addints;

impl rosidl_runtime_rs::Service for Addints {
    type Request = Addints_Request;
    type Response = Addints_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__base_demo__srv__Addints() }
    }
}


