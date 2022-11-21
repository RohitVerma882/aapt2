#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug)]
pub enum BazUnion {
  IntNum(i32),
}
impl Default for BazUnion {
  fn default() -> Self {
    Self::IntNum(0)
  }
}
impl binder::Parcelable for BazUnion {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    match self {
      Self::IntNum(v) => {
        parcel.write(&0i32)?;
        parcel.write(v)
      }
    }
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    let tag: i32 = parcel.read()?;
    match tag {
      0 => {
        let value: i32 = parcel.read()?;
        *self = Self::IntNum(value);
        Ok(())
      }
      _ => {
        Err(binder::StatusCode::BAD_VALUE)
      }
    }
  }
}
binder::impl_serialize_for_parcelable!(BazUnion);
binder::impl_deserialize_for_parcelable!(BazUnion);
impl binder::binder_impl::ParcelableMetadata for BazUnion {
  fn get_descriptor() -> &'static str { "android.aidl.versioned.tests.BazUnion" }
}
pub mod Tag {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    Tag : [i32; 1] {
      intNum = 0,
    }
  }
}
pub(crate) mod mangled {
 pub use super::BazUnion as _7_android_4_aidl_9_versioned_5_tests_8_BazUnion;
 pub use super::Tag::Tag as _7_android_4_aidl_9_versioned_5_tests_8_BazUnion_3_Tag;
}
