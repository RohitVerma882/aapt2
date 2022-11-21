#pragma once

#include "aidl/android/aidl/versioned/tests/IFooInterface.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace aidl {
namespace versioned {
namespace tests {
class BpFooInterface : public ::ndk::BpCInterface<IFooInterface> {
public:
  explicit BpFooInterface(const ::ndk::SpAIBinder& binder);
  virtual ~BpFooInterface();

  ::ndk::ScopedAStatus originalApi() override;
  ::ndk::ScopedAStatus acceptUnionAndReturnString(const ::aidl::android::aidl::versioned::tests::BazUnion& in_u, std::string* _aidl_return) override;
  ::ndk::ScopedAStatus ignoreParcelablesAndRepeatInt(const ::aidl::android::aidl::versioned::tests::Foo& in_inFoo, ::aidl::android::aidl::versioned::tests::Foo* in_inoutFoo, ::aidl::android::aidl::versioned::tests::Foo* out_outFoo, int32_t in_value, int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus returnsLengthOfFooArray(const std::vector<::aidl::android::aidl::versioned::tests::Foo>& in_foos, int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace tests
}  // namespace versioned
}  // namespace aidl
}  // namespace android
}  // namespace aidl
