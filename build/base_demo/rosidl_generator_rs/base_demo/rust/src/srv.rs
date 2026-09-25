#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to base_demo__srv__Addints_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Addints_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Addints_Request {
  type RmwMsg = super::srv::rmw::Addints_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        num1: msg.num1,
        num2: msg.num2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      num1: msg.num1,
      num2: msg.num2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      num1: msg.num1,
      num2: msg.num2,
    }
  }
}


// Corresponds to base_demo__srv__Addints_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Addints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i32,

}



impl Default for Addints_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Addints_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Addints_Response {
  type RmwMsg = super::srv::rmw::Addints_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sum: msg.sum,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sum: msg.sum,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sum: msg.sum,
    }
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


