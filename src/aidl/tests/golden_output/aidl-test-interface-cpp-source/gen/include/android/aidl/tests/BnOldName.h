#pragma once

#include <binder/IInterface.h>
#include <android/aidl/tests/IOldName.h>

namespace android {
namespace aidl {
namespace tests {
class BnOldName : public ::android::BnInterface<IOldName> {
public:
  static constexpr uint32_t TRANSACTION_RealName = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnOldName();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnOldName

class IOldNameDelegator : public BnOldName {
public:
  explicit IOldNameDelegator(const ::android::sp<IOldName> &impl) : _aidl_delegate(impl) {}

  ::android::binder::Status RealName(::android::String16* _aidl_return) override {
    return _aidl_delegate->RealName(_aidl_return);
  }
private:
  ::android::sp<IOldName> _aidl_delegate;
};  // class IOldNameDelegator
}  // namespace tests
}  // namespace aidl
}  // namespace android
