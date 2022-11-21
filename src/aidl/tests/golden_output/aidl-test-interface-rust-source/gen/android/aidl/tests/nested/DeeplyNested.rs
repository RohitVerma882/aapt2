#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug)]
pub struct DeeplyNested {
}
impl Default for DeeplyNested {
  fn default() -> Self {
    Self {
    }
  }
}
impl binder::Parcelable for DeeplyNested {
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
binder::impl_serialize_for_parcelable!(DeeplyNested);
binder::impl_deserialize_for_parcelable!(DeeplyNested);
impl binder::binder_impl::ParcelableMetadata for DeeplyNested {
  fn get_descriptor() -> &'static str { "android.aidl.tests.nested.DeeplyNested" }
}
pub mod A {
  #[derive(Debug)]
  pub struct A {
    pub e: crate::mangled::_7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B_1_C_1_D_1_E,
  }
  impl Default for A {
    fn default() -> Self {
      Self {
        e: crate::mangled::_7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B_1_C_1_D_1_E::OK,
      }
    }
  }
  impl binder::Parcelable for A {
    fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
      parcel.sized_write(|subparcel| {
        subparcel.write(&self.e)?;
        Ok(())
      })
    }
    fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
      parcel.sized_read(|subparcel| {
        if subparcel.has_more_data() {
          self.e = subparcel.read()?;
        }
        Ok(())
      })
    }
  }
  binder::impl_serialize_for_parcelable!(A);
  binder::impl_deserialize_for_parcelable!(A);
  impl binder::binder_impl::ParcelableMetadata for A {
    fn get_descriptor() -> &'static str { "android.aidl.tests.nested.DeeplyNested.A" }
  }
}
pub mod B {
  #[derive(Debug)]
  pub struct B {
  }
  impl Default for B {
    fn default() -> Self {
      Self {
      }
    }
  }
  impl binder::Parcelable for B {
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
  binder::impl_serialize_for_parcelable!(B);
  binder::impl_deserialize_for_parcelable!(B);
  impl binder::binder_impl::ParcelableMetadata for B {
    fn get_descriptor() -> &'static str { "android.aidl.tests.nested.DeeplyNested.B" }
  }
  pub mod C {
    #[derive(Debug)]
    pub struct C {
    }
    impl Default for C {
      fn default() -> Self {
        Self {
        }
      }
    }
    impl binder::Parcelable for C {
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
    binder::impl_serialize_for_parcelable!(C);
    binder::impl_deserialize_for_parcelable!(C);
    impl binder::binder_impl::ParcelableMetadata for C {
      fn get_descriptor() -> &'static str { "android.aidl.tests.nested.DeeplyNested.B.C" }
    }
    pub mod D {
      #[derive(Debug)]
      pub struct D {
      }
      impl Default for D {
        fn default() -> Self {
          Self {
          }
        }
      }
      impl binder::Parcelable for D {
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
      binder::impl_serialize_for_parcelable!(D);
      binder::impl_deserialize_for_parcelable!(D);
      impl binder::binder_impl::ParcelableMetadata for D {
        fn get_descriptor() -> &'static str { "android.aidl.tests.nested.DeeplyNested.B.C.D" }
      }
      pub mod E {
        #![allow(non_upper_case_globals)]
        use binder::declare_binder_enum;
        declare_binder_enum! {
          E : [i8; 1] {
            OK = 0,
          }
        }
      }
    }
  }
}
pub(crate) mod mangled {
 pub use super::DeeplyNested as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested;
 pub use super::A::A as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_A;
 pub use super::B::B as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B;
 pub use super::B::C::C as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B_1_C;
 pub use super::B::C::D::D as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B_1_C_1_D;
 pub use super::B::C::D::E::E as _7_android_4_aidl_5_tests_6_nested_12_DeeplyNested_1_B_1_C_1_D_1_E;
}
