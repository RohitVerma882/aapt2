#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/aidl/tests/nested/INestedService.h>

namespace android {
namespace aidl {
namespace tests {
namespace nested {
class BpNestedService : public ::android::BpInterface<INestedService> {
public:
  explicit BpNestedService(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpNestedService() = default;
  ::android::binder::Status flipStatus(const ::android::aidl::tests::nested::ParcelableWithNested& p, ::android::aidl::tests::nested::INestedService::Result* _aidl_return) override;
  ::android::binder::Status flipStatusWithCallback(::android::aidl::tests::nested::ParcelableWithNested::Status status, const ::android::sp<::android::aidl::tests::nested::INestedService::ICallback>& cb) override;
};  // class BpNestedService
}  // namespace nested
}  // namespace tests
}  // namespace aidl
}  // namespace android
