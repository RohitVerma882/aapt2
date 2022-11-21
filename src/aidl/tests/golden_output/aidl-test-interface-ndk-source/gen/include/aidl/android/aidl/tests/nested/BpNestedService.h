#pragma once

#include "aidl/android/aidl/tests/nested/INestedService.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
namespace nested {
class BpNestedService : public ::ndk::BpCInterface<INestedService> {
public:
  explicit BpNestedService(const ::ndk::SpAIBinder& binder);
  virtual ~BpNestedService();

  ::ndk::ScopedAStatus flipStatus(const ::aidl::android::aidl::tests::nested::ParcelableWithNested& in_p, ::aidl::android::aidl::tests::nested::INestedService::Result* _aidl_return) override;
  ::ndk::ScopedAStatus flipStatusWithCallback(::aidl::android::aidl::tests::nested::ParcelableWithNested::Status in_status, const std::shared_ptr<::aidl::android::aidl::tests::nested::INestedService::ICallback>& in_cb) override;
};
}  // namespace nested
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
