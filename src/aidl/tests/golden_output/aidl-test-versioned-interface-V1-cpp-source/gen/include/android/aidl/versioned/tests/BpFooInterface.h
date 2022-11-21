#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/aidl/versioned/tests/IFooInterface.h>

namespace android {
namespace aidl {
namespace versioned {
namespace tests {
class BpFooInterface : public ::android::BpInterface<IFooInterface> {
public:
  explicit BpFooInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpFooInterface() = default;
  ::android::binder::Status originalApi() override;
  ::android::binder::Status acceptUnionAndReturnString(const ::android::aidl::versioned::tests::BazUnion& u, ::std::string* _aidl_return) override;
  ::android::binder::Status ignoreParcelablesAndRepeatInt(const ::android::aidl::versioned::tests::Foo& inFoo, ::android::aidl::versioned::tests::Foo* inoutFoo, ::android::aidl::versioned::tests::Foo* outFoo, int32_t value, int32_t* _aidl_return) override;
  ::android::binder::Status returnsLengthOfFooArray(const ::std::vector<::android::aidl::versioned::tests::Foo>& foos, int32_t* _aidl_return) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpFooInterface
}  // namespace tests
}  // namespace versioned
}  // namespace aidl
}  // namespace android
