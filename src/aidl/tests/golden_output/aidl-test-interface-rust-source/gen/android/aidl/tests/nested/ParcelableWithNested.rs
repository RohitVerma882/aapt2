#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug)]
pub struct ParcelableWithNested {
  pub status: crate::mangled::_7_android_4_aidl_5_tests_6_nested_20_ParcelableWithNested_6_Status,
}
impl Default for ParcelableWithNested {
  fn default() -> Self {
    Self {
      status: crate::mangled::_7_android_4_aidl_5_tests_6_nested_20_ParcelableWithNested_6_Status::OK,
    }
  }
}
impl binder::Parcelable for ParcelableWithNested {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_write(|subparcel| {
      subparcel.write(&self.status)?;
      Ok(())
    })
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_read(|subparcel| {
      if subparcel.has_more_data() {
        self.status = subparcel.read()?;
      }
      Ok(())
    })
  }
}
binder::impl_serialize_for_parcelable!(ParcelableWithNested);
binder::impl_deserialize_for_parcelable!(ParcelableWithNested);
impl binder::binder_impl::ParcelableMetadata for ParcelableWithNested {
  fn get_descriptor() -> &'static str { "android.aidl.tests.nested.ParcelableWithNested" }
}
pub mod Status {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    Status : [i8; 2] {
      OK = 0,
      NOT_OK = 1,
    }
  }
}
pub(crate) mod mangled {
 pub use super::ParcelableWithNested as _7_android_4_aidl_5_tests_6_nested_20_ParcelableWithNested;
 pub use super::Status::Status as _7_android_4_aidl_5_tests_6_nested_20_ParcelableWithNested_6_Status;
}
