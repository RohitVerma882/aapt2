#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug, Clone, PartialEq)]
pub enum EnumUnion {
  IntEnum(crate::mangled::_7_android_4_aidl_5_tests_7_IntEnum),
  LongEnum(crate::mangled::_7_android_4_aidl_5_tests_8_LongEnum),
  #[deprecated = "do not use this"]
  DeprecatedField(i32),
}
impl Default for EnumUnion {
  fn default() -> Self {
    Self::IntEnum(crate::mangled::_7_android_4_aidl_5_tests_7_IntEnum::FOO)
  }
}
impl binder::Parcelable for EnumUnion {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    match self {
      Self::IntEnum(v) => {
        parcel.write(&0i32)?;
        parcel.write(v)
      }
      Self::LongEnum(v) => {
        parcel.write(&1i32)?;
        parcel.write(v)
      }
      Self::DeprecatedField(v) => {
        parcel.write(&2i32)?;
        parcel.write(v)
      }
    }
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    let tag: i32 = parcel.read()?;
    match tag {
      0 => {
        let value: crate::mangled::_7_android_4_aidl_5_tests_7_IntEnum = parcel.read()?;
        *self = Self::IntEnum(value);
        Ok(())
      }
      1 => {
        let value: crate::mangled::_7_android_4_aidl_5_tests_8_LongEnum = parcel.read()?;
        *self = Self::LongEnum(value);
        Ok(())
      }
      2 => {
        let value: i32 = parcel.read()?;
        *self = Self::DeprecatedField(value);
        Ok(())
      }
      _ => {
        Err(binder::StatusCode::BAD_VALUE)
      }
    }
  }
}
binder::impl_serialize_for_parcelable!(EnumUnion);
binder::impl_deserialize_for_parcelable!(EnumUnion);
impl binder::binder_impl::ParcelableMetadata for EnumUnion {
  fn get_descriptor() -> &'static str { "android.aidl.tests.unions.EnumUnion" }
}
pub mod Tag {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    Tag : [i32; 3] {
      intEnum = 0,
      longEnum = 1,
      #[deprecated = "do not use this"]
      deprecatedField = 2,
    }
  }
}
pub(crate) mod mangled {
 pub use super::EnumUnion as _7_android_4_aidl_5_tests_6_unions_9_EnumUnion;
 pub use super::Tag::Tag as _7_android_4_aidl_5_tests_6_unions_9_EnumUnion_3_Tag;
}
