#![forbid(unsafe_code)]
#![rustfmt::skip]
#![allow(non_upper_case_globals)]
#![allow(non_snake_case)]
#[allow(unused_imports)] use binder::binder_impl::IBinderInternal;
use binder::declare_binder_interface;
declare_binder_interface! {
  IFooInterface["android.aidl.versioned.tests.IFooInterface"] {
    native: BnFooInterface(on_transact),
    proxy: BpFooInterface {
      cached_version: std::sync::atomic::AtomicI32 = std::sync::atomic::AtomicI32::new(-1),
      cached_hash: std::sync::Mutex<Option<String>> = std::sync::Mutex::new(None)
    },
    async: IFooInterfaceAsync,
  }
}
pub trait IFooInterface: binder::Interface + Send {
  fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.versioned.tests.IFooInterface" }
  fn originalApi(&self) -> binder::Result<()>;
  fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String>;
  fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32>;
  fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32>;
  fn getInterfaceVersion(&self) -> binder::Result<i32> {
    Ok(VERSION)
  }
  fn getInterfaceHash(&self) -> binder::Result<String> {
    Ok(HASH.into())
  }
  fn getDefaultImpl() -> IFooInterfaceDefaultRef where Self: Sized {
    DEFAULT_IMPL.lock().unwrap().clone()
  }
  fn setDefaultImpl(d: IFooInterfaceDefaultRef) -> IFooInterfaceDefaultRef where Self: Sized {
    std::mem::replace(&mut *DEFAULT_IMPL.lock().unwrap(), d)
  }
}
pub trait IFooInterfaceAsync<P>: binder::Interface + Send {
  fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.versioned.tests.IFooInterface" }
  fn originalApi<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<()>>;
  fn acceptUnionAndReturnString<'a>(&'a self, _arg_u: &'a crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::BoxFuture<'a, binder::Result<String>>;
  fn ignoreParcelablesAndRepeatInt<'a>(&'a self, _arg_inFoo: &'a crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &'a mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &'a mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::BoxFuture<'a, binder::Result<i32>>;
  fn returnsLengthOfFooArray<'a>(&'a self, _arg_foos: &'a [crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::BoxFuture<'a, binder::Result<i32>>;
  fn getInterfaceVersion<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<i32>> {
    Box::pin(async move { Ok(VERSION) })
  }
  fn getInterfaceHash<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<String>> {
    Box::pin(async move { Ok(HASH.into()) })
  }
}
#[::async_trait::async_trait]
pub trait IFooInterfaceAsyncServer: binder::Interface + Send {
  fn get_descriptor() -> &'static str where Self: Sized { "android.aidl.versioned.tests.IFooInterface" }
  async fn originalApi(&self) -> binder::Result<()>;
  async fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String>;
  async fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32>;
  async fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32>;
}
impl BnFooInterface {
  /// Create a new async binder service.
  pub fn new_async_binder<T, R>(inner: T, rt: R, features: binder::BinderFeatures) -> binder::Strong<dyn IFooInterface>
  where
    T: IFooInterfaceAsyncServer + binder::Interface + Send + Sync + 'static,
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
    impl<T, R> IFooInterface for Wrapper<T, R>
    where
      T: IFooInterfaceAsyncServer + Send + Sync + 'static,
      R: binder::binder_impl::BinderAsyncRuntime + Send + Sync + 'static,
    {
      fn originalApi(&self) -> binder::Result<()> {
        self._rt.block_on(self._inner.originalApi())
      }
      fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String> {
        self._rt.block_on(self._inner.acceptUnionAndReturnString(_arg_u))
      }
      fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32> {
        self._rt.block_on(self._inner.ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value))
      }
      fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32> {
        self._rt.block_on(self._inner.returnsLengthOfFooArray(_arg_foos))
      }
    }
    let wrapped = Wrapper { _inner: inner, _rt: rt };
    Self::new_binder(wrapped, features)
  }
}
pub trait IFooInterfaceDefault: Send + Sync {
  fn originalApi(&self) -> binder::Result<()> {
    Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
  }
  fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String> {
    Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
  }
  fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32> {
    Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
  }
  fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32> {
    Err(binder::StatusCode::UNKNOWN_TRANSACTION.into())
  }
}
pub mod transactions {
  pub const originalApi: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 0;
  pub const acceptUnionAndReturnString: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 1;
  pub const ignoreParcelablesAndRepeatInt: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 2;
  pub const returnsLengthOfFooArray: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 3;
  pub const getInterfaceVersion: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 16777214;
  pub const getInterfaceHash: binder::binder_impl::TransactionCode = binder::binder_impl::FIRST_CALL_TRANSACTION + 16777213;
}
pub type IFooInterfaceDefaultRef = Option<std::sync::Arc<dyn IFooInterfaceDefault>>;
use lazy_static::lazy_static;
lazy_static! {
  static ref DEFAULT_IMPL: std::sync::Mutex<IFooInterfaceDefaultRef> = std::sync::Mutex::new(None);
}
pub const VERSION: i32 = 1;
pub const HASH: &str = "9e7be1859820c59d9d55dd133e71a3687b5d2e5b";
impl BpFooInterface {
  fn build_parcel_originalApi(&self) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    Ok(aidl_data)
  }
  fn read_response_originalApi(&self, _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<()> {
    if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
      if let Some(_aidl_default_impl) = <Self as IFooInterface>::getDefaultImpl() {
        return _aidl_default_impl.originalApi();
      }
    }
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    Ok(())
  }
  fn build_parcel_acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    aidl_data.write(_arg_u)?;
    Ok(aidl_data)
  }
  fn read_response_acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion, _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<String> {
    if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
      if let Some(_aidl_default_impl) = <Self as IFooInterface>::getDefaultImpl() {
        return _aidl_default_impl.acceptUnionAndReturnString(_arg_u);
      }
    }
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    let _aidl_return: String = _aidl_reply.read()?;
    Ok(_aidl_return)
  }
  fn build_parcel_ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    aidl_data.write(_arg_inFoo)?;
    aidl_data.write(_arg_inoutFoo)?;
    aidl_data.write(&_arg_value)?;
    Ok(aidl_data)
  }
  fn read_response_ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32, _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<i32> {
    if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
      if let Some(_aidl_default_impl) = <Self as IFooInterface>::getDefaultImpl() {
        return _aidl_default_impl.ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value);
      }
    }
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    let _aidl_return: i32 = _aidl_reply.read()?;
    _aidl_reply.read_onto(_arg_inoutFoo)?;
    _aidl_reply.read_onto(_arg_outFoo)?;
    Ok(_aidl_return)
  }
  fn build_parcel_returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    aidl_data.write(_arg_foos)?;
    Ok(aidl_data)
  }
  fn read_response_returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo], _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<i32> {
    if let Err(binder::StatusCode::UNKNOWN_TRANSACTION) = _aidl_reply {
      if let Some(_aidl_default_impl) = <Self as IFooInterface>::getDefaultImpl() {
        return _aidl_default_impl.returnsLengthOfFooArray(_arg_foos);
      }
    }
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    let _aidl_return: i32 = _aidl_reply.read()?;
    Ok(_aidl_return)
  }
  fn build_parcel_getInterfaceVersion(&self) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    Ok(aidl_data)
  }
  fn read_response_getInterfaceVersion(&self, _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<i32> {
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    let _aidl_return: i32 = _aidl_reply.read()?;
    self.cached_version.store(_aidl_return, std::sync::atomic::Ordering::Relaxed);
    Ok(_aidl_return)
  }
  fn build_parcel_getInterfaceHash(&self) -> binder::Result<binder::binder_impl::Parcel> {
    let mut aidl_data = self.binder.prepare_transact()?;
    Ok(aidl_data)
  }
  fn read_response_getInterfaceHash(&self, _aidl_reply: std::result::Result<binder::binder_impl::Parcel, binder::StatusCode>) -> binder::Result<String> {
    let _aidl_reply = _aidl_reply?;
    let _aidl_status: binder::Status = _aidl_reply.read()?;
    if !_aidl_status.is_ok() { return Err(_aidl_status); }
    let _aidl_return: String = _aidl_reply.read()?;
    *self.cached_hash.lock().unwrap() = Some(_aidl_return.clone());
    Ok(_aidl_return)
  }
}
impl IFooInterface for BpFooInterface {
  fn originalApi(&self) -> binder::Result<()> {
    let _aidl_data = self.build_parcel_originalApi()?;
    let _aidl_reply = self.binder.submit_transact(transactions::originalApi, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_originalApi(_aidl_reply)
  }
  fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String> {
    let _aidl_data = self.build_parcel_acceptUnionAndReturnString(_arg_u)?;
    let _aidl_reply = self.binder.submit_transact(transactions::acceptUnionAndReturnString, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_acceptUnionAndReturnString(_arg_u, _aidl_reply)
  }
  fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32> {
    let _aidl_data = self.build_parcel_ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value)?;
    let _aidl_reply = self.binder.submit_transact(transactions::ignoreParcelablesAndRepeatInt, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value, _aidl_reply)
  }
  fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32> {
    let _aidl_data = self.build_parcel_returnsLengthOfFooArray(_arg_foos)?;
    let _aidl_reply = self.binder.submit_transact(transactions::returnsLengthOfFooArray, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_returnsLengthOfFooArray(_arg_foos, _aidl_reply)
  }
  fn getInterfaceVersion(&self) -> binder::Result<i32> {
    let _aidl_version = self.cached_version.load(std::sync::atomic::Ordering::Relaxed);
    if _aidl_version != -1 { return Ok(_aidl_version); }
    let _aidl_data = self.build_parcel_getInterfaceVersion()?;
    let _aidl_reply = self.binder.submit_transact(transactions::getInterfaceVersion, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_getInterfaceVersion(_aidl_reply)
  }
  fn getInterfaceHash(&self) -> binder::Result<String> {
    {
      let _aidl_hash_lock = self.cached_hash.lock().unwrap();
      if let Some(ref _aidl_hash) = *_aidl_hash_lock {
        return Ok(_aidl_hash.clone());
      }
    }
    let _aidl_data = self.build_parcel_getInterfaceHash()?;
    let _aidl_reply = self.binder.submit_transact(transactions::getInterfaceHash, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL);
    self.read_response_getInterfaceHash(_aidl_reply)
  }
}
impl<P: binder::BinderAsyncPool> IFooInterfaceAsync<P> for BpFooInterface {
  fn originalApi<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<()>> {
    let _aidl_data = match self.build_parcel_originalApi() {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::originalApi, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_originalApi(_aidl_reply)
      }
    )
  }
  fn acceptUnionAndReturnString<'a>(&'a self, _arg_u: &'a crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::BoxFuture<'a, binder::Result<String>> {
    let _aidl_data = match self.build_parcel_acceptUnionAndReturnString(_arg_u) {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::acceptUnionAndReturnString, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_acceptUnionAndReturnString(_arg_u, _aidl_reply)
      }
    )
  }
  fn ignoreParcelablesAndRepeatInt<'a>(&'a self, _arg_inFoo: &'a crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &'a mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &'a mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::BoxFuture<'a, binder::Result<i32>> {
    let _aidl_data = match self.build_parcel_ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value) {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::ignoreParcelablesAndRepeatInt, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value, _aidl_reply)
      }
    )
  }
  fn returnsLengthOfFooArray<'a>(&'a self, _arg_foos: &'a [crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::BoxFuture<'a, binder::Result<i32>> {
    let _aidl_data = match self.build_parcel_returnsLengthOfFooArray(_arg_foos) {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::returnsLengthOfFooArray, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_returnsLengthOfFooArray(_arg_foos, _aidl_reply)
      }
    )
  }
  fn getInterfaceVersion<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<i32>> {
    let _aidl_version = self.cached_version.load(std::sync::atomic::Ordering::Relaxed);
    if _aidl_version != -1 { return Box::pin(std::future::ready(Ok(_aidl_version))); }
    let _aidl_data = match self.build_parcel_getInterfaceVersion() {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::getInterfaceVersion, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_getInterfaceVersion(_aidl_reply)
      }
    )
  }
  fn getInterfaceHash<'a>(&'a self) -> binder::BoxFuture<'a, binder::Result<String>> {
    {
      let _aidl_hash_lock = self.cached_hash.lock().unwrap();
      if let Some(ref _aidl_hash) = *_aidl_hash_lock {
        return Box::pin(std::future::ready(Ok(_aidl_hash.clone())));
      }
    }
    let _aidl_data = match self.build_parcel_getInterfaceHash() {
      Ok(_aidl_data) => _aidl_data,
      Err(err) => return Box::pin(std::future::ready(Err(err))),
    };
    let binder = self.binder.clone();
    P::spawn(
      move || binder.submit_transact(transactions::getInterfaceHash, _aidl_data, binder::binder_impl::FLAG_PRIVATE_LOCAL),
      move |_aidl_reply| async move {
        self.read_response_getInterfaceHash(_aidl_reply)
      }
    )
  }
}
impl IFooInterface for binder::binder_impl::Binder<BnFooInterface> {
  fn originalApi(&self) -> binder::Result<()> { self.0.originalApi() }
  fn acceptUnionAndReturnString(&self, _arg_u: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion) -> binder::Result<String> { self.0.acceptUnionAndReturnString(_arg_u) }
  fn ignoreParcelablesAndRepeatInt(&self, _arg_inFoo: &crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_inoutFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_outFoo: &mut crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo, _arg_value: i32) -> binder::Result<i32> { self.0.ignoreParcelablesAndRepeatInt(_arg_inFoo, _arg_inoutFoo, _arg_outFoo, _arg_value) }
  fn returnsLengthOfFooArray(&self, _arg_foos: &[crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo]) -> binder::Result<i32> { self.0.returnsLengthOfFooArray(_arg_foos) }
  fn getInterfaceVersion(&self) -> binder::Result<i32> { self.0.getInterfaceVersion() }
  fn getInterfaceHash(&self) -> binder::Result<String> { self.0.getInterfaceHash() }
}
fn on_transact(_aidl_service: &dyn IFooInterface, _aidl_code: binder::binder_impl::TransactionCode, _aidl_data: &binder::binder_impl::BorrowedParcel<'_>, _aidl_reply: &mut binder::binder_impl::BorrowedParcel<'_>) -> std::result::Result<(), binder::StatusCode> {
  match _aidl_code {
    transactions::originalApi => {
      let _aidl_return = _aidl_service.originalApi();
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    transactions::acceptUnionAndReturnString => {
      let _arg_u: crate::mangled::_7_android_4_aidl_9_versioned_5_tests_8_BazUnion = _aidl_data.read()?;
      let _aidl_return = _aidl_service.acceptUnionAndReturnString(&_arg_u);
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
          _aidl_reply.write(_aidl_return)?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    transactions::ignoreParcelablesAndRepeatInt => {
      let _arg_inFoo: crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo = _aidl_data.read()?;
      let mut _arg_inoutFoo: crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo = _aidl_data.read()?;
      let mut _arg_outFoo: crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo = Default::default();
      let _arg_value: i32 = _aidl_data.read()?;
      let _aidl_return = _aidl_service.ignoreParcelablesAndRepeatInt(&_arg_inFoo, &mut _arg_inoutFoo, &mut _arg_outFoo, _arg_value);
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
          _aidl_reply.write(_aidl_return)?;
          _aidl_reply.write(&_arg_inoutFoo)?;
          _aidl_reply.write(&_arg_outFoo)?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    transactions::returnsLengthOfFooArray => {
      let _arg_foos: Vec<crate::mangled::_7_android_4_aidl_9_versioned_5_tests_3_Foo> = _aidl_data.read()?;
      let _aidl_return = _aidl_service.returnsLengthOfFooArray(&_arg_foos);
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
          _aidl_reply.write(_aidl_return)?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    transactions::getInterfaceVersion => {
      let _aidl_return = _aidl_service.getInterfaceVersion();
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
          _aidl_reply.write(_aidl_return)?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    transactions::getInterfaceHash => {
      let _aidl_return = _aidl_service.getInterfaceHash();
      match &_aidl_return {
        Ok(_aidl_return) => {
          _aidl_reply.write(&binder::Status::from(binder::StatusCode::OK))?;
          _aidl_reply.write(_aidl_return)?;
        }
        Err(_aidl_status) => _aidl_reply.write(_aidl_status)?
      }
      Ok(())
    }
    _ => Err(binder::StatusCode::UNKNOWN_TRANSACTION)
  }
}
pub(crate) mod mangled {
 pub use super::IFooInterface as _7_android_4_aidl_9_versioned_5_tests_13_IFooInterface;
}
