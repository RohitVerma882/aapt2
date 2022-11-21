#pragma once

#include <android/aidl/tests/nested/INestedService.h>
#include <android/aidl/tests/nested/ParcelableWithNested.h>
#include <android/binder_to_string.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android {
namespace aidl {
namespace tests {
namespace nested {
class INestedServiceDelegator;

class INestedService : public ::android::IInterface {
public:
  typedef INestedServiceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(NestedService)
  class Result : public ::android::Parcelable {
  public:
    ::android::aidl::tests::nested::ParcelableWithNested::Status status = ::android::aidl::tests::nested::ParcelableWithNested::Status::OK;
    inline bool operator!=(const Result& rhs) const {
      return std::tie(status) != std::tie(rhs.status);
    }
    inline bool operator<(const Result& rhs) const {
      return std::tie(status) < std::tie(rhs.status);
    }
    inline bool operator<=(const Result& rhs) const {
      return std::tie(status) <= std::tie(rhs.status);
    }
    inline bool operator==(const Result& rhs) const {
      return std::tie(status) == std::tie(rhs.status);
    }
    inline bool operator>(const Result& rhs) const {
      return std::tie(status) > std::tie(rhs.status);
    }
    inline bool operator>=(const Result& rhs) const {
      return std::tie(status) >= std::tie(rhs.status);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.nested.INestedService.Result");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "Result{";
      os << "status: " << ::android::internal::ToString(status);
      os << "}";
      return os.str();
    }
  };  // class Result
  class ICallbackDelegator;

  class ICallback : public ::android::IInterface {
  public:
    typedef ICallbackDelegator DefaultDelegator;
    DECLARE_META_INTERFACE(Callback)
    virtual ::android::binder::Status done(::android::aidl::tests::nested::ParcelableWithNested::Status status) = 0;
  };  // class ICallback

  class ICallbackDefault : public ICallback {
  public:
    ::android::IBinder* onAsBinder() override {
      return nullptr;
    }
    ::android::binder::Status done(::android::aidl::tests::nested::ParcelableWithNested::Status /*status*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
  };  // class ICallbackDefault
  class BpCallback : public ::android::BpInterface<ICallback> {
  public:
    explicit BpCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
    virtual ~BpCallback() = default;
    ::android::binder::Status done(::android::aidl::tests::nested::ParcelableWithNested::Status status) override;
  };  // class BpCallback
  class BnCallback : public ::android::BnInterface<ICallback> {
  public:
    static constexpr uint32_t TRANSACTION_done = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
    explicit BnCallback();
    ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  };  // class BnCallback

  class ICallbackDelegator : public BnCallback {
  public:
    explicit ICallbackDelegator(const ::android::sp<ICallback> &impl) : _aidl_delegate(impl) {}

    ::android::binder::Status done(::android::aidl::tests::nested::ParcelableWithNested::Status status) override {
      return _aidl_delegate->done(status);
    }
  private:
    ::android::sp<ICallback> _aidl_delegate;
  };  // class ICallbackDelegator
  virtual ::android::binder::Status flipStatus(const ::android::aidl::tests::nested::ParcelableWithNested& p, ::android::aidl::tests::nested::INestedService::Result* _aidl_return) = 0;
  virtual ::android::binder::Status flipStatusWithCallback(::android::aidl::tests::nested::ParcelableWithNested::Status status, const ::android::sp<::android::aidl::tests::nested::INestedService::ICallback>& cb) = 0;
};  // class INestedService

class INestedServiceDefault : public INestedService {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status flipStatus(const ::android::aidl::tests::nested::ParcelableWithNested& /*p*/, ::android::aidl::tests::nested::INestedService::Result* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status flipStatusWithCallback(::android::aidl::tests::nested::ParcelableWithNested::Status /*status*/, const ::android::sp<::android::aidl::tests::nested::INestedService::ICallback>& /*cb*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class INestedServiceDefault
}  // namespace nested
}  // namespace tests
}  // namespace aidl
}  // namespace android
