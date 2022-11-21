#pragma once

#include <binder/IInterface.h>
#include <android/aidl/tests/INewName.h>

namespace android {
namespace aidl {
namespace tests {
class BnNewName : public ::android::BnInterface<INewName> {
public:
  static constexpr uint32_t TRANSACTION_RealName = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnNewName();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnNewName

class INewNameDelegator : public BnNewName {
public:
  explicit INewNameDelegator(const ::android::sp<INewName> &impl) : _aidl_delegate(impl) {}

  ::android::binder::Status RealName(::android::String16* _aidl_return) override {
    return _aidl_delegate->RealName(_aidl_return);
  }
private:
  ::android::sp<INewName> _aidl_delegate;
};  // class INewNameDelegator
}  // namespace tests
}  // namespace aidl
}  // namespace android
