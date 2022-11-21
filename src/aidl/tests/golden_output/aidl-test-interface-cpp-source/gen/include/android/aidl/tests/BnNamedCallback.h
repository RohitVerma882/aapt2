#pragma once

#include <binder/IInterface.h>
#include <android/aidl/tests/INamedCallback.h>

namespace android {
namespace aidl {
namespace tests {
class BnNamedCallback : public ::android::BnInterface<INamedCallback> {
public:
  static constexpr uint32_t TRANSACTION_GetName = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnNamedCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnNamedCallback

class INamedCallbackDelegator : public BnNamedCallback {
public:
  explicit INamedCallbackDelegator(const ::android::sp<INamedCallback> &impl) : _aidl_delegate(impl) {}

  ::android::binder::Status GetName(::android::String16* _aidl_return) override {
    return _aidl_delegate->GetName(_aidl_return);
  }
private:
  ::android::sp<INamedCallback> _aidl_delegate;
};  // class INamedCallbackDelegator
}  // namespace tests
}  // namespace aidl
}  // namespace android
