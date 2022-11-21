#![forbid(unsafe_code)]
#![rustfmt::skip]
#[derive(Debug, PartialEq)]
pub struct FixedSizeArrayExample {
  pub int2x3: [[i32; 3]; 2],
  pub boolArray: [bool; 2],
  pub byteArray: [u8; 2],
  pub charArray: [u16; 2],
  pub intArray: [i32; 2],
  pub longArray: [i64; 2],
  pub floatArray: [f32; 2],
  pub doubleArray: [f64; 2],
  pub stringArray: [String; 2],
  pub byteEnumArray: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_ByteEnum; 2],
  pub intEnumArray: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_7_IntEnum; 2],
  pub longEnumArray: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_LongEnum; 2],
  pub parcelableArray: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 2],
  pub boolMatrix: [[bool; 2]; 2],
  pub byteMatrix: [[u8; 2]; 2],
  pub charMatrix: [[u16; 2]; 2],
  pub intMatrix: [[i32; 2]; 2],
  pub longMatrix: [[i64; 2]; 2],
  pub floatMatrix: [[f32; 2]; 2],
  pub doubleMatrix: [[f64; 2]; 2],
  pub stringMatrix: [[String; 2]; 2],
  pub byteEnumMatrix: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_ByteEnum; 2]; 2],
  pub intEnumMatrix: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_7_IntEnum; 2]; 2],
  pub longEnumMatrix: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_LongEnum; 2]; 2],
  pub parcelableMatrix: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 2]; 2],
  pub boolNullableArray: Option<[bool; 2]>,
  pub byteNullableArray: Option<[u8; 2]>,
  pub charNullableArray: Option<[u16; 2]>,
  pub intNullableArray: Option<[i32; 2]>,
  pub longNullableArray: Option<[i64; 2]>,
  pub floatNullableArray: Option<[f32; 2]>,
  pub doubleNullableArray: Option<[f64; 2]>,
  pub stringNullableArray: Option<[Option<String>; 2]>,
  pub byteEnumNullableArray: Option<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_ByteEnum; 2]>,
  pub intEnumNullableArray: Option<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_7_IntEnum; 2]>,
  pub longEnumNullableArray: Option<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_LongEnum; 2]>,
  pub binderNullableArray: Option<[Option<binder::SpIBinder>; 2]>,
  pub pfdNullableArray: Option<[Option<binder::ParcelFileDescriptor>; 2]>,
  pub parcelableNullableArray: Option<[Option<crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable>; 2]>,
  pub interfaceNullableArray: Option<[Option<binder::Strong<dyn crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_15_IEmptyInterface>>; 2]>,
  pub boolNullableMatrix: Option<[[bool; 2]; 2]>,
  pub byteNullableMatrix: Option<[[u8; 2]; 2]>,
  pub charNullableMatrix: Option<[[u16; 2]; 2]>,
  pub intNullableMatrix: Option<[[i32; 2]; 2]>,
  pub longNullableMatrix: Option<[[i64; 2]; 2]>,
  pub floatNullableMatrix: Option<[[f32; 2]; 2]>,
  pub doubleNullableMatrix: Option<[[f64; 2]; 2]>,
  pub stringNullableMatrix: Option<[[Option<String>; 2]; 2]>,
  pub byteEnumNullableMatrix: Option<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_ByteEnum; 2]; 2]>,
  pub intEnumNullableMatrix: Option<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_7_IntEnum; 2]; 2]>,
  pub longEnumNullableMatrix: Option<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_LongEnum; 2]; 2]>,
  pub binderNullableMatrix: Option<[[Option<binder::SpIBinder>; 2]; 2]>,
  pub pfdNullableMatrix: Option<[[Option<binder::ParcelFileDescriptor>; 2]; 2]>,
  pub parcelableNullableMatrix: Option<[[Option<crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable>; 2]; 2]>,
  pub interfaceNullableMatrix: Option<[[Option<binder::Strong<dyn crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_15_IEmptyInterface>>; 2]; 2]>,
}
impl Default for FixedSizeArrayExample {
  fn default() -> Self {
    Self {
      int2x3: [[1, 2, 3], [4, 5, 6]],
      boolArray: [Default::default(), Default::default()],
      byteArray: [Default::default(), Default::default()],
      charArray: [Default::default(), Default::default()],
      intArray: [Default::default(), Default::default()],
      longArray: [Default::default(), Default::default()],
      floatArray: [Default::default(), Default::default()],
      doubleArray: [Default::default(), Default::default()],
      stringArray: ["hello".into(), "world".into()],
      byteEnumArray: [Default::default(), Default::default()],
      intEnumArray: [Default::default(), Default::default()],
      longEnumArray: [Default::default(), Default::default()],
      parcelableArray: [Default::default(), Default::default()],
      boolMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      byteMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      charMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      intMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      longMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      floatMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      doubleMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      stringMatrix: [["hello".into(), "world".into()], ["Ciao".into(), "mondo".into()]],
      byteEnumMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      intEnumMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      longEnumMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      parcelableMatrix: [[Default::default(), Default::default()], [Default::default(), Default::default()]],
      boolNullableArray: Default::default(),
      byteNullableArray: Default::default(),
      charNullableArray: Default::default(),
      intNullableArray: Default::default(),
      longNullableArray: Default::default(),
      floatNullableArray: Default::default(),
      doubleNullableArray: Default::default(),
      stringNullableArray: Some([Some("hello".into()), Some("world".into())]),
      byteEnumNullableArray: Default::default(),
      intEnumNullableArray: Default::default(),
      longEnumNullableArray: Default::default(),
      binderNullableArray: Default::default(),
      pfdNullableArray: Default::default(),
      parcelableNullableArray: Default::default(),
      interfaceNullableArray: Default::default(),
      boolNullableMatrix: Default::default(),
      byteNullableMatrix: Default::default(),
      charNullableMatrix: Default::default(),
      intNullableMatrix: Default::default(),
      longNullableMatrix: Default::default(),
      floatNullableMatrix: Default::default(),
      doubleNullableMatrix: Default::default(),
      stringNullableMatrix: Some([[Some("hello".into()), Some("world".into())], [Some("Ciao".into()), Some("mondo".into())]]),
      byteEnumNullableMatrix: Default::default(),
      intEnumNullableMatrix: Default::default(),
      longEnumNullableMatrix: Default::default(),
      binderNullableMatrix: Default::default(),
      pfdNullableMatrix: Default::default(),
      parcelableNullableMatrix: Default::default(),
      interfaceNullableMatrix: Default::default(),
    }
  }
}
impl binder::Parcelable for FixedSizeArrayExample {
  fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_write(|subparcel| {
      subparcel.write(&self.int2x3)?;
      subparcel.write(&self.boolArray)?;
      subparcel.write(&self.byteArray)?;
      subparcel.write(&self.charArray)?;
      subparcel.write(&self.intArray)?;
      subparcel.write(&self.longArray)?;
      subparcel.write(&self.floatArray)?;
      subparcel.write(&self.doubleArray)?;
      subparcel.write(&self.stringArray)?;
      subparcel.write(&self.byteEnumArray)?;
      subparcel.write(&self.intEnumArray)?;
      subparcel.write(&self.longEnumArray)?;
      subparcel.write(&self.parcelableArray)?;
      subparcel.write(&self.boolMatrix)?;
      subparcel.write(&self.byteMatrix)?;
      subparcel.write(&self.charMatrix)?;
      subparcel.write(&self.intMatrix)?;
      subparcel.write(&self.longMatrix)?;
      subparcel.write(&self.floatMatrix)?;
      subparcel.write(&self.doubleMatrix)?;
      subparcel.write(&self.stringMatrix)?;
      subparcel.write(&self.byteEnumMatrix)?;
      subparcel.write(&self.intEnumMatrix)?;
      subparcel.write(&self.longEnumMatrix)?;
      subparcel.write(&self.parcelableMatrix)?;
      subparcel.write(&self.boolNullableArray)?;
      subparcel.write(&self.byteNullableArray)?;
      subparcel.write(&self.charNullableArray)?;
      subparcel.write(&self.intNullableArray)?;
      subparcel.write(&self.longNullableArray)?;
      subparcel.write(&self.floatNullableArray)?;
      subparcel.write(&self.doubleNullableArray)?;
      subparcel.write(&self.stringNullableArray)?;
      subparcel.write(&self.byteEnumNullableArray)?;
      subparcel.write(&self.intEnumNullableArray)?;
      subparcel.write(&self.longEnumNullableArray)?;
      subparcel.write(&self.binderNullableArray)?;
      subparcel.write(&self.pfdNullableArray)?;
      subparcel.write(&self.parcelableNullableArray)?;
      subparcel.write(&self.interfaceNullableArray)?;
      subparcel.write(&self.boolNullableMatrix)?;
      subparcel.write(&self.byteNullableMatrix)?;
      subparcel.write(&self.charNullableMatrix)?;
      subparcel.write(&self.intNullableMatrix)?;
      subparcel.write(&self.longNullableMatrix)?;
      subparcel.write(&self.floatNullableMatrix)?;
      subparcel.write(&self.doubleNullableMatrix)?;
      subparcel.write(&self.stringNullableMatrix)?;
      subparcel.write(&self.byteEnumNullableMatrix)?;
      subparcel.write(&self.intEnumNullableMatrix)?;
      subparcel.write(&self.longEnumNullableMatrix)?;
      subparcel.write(&self.binderNullableMatrix)?;
      subparcel.write(&self.pfdNullableMatrix)?;
      subparcel.write(&self.parcelableNullableMatrix)?;
      subparcel.write(&self.interfaceNullableMatrix)?;
      Ok(())
    })
  }
  fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
    parcel.sized_read(|subparcel| {
      if subparcel.has_more_data() {
        self.int2x3 = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.boolArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.charArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.floatArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.doubleArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.stringArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteEnumArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intEnumArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longEnumArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.parcelableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.boolMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.charMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.floatMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.doubleMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.stringMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteEnumMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intEnumMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longEnumMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.parcelableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.boolNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.charNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.floatNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.doubleNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.stringNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteEnumNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intEnumNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longEnumNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.binderNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.pfdNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.parcelableNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.interfaceNullableArray = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.boolNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.charNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.floatNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.doubleNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.stringNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.byteEnumNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.intEnumNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.longEnumNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.binderNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.pfdNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.parcelableNullableMatrix = subparcel.read()?;
      }
      if subparcel.has_more_data() {
        self.interfaceNullableMatrix = subparcel.read()?;
      }
      Ok(())
    })
  }
}
binder::impl_serialize_for_parcelable!(FixedSizeArrayExample);
binder::impl_deserialize_for_parcelable!(FixedSizeArrayExample);
impl binder::binder_impl::ParcelableMetadata for FixedSizeArrayExample {
  fn get_descriptor() -> &'static str { "android.aidl.fixedsizearray.FixedSizeArrayExample" }
}
pub mod IRepeatFixedSizeArray {
  #![allow(non_upper_case_globals)]
  #![allow(non_snake_case)]
  #[allow(unused_imports)] use binder::binder_impl::IBinderInternal;
  use binder::declare_binder_interface;
  declare_binder_interface! {
    IRepeatFixedSizeArray["android.aidl.fixedsizearray.FixedSizeArrayExample.IRepeatFixedSizeArray"] {
      native: BnRepeatFixedSizeArray(on_transact),
      proxy: BpRepeatFixedSizeArray {
      },
      async: IRepeatFixedSizeArrayAsync,
    }
  }
  pub trait IRepeatFixedSizeArray: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IRepeatFixedSizeArray" }
    fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]>;
    fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]>;
    fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]>;
    fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]>;
    fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]>;
    fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]>;
    fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]>;
    fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]>;
    fn getDefaultImpl() -> IRepeatFixedSizeArrayDefaultRef where Self: Sized {
      DEFAULT_IMPL.lock().unwrap().clone()
    }
    fn setDefaultImpl(d: IRepeatFixedSizeArrayDefaultRef) -> IRepeatFixedSizeArrayDefaultRef where Self: Sized {
      std::mem::replace(&mut *DEFAULT_IMPL.lock().unwrap(), d)
    }
  }
  pub trait IRepeatFixedSizeArrayAsync<P>: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IRepeatFixedSizeArray" }
    fn RepeatBytes<'a>(&'a self, _arg_input: &'a [u8; 3], _arg_repeated: &'a mut [u8; 3]) -> binder::BoxFuture<'a, binder::Result<[u8; 3]>>;
    fn RepeatInts<'a>(&'a self, _arg_input: &'a [i32; 3], _arg_repeated: &'a mut [i32; 3]) -> binder::BoxFuture<'a, binder::Result<[i32; 3]>>;
    fn RepeatBinders<'a>(&'a self, _arg_input: &'a [binder::SpIBinder; 3], _arg_repeated: &'a mut [Option<binder::SpIBinder>; 3]) -> binder::BoxFuture<'a, binder::Result<[binder::SpIBinder; 3]>>;
    fn RepeatParcelables<'a>(&'a self, _arg_input: &'a [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &'a mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::BoxFuture<'a, binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]>>;
    fn Repeat2dBytes<'a>(&'a self, _arg_input: &'a [[u8; 3]; 2], _arg_repeated: &'a mut [[u8; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[u8; 3]; 2]>>;
    fn Repeat2dInts<'a>(&'a self, _arg_input: &'a [[i32; 3]; 2], _arg_repeated: &'a mut [[i32; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[i32; 3]; 2]>>;
    fn Repeat2dBinders<'a>(&'a self, _arg_input: &'a [[binder::SpIBinder; 3]; 2], _arg_repeated: &'a mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[binder::SpIBinder; 3]; 2]>>;
    fn Repeat2dParcelables<'a>(&'a self, _arg_input: &'a [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &'a mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]>>;
  }
  #[::async_trait::async_trait]
  pub trait IRepeatFixedSizeArrayAsyncServer: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IRepeatFixedSizeArray" }
    async fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]>;
    async fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]>;
    async fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]>;
    async fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]>;
    async fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]>;
    async fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]>;
    async fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]>;
    async fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]>;
  }
  impl BnRepeatFixedSizeArray {
    /// Create a new async binder service.
    pub fn new_async_binder<T, R>(inner: T, rt: R, features: binder::BinderFeatures) -> binder::Strong<dyn IRepeatFixedSizeArray>
    where
      T: IRepeatFixedSizeArrayAsyncServer + binder::Interface + Send + Sync + 'static,
      R: binder::binder_impl::BinderAsyncRuntime + Send + Sync + 'static,
    {
      struct Wrapper<T, R> {
        _inner: T,
        _rt: R,
      }
      impl<T, R> binder::Interface for Wrapper<T, R> where T: binder::Interface, R: Send + Sync {
        fn as_binder(&self) -> binder::SpIBinder { self._inner.as_binder() }
        fn dump(&self, _file: &std::fs::File, _args: &[&std::ffi::CStr]) -> std::result::Result<(), binder::StatusCode> { self._inner.dump(_file, _args) }
      }
      impl<T, R> IRepeatFixedSizeArray for Wrapper<T, R>
      where
        T: IRepeatFixedSizeArrayAsyncServer + Send + Sync + 'static,
        R: binder::binder_impl::BinderAsyncRuntime + Send + Sync + 'static,
      {
        fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]> {
          self._rt.block_on(self._inner.RepeatBytes(_arg_input, _arg_repeated))
        }
        fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]> {
          self._rt.block_on(self._inner.RepeatInts(_arg_input, _arg_repeated))
        }
        fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]> {
          self._rt.block_on(self._inner.RepeatBinders(_arg_input, _arg_repeated))
        }
        fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]> {
          self._rt.block_on(self._inner.RepeatParcelables(_arg_input, _arg_repeated))
        }
        fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]> {
          self._rt.block_on(self._inner.Repeat2dBytes(_arg_input, _arg_repeated))
        }
        fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]> {
          self._rt.block_on(self._inner.Repeat2dInts(_arg_input, _arg_repeated))
        }
        fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]> {
          self._rt.block_on(self._inner.Repeat2dBinders(_arg_input, _arg_repeated))
        }
        fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]> {
          self._rt.block_on(self._inner.Repeat2dParcelables(_arg_input, _arg_repeated))
        }
      }
      let wrapped = Wrapper { _inner: inner, _rt: rt };
      Self::new_binder(wrapped, features)
    }
  }
  pub trait IRepeatFixedSizeArrayDefault: Send + Sync {
    fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
    fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]> {
      Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
    }
  }
  pub mod transactions {
    pub const RepeatBytes: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 0;
    pub const RepeatInts: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 1;
    pub const RepeatBinders: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 2;
    pub const RepeatParcelables: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 3;
    pub const Repeat2dBytes: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 4;
    pub const Repeat2dInts: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 5;
    pub const Repeat2dBinders: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 6;
    pub const Repeat2dParcelables: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 7;
  }
  pub type IRepeatFixedSizeArrayDefaultRef = Option<std::sync::Arc<dyn IRepeatFixedSizeArrayDefault>>;
  use lazy_static::lazy_static;
  lazy_static! {
    static ref DEFAULT_IMPL: std::sync::Mutex<IRepeatFixedSizeArrayDefaultRef> = std::sync::Mutex::new(None);
  }
  impl BpRepeatFixedSizeArray {
    fn build_parcel_RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[u8; 3]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.RepeatBytes(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [u8; 3] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[i32; 3]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.RepeatInts(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [i32; 3] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[binder::SpIBinder; 3]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.RepeatBinders(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [binder::SpIBinder; 3] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.RepeatParcelables(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[[u8; 3]; 2]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.Repeat2dBytes(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [[u8; 3]; 2] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[[i32; 3]; 2]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.Repeat2dInts(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [[i32; 3]; 2] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[[binder::SpIBinder; 3]; 2]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.Repeat2dBinders(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [[binder::SpIBinder; 3]; 2] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
    fn build_parcel_Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<binder::binder_impl::Parcel> {
      let mut aidl_data = self.binder.prepare_transact()?;
      aidl_data.write(_arg_input)?;
      Ok(aidl_data)
    }
    fn read_response_Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]> {
      if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
        if let Some(_aidl_default_impl) = <Self as IRepeatFixedSizeArray>::getDefaultImpl() {
          return _aidl_default_impl.Repeat2dParcelables(_arg_input, _arg_repeated);
        }
      }
      let _aidl_reply = _aidl_reply?;
      let _aidl_status: binder::Status = _aidl_reply.read()?;
      if !_aidl_status.is_ok() { return Err(_aidl_status); }
      let _aidl_return: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2] = _aidl_reply.read()?;
      _aidl_reply.read_onto(_arg_repeated)?;
      Ok(_aidl_return)
    }
  }
  impl IRepeatFixedSizeArray for BpRepeatFixedSizeArray {
    fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]> {
      let _aidl_data = self.build_parcel_RepeatBytes(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::RepeatBytes, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_RepeatBytes(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]> {
      let _aidl_data = self.build_parcel_RepeatInts(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::RepeatInts, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_RepeatInts(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]> {
      let _aidl_data = self.build_parcel_RepeatBinders(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::RepeatBinders, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_RepeatBinders(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]> {
      let _aidl_data = self.build_parcel_RepeatParcelables(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::RepeatParcelables, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_RepeatParcelables(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]> {
      let _aidl_data = self.build_parcel_Repeat2dBytes(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::Repeat2dBytes, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_Repeat2dBytes(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]> {
      let _aidl_data = self.build_parcel_Repeat2dInts(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::Repeat2dInts, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_Repeat2dInts(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]> {
      let _aidl_data = self.build_parcel_Repeat2dBinders(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::Repeat2dBinders, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_Repeat2dBinders(_arg_input, _arg_repeated, _aidl_reply)
    }
    fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]> {
      let _aidl_data = self.build_parcel_Repeat2dParcelables(_arg_input, _arg_repeated)?;
      let _aidl_reply = self.binder.submit_transact(transactions::Repeat2dParcelables, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
      self.read_response_Repeat2dParcelables(_arg_input, _arg_repeated, _aidl_reply)
    }
  }
  impl<P: binder::BinderAsyncPool> IRepeatFixedSizeArrayAsync<P> for BpRepeatFixedSizeArray {
    fn RepeatBytes<'a>(&'a self, _arg_input: &'a [u8; 3], _arg_repeated: &'a mut [u8; 3]) -> binder::BoxFuture<'a, binder::Result<[u8; 3]>> {
      let _aidl_data = match self.build_parcel_RepeatBytes(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::RepeatBytes, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_RepeatBytes(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn RepeatInts<'a>(&'a self, _arg_input: &'a [i32; 3], _arg_repeated: &'a mut [i32; 3]) -> binder::BoxFuture<'a, binder::Result<[i32; 3]>> {
      let _aidl_data = match self.build_parcel_RepeatInts(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::RepeatInts, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_RepeatInts(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn RepeatBinders<'a>(&'a self, _arg_input: &'a [binder::SpIBinder; 3], _arg_repeated: &'a mut [Option<binder::SpIBinder>; 3]) -> binder::BoxFuture<'a, binder::Result<[binder::SpIBinder; 3]>> {
      let _aidl_data = match self.build_parcel_RepeatBinders(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::RepeatBinders, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_RepeatBinders(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn RepeatParcelables<'a>(&'a self, _arg_input: &'a [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &'a mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::BoxFuture<'a, binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]>> {
      let _aidl_data = match self.build_parcel_RepeatParcelables(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::RepeatParcelables, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_RepeatParcelables(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn Repeat2dBytes<'a>(&'a self, _arg_input: &'a [[u8; 3]; 2], _arg_repeated: &'a mut [[u8; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[u8; 3]; 2]>> {
      let _aidl_data = match self.build_parcel_Repeat2dBytes(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::Repeat2dBytes, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_Repeat2dBytes(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn Repeat2dInts<'a>(&'a self, _arg_input: &'a [[i32; 3]; 2], _arg_repeated: &'a mut [[i32; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[i32; 3]; 2]>> {
      let _aidl_data = match self.build_parcel_Repeat2dInts(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::Repeat2dInts, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_Repeat2dInts(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn Repeat2dBinders<'a>(&'a self, _arg_input: &'a [[binder::SpIBinder; 3]; 2], _arg_repeated: &'a mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[binder::SpIBinder; 3]; 2]>> {
      let _aidl_data = match self.build_parcel_Repeat2dBinders(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::Repeat2dBinders, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_Repeat2dBinders(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
    fn Repeat2dParcelables<'a>(&'a self, _arg_input: &'a [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &'a mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::BoxFuture<'a, binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]>> {
      let _aidl_data = match self.build_parcel_Repeat2dParcelables(_arg_input, _arg_repeated) {
        Ok(_aidl_data) => _aidl_data,
        Err(err) => return Box::pin(std::future::ready(Err(err))),
      };
      let binder = self.binder.clone();
      P::spawn(
        move || binder.submit_transact(transactions::Repeat2dParcelables, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
        move |_aidl_reply| async move {
          self.read_response_Repeat2dParcelables(_arg_input, _arg_repeated, _aidl_reply)
        }
      )
    }
  }
  impl IRepeatFixedSizeArray for binder::binder_impl::Binder<BnRepeatFixedSizeArray> {
    fn RepeatBytes(&self, _arg_input: &[u8; 3], _arg_repeated: &mut [u8; 3]) -> binder::Result<[u8; 3]> { self.0.RepeatBytes(_arg_input, _arg_repeated) }
    fn RepeatInts(&self, _arg_input: &[i32; 3], _arg_repeated: &mut [i32; 3]) -> binder::Result<[i32; 3]> { self.0.RepeatInts(_arg_input, _arg_repeated) }
    fn RepeatBinders(&self, _arg_input: &[binder::SpIBinder; 3], _arg_repeated: &mut [Option<binder::SpIBinder>; 3]) -> binder::Result<[binder::SpIBinder; 3]> { self.0.RepeatBinders(_arg_input, _arg_repeated) }
    fn RepeatParcelables(&self, _arg_input: &[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3], _arg_repeated: &mut [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]) -> binder::Result<[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]> { self.0.RepeatParcelables(_arg_input, _arg_repeated) }
    fn Repeat2dBytes(&self, _arg_input: &[[u8; 3]; 2], _arg_repeated: &mut [[u8; 3]; 2]) -> binder::Result<[[u8; 3]; 2]> { self.0.Repeat2dBytes(_arg_input, _arg_repeated) }
    fn Repeat2dInts(&self, _arg_input: &[[i32; 3]; 2], _arg_repeated: &mut [[i32; 3]; 2]) -> binder::Result<[[i32; 3]; 2]> { self.0.Repeat2dInts(_arg_input, _arg_repeated) }
    fn Repeat2dBinders(&self, _arg_input: &[[binder::SpIBinder; 3]; 2], _arg_repeated: &mut [[Option<binder::SpIBinder>; 3]; 2]) -> binder::Result<[[binder::SpIBinder; 3]; 2]> { self.0.Repeat2dBinders(_arg_input, _arg_repeated) }
    fn Repeat2dParcelables(&self, _arg_input: &[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2], _arg_repeated: &mut [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]) -> binder::Result<[[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2]> { self.0.Repeat2dParcelables(_arg_input, _arg_repeated) }
  }
  fn on_transact(_aidl_service: &dyn IRepeatFixedSizeArray, _aidl_code: binder::binder_impl::TransactionCode, _aidl_data: &binder::binder_impl::BorrowedParcel<'_>, _aidl_reply: &mut binder::binder_impl::BorrowedParcel<'_>) -> std::result::Result<(), binder::StatusCode> {
    match _aidl_code {
      transactions::RepeatBytes => {
        let _arg_input: [u8; 3] = _aidl_data.read()?;
        let mut _arg_repeated: [u8; 3] = Default::default();
        let _aidl_return = _aidl_service.RepeatBytes(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::RepeatInts => {
        let _arg_input: [i32; 3] = _aidl_data.read()?;
        let mut _arg_repeated: [i32; 3] = Default::default();
        let _aidl_return = _aidl_service.RepeatInts(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::RepeatBinders => {
        let _arg_input: [binder::SpIBinder; 3] = _aidl_data.read()?;
        let mut _arg_repeated: [Option<binder::SpIBinder>; 3] = Default::default();
        let _aidl_return = _aidl_service.RepeatBinders(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::RepeatParcelables => {
        let _arg_input: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3] = _aidl_data.read()?;
        let mut _arg_repeated: [crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3] = Default::default();
        let _aidl_return = _aidl_service.RepeatParcelables(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::Repeat2dBytes => {
        let _arg_input: [[u8; 3]; 2] = _aidl_data.read()?;
        let mut _arg_repeated: [[u8; 3]; 2] = Default::default();
        let _aidl_return = _aidl_service.Repeat2dBytes(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::Repeat2dInts => {
        let _arg_input: [[i32; 3]; 2] = _aidl_data.read()?;
        let mut _arg_repeated: [[i32; 3]; 2] = Default::default();
        let _aidl_return = _aidl_service.Repeat2dInts(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::Repeat2dBinders => {
        let _arg_input: [[binder::SpIBinder; 3]; 2] = _aidl_data.read()?;
        let mut _arg_repeated: [[Option<binder::SpIBinder>; 3]; 2] = Default::default();
        let _aidl_return = _aidl_service.Repeat2dBinders(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      transactions::Repeat2dParcelables => {
        let _arg_input: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2] = _aidl_data.read()?;
        let mut _arg_repeated: [[crate::mangled::_7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable; 3]; 2] = Default::default();
        let _aidl_return = _aidl_service.Repeat2dParcelables(&_arg_input, &mut _arg_repeated);
        match &_aidl_return {
          Ok(_aidl_return) => {
            _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
            _aidl_reply.write(_aidl_return)?;
            _aidl_reply.write(&_arg_repeated)?;
          }
          Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
        }
        Ok(())
      }
      _ => Err(binder::StatusCode::UNKNOWN_TRANSACTION)
    }
  }
}
pub mod ByteEnum {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    ByteEnum : [i8; 1] {
      A = 0,
    }
  }
}
pub mod IntEnum {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    IntEnum : [i32; 1] {
      A = 0,
    }
  }
}
pub mod LongEnum {
  #![allow(non_upper_case_globals)]
  use binder::declare_binder_enum;
  declare_binder_enum! {
    LongEnum : [i64; 1] {
      A = 0,
    }
  }
}
pub mod IntParcelable {
  #[derive(Debug, Clone, Copy, PartialEq)]
  pub struct IntParcelable {
    pub value: i32,
  }
  impl Default for IntParcelable {
    fn default() -> Self {
      Self {
        value: 0,
      }
    }
  }
  impl binder::Parcelable for IntParcelable {
    fn write_to_parcel(&self, parcel: &mut binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
      parcel.sized_write(|subparcel| {
        subparcel.write(&self.value)?;
        Ok(())
      })
    }
    fn read_from_parcel(&mut self, parcel: &binder::binder_impl::BorrowedParcel) -> std::result::Result<(), binder::StatusCode> {
      parcel.sized_read(|subparcel| {
        if subparcel.has_more_data() {
          self.value = subparcel.read()?;
        }
        Ok(())
      })
    }
  }
  binder::impl_serialize_for_parcelable!(IntParcelable);
  binder::impl_deserialize_for_parcelable!(IntParcelable);
  impl binder::binder_impl::ParcelableMetadata for IntParcelable {
    fn get_descriptor() -> &'static str { "android.aidl.fixedsizearray.FixedSizeArrayExample.IntParcelable" }
  }
}
pub mod IEmptyInterface {
  #![allow(non_upper_case_globals)]
  #![allow(non_snake_case)]
  #[allow(unused_imports)] use binder::binder_impl::IBinderInternal;
  use binder::declare_binder_interface;
  declare_binder_interface! {
    IEmptyInterface["android.aidl.fixedsizearray.FixedSizeArrayExample.IEmptyInterface"] {
      native: BnEmptyInterface(on_transact),
      proxy: BpEmptyInterface {
      },
      async: IEmptyInterfaceAsync,
    }
  }
  pub trait IEmptyInterface: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IEmptyInterface" }
    fn getDefaultImpl() -> IEmptyInterfaceDefaultRef where Self: Sized {
      DEFAULT_IMPL.lock().unwrap().clone()
    }
    fn setDefaultImpl(d: IEmptyInterfaceDefaultRef) -> IEmptyInterfaceDefaultRef where Self: Sized {
      std::mem::replace(&mut *DEFAULT_IMPL.lock().unwrap(), d)
    }
  }
  pub trait IEmptyInterfaceAsync<P>: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IEmptyInterface" }
  }
  #[::async_trait::async_trait]
  pub trait IEmptyInterfaceAsyncServer: binder::Interface + Send {
    fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.fixedsizearray.FixedSizeArrayExample.IEmptyInterface" }
  }
  impl BnEmptyInterface {
    /// Create a new async binder service.
    pub fn new_async_binder<T, R>(inner: T, rt: R, features: binder::BinderFeatures) -> binder::Strong<dyn IEmptyInterface>
    where
      T: IEmptyInterfaceAsyncServer + binder::Interface + Send + Sync + 'static,
      R: binder::binder_impl::BinderAsyncRuntime + Send + Sync + 'static,
    {
      struct Wrapper<T, R> {
        _inner: T,
        _rt: R,
      }
      impl<T, R> binder::Interface for Wrapper<T, R> where T: binder::Interface, R: Send + Sync {
        fn as_binder(&self) -> binder::SpIBinder { self._inner.as_binder() }
        fn dump(&self, _file: &std::fs::File, _args: &[&std::ffi::CStr]) -> std::result::Result<(), binder::StatusCode> { self._inner.dump(_file, _args) }
      }
      impl<T, R> IEmptyInterface for Wrapper<T, R>
      where
        T: IEmptyInterfaceAsyncServer + Send + Sync + 'static,
        R: binder::binder_impl::BinderAsyncRuntime + Send + Sync + 'static,
      {
      }
      let wrapped = Wrapper { _inner: inner, _rt: rt };
      Self::new_binder(wrapped, features)
    }
  }
  pub trait IEmptyInterfaceDefault: Send + Sync {
  }
  pub mod transactions {
  }
  pub type IEmptyInterfaceDefaultRef = Option<std::sync::Arc<dyn IEmptyInterfaceDefault>>;
  use lazy_static::lazy_static;
  lazy_static! {
    static ref DEFAULT_IMPL: std::sync::Mutex<IEmptyInterfaceDefaultRef> = std::sync::Mutex::new(None);
  }
  impl BpEmptyInterface {
  }
  impl IEmptyInterface for BpEmptyInterface {
  }
  impl<P: binder::BinderAsyncPool> IEmptyInterfaceAsync<P> for BpEmptyInterface {
  }
  impl IEmptyInterface for binder::binder_impl::Binder<BnEmptyInterface> {
  }
  fn on_transact(_aidl_service: &dyn IEmptyInterface, _aidl_code: binder::binder_impl::TransactionCode, _aidl_data: &binder::binder_impl::BorrowedParcel<'_>, _aidl_reply: &mut binder::binder_impl::BorrowedParcel<'_>) -> std::result::Result<(), binder::StatusCode> {
    match _aidl_code {
      _ => Err(binder::StatusCode::UNKNOWN_TRANSACTION)
    }
  }
}
pub(crate) mod mangled {
 pub use super::FixedSizeArrayExample as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample;
 pub use super::IRepeatFixedSizeArray::IRepeatFixedSizeArray as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_21_IRepeatFixedSizeArray;
 pub use super::ByteEnum::ByteEnum as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_ByteEnum;
 pub use super::IntEnum::IntEnum as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_7_IntEnum;
 pub use super::LongEnum::LongEnum as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_8_LongEnum;
 pub use super::IntParcelable::IntParcelable as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_13_IntParcelable;
 pub use super::IEmptyInterface::IEmptyInterface as _7_android_4_aidl_14_fixedsizearray_21_FixedSizeArrayExample_15_IEmptyInterface;
}
