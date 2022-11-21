#pragma once

#include <binder/IInterface.h>
#include <android/aidl/tests/IDeprecated.h>

namespace android {
namespace aidl {
namespace tests {
class __attribute__((deprecated("test"))) BnDeprecated : public ::android::BnInterface<IDeprecated> {
public:
  explicit BnDeprecated();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnDeprecated

class __attribute__((deprecated("test"))) IDeprecatedDelegator : public BnDeprecated {
public:
  explicit IDeprecatedDelegator(const ::android::sp<IDeprecated> &impl) : _aidl_delegate(impl) {}

private:
  ::android::sp<IDeprecated> _aidl_delegate;
};  // class IDeprecatedDelegator
}  // namespace tests
}  // namespace aidl
}  // namespace android
