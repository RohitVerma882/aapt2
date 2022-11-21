#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug)]
pub struct MyExt2 {
  pub a: i32,
  pub b: crate::mangled::_7_android_4_aidl_5_tests_9_extension_5_MyExt,
  pub c: String,
}
impl Default for MyExt2 {
  fn default() -> Self {
    Self {
      a: 0,
      b: Default::default(),
      c: Default::default(),
    }
  }
}
impl binder::Parcelable for MyExt2 {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_write(|subparcel| {
      subparcel.write(&self.a)?;
      subparcel.write(&self.b)?;
      subparcel.write(&self.c)?;
      Ok(())
    })
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_read(|subparcel| {
      if subparcel.has_more_data() {
        self.a = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.b = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.c = subparcel.read()?;
      }
      Ok(())
    })
  }
}
binder::impl_serialize_for_parcelable!(MyExt2);
binder::impl_deserialize_for_parcelable!(MyExt2);
impl binder::binder_impl::ParcelableMetadata for MyExt2 {
  fn get_descriptor() -> &'static str { "android.aidl.tests.extension.MyExt2" }
}
pub(crate) mod mangled {
 pub use super::MyExt2 as _7_android_4_aidl_5_tests_9_extension_6_MyExt2;
}
