#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug)]
pub struct Foo {
}
impl Default for Foo {
  fn default() -> Self {
    Self {
    }
  }
}
impl binder::Parcelable for Foo {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_write(|subparcel| {
      Ok(())
    })
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_read(|subparcel| {
      Ok(())
    })
  }
}
binder::impl_serialize_for_parcelable!(Foo);
binder::impl_deserialize_for_parcelable!(Foo);
impl binder::binder_impl::ParcelableMetadata for Foo {
  fn get_descriptor() -> &'static str { "android.aidl.versioned.tests.Foo" }
}
pub(crate) mod mangled {
 pub use super::Foo as _7_android_4_aidl_9_versioned_5_tests_3_Foo;
}
