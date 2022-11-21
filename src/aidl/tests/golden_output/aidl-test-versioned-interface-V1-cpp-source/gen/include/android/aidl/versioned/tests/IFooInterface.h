#pragma once

#include <android/aidl/versioned/tests/BazUnion.h>
#include <android/aidl/versioned/tests/Foo.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {
namespace aidl {
namespace versioned {
namespace tests {
class IFooInterfaceDelegator;

class IFooInterface : public ::android::IInterface {
public:
  typedef IFooInterfaceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(FooInterface)
  const int32_t VERSION = 1;
  const std::string HASH = "9e7be1859820c59d9d55dd133e71a3687b5d2e5b";
  virtual ::android::binder::Status originalApi() = 0;
  virtual ::android::binder::Status acceptUnionAndReturnString(const ::android::aidl::versioned::tests::BazUnion& u, ::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status ignoreParcelablesAndRepeatInt(const ::android::aidl::versioned::tests::Foo& inFoo, ::android::aidl::versioned::tests::Foo* inoutFoo, ::android::aidl::versioned::tests::Foo* outFoo, int32_t value, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status returnsLengthOfFooArray(const ::std::vector<::android::aidl::versioned::tests::Foo>& foos, int32_t* _aidl_return) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IFooInterface

class IFooInterfaceDefault : public IFooInterface {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status originalApi() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status acceptUnionAndReturnString(const ::android::aidl::versioned::tests::BazUnion& /*u*/, ::std::string* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ignoreParcelablesAndRepeatInt(const ::android::aidl::versioned::tests::Foo& /*inFoo*/, ::android::aidl::versioned::tests::Foo* /*inoutFoo*/, ::android::aidl::versioned::tests::Foo* /*outFoo*/, int32_t /*value*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status returnsLengthOfFooArray(const ::std::vector<::android::aidl::versioned::tests::Foo>& /*foos*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IFooInterfaceDefault
}  // namespace tests
}  // namespace versioned
}  // namespace aidl
}  // namespace android
