#pragma once

#include <binder/IInterface.h>
#include <android/aidl/loggable/ILoggableInterface.h>
#include <functional>
#include <android/binder_to_string.h>

namespace android {
namespace aidl {
namespace loggable {
class BnLoggableInterface : public ::android::BnInterface<ILoggableInterface> {
public:
  static constexpr uint32_t TRANSACTION_LogThis = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnLoggableInterface();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  struct TransactionLog {
    double duration_ms;
    std::string interface_name;
    std::string method_name;
    const void* proxy_address;
    const void* stub_address;
    std::vector<std::pair<std::string, std::string>> input_args;
    std::vector<std::pair<std::string, std::string>> output_args;
    std::string result;
    std::string exception_message;
    int32_t exception_code;
    int32_t transaction_error;
    int32_t service_specific_error_code;
  };
  static std::function<void(const TransactionLog&)> logFunc;
};  // class BnLoggableInterface

class ILoggableInterfaceDelegator : public BnLoggableInterface {
public:
  explicit ILoggableInterfaceDelegator(const ::android::sp<ILoggableInterface> &impl) : _aidl_delegate(impl) {}

  ::android::binder::Status LogThis(bool boolValue, ::std::vector<bool>* boolArray, int8_t byteValue, ::std::vector<uint8_t>* byteArray, char16_t charValue, ::std::vector<char16_t>* charArray, int32_t intValue, ::std::vector<int32_t>* intArray, int64_t longValue, ::std::vector<int64_t>* longArray, float floatValue, ::std::vector<float>* floatArray, double doubleValue, ::std::vector<double>* doubleArray, const ::android::String16& stringValue, ::std::vector<::android::String16>* stringArray, ::std::vector<::android::String16>* listValue, const ::android::aidl::loggable::Data& dataValue, const ::android::sp<::android::IBinder>& binderValue, ::std::optional<::android::os::ParcelFileDescriptor>* pfdValue, ::std::vector<::android::os::ParcelFileDescriptor>* pfdArray, ::std::vector<::android::String16>* _aidl_return) override {
    return _aidl_delegate->LogThis(boolValue, boolArray, byteValue, byteArray, charValue, charArray, intValue, intArray, longValue, longArray, floatValue, floatArray, doubleValue, doubleArray, stringValue, stringArray, listValue, dataValue, binderValue, pfdValue, pfdArray, _aidl_return);
  }
private:
  ::android::sp<ILoggableInterface> _aidl_delegate;
};  // class ILoggableInterfaceDelegator
}  // namespace loggable
}  // namespace aidl
}  // namespace android
