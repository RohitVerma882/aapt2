#pragma once

#include <android/aidl/fixedsizearray/FixedSizeArrayExample.h>
#include <android/binder_to_string.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/ParcelFileDescriptor.h>
#include <binder/Status.h>
#include <cstdint>
#include <optional>
#include <string>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android {
namespace aidl {
namespace fixedsizearray {
class FixedSizeArrayExample : public ::android::Parcelable {
public:
  class IntParcelable : public ::android::Parcelable {
  public:
    int32_t value = 0;
    inline bool operator!=(const IntParcelable& rhs) const {
      return std::tie(value) != std::tie(rhs.value);
    }
    inline bool operator<(const IntParcelable& rhs) const {
      return std::tie(value) < std::tie(rhs.value);
    }
    inline bool operator<=(const IntParcelable& rhs) const {
      return std::tie(value) <= std::tie(rhs.value);
    }
    inline bool operator==(const IntParcelable& rhs) const {
      return std::tie(value) == std::tie(rhs.value);
    }
    inline bool operator>(const IntParcelable& rhs) const {
      return std::tie(value) > std::tie(rhs.value);
    }
    inline bool operator>=(const IntParcelable& rhs) const {
      return std::tie(value) >= std::tie(rhs.value);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.fixedsizearray.FixedSizeArrayExample.IntParcelable");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "IntParcelable{";
      os << "value: " << ::android::internal::ToString(value);
      os << "}";
      return os.str();
    }
  };  // class IntParcelable
  class IRepeatFixedSizeArrayDelegator;

  class IRepeatFixedSizeArray : public ::android::IInterface {
  public:
    typedef IRepeatFixedSizeArrayDelegator DefaultDelegator;
    DECLARE_META_INTERFACE(RepeatFixedSizeArray)
    virtual ::android::binder::Status RepeatBytes(const std::array<uint8_t, 3>& input, std::array<uint8_t, 3>* repeated, std::array<uint8_t, 3>* _aidl_return) = 0;
    virtual ::android::binder::Status RepeatInts(const std::array<int32_t, 3>& input, std::array<int32_t, 3>* repeated, std::array<int32_t, 3>* _aidl_return) = 0;
    virtual ::android::binder::Status RepeatBinders(const std::array<::android::sp<::android::IBinder>, 3>& input, std::array<::android::sp<::android::IBinder>, 3>* repeated, std::array<::android::sp<::android::IBinder>, 3>* _aidl_return) = 0;
    virtual ::android::binder::Status RepeatParcelables(const std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& input, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* repeated, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) = 0;
    virtual ::android::binder::Status Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& input, std::array<std::array<uint8_t, 3>, 2>* repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) = 0;
    virtual ::android::binder::Status Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& input, std::array<std::array<int32_t, 3>, 2>* repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) = 0;
    virtual ::android::binder::Status Repeat2dBinders(const std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>& input, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* repeated, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* _aidl_return) = 0;
    virtual ::android::binder::Status Repeat2dParcelables(const std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& input, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* repeated, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) = 0;
  };  // class IRepeatFixedSizeArray

  class IRepeatFixedSizeArrayDefault : public IRepeatFixedSizeArray {
  public:
    ::android::IBinder* onAsBinder() override {
      return nullptr;
    }
    ::android::binder::Status RepeatBytes(const std::array<uint8_t, 3>& /*input*/, std::array<uint8_t, 3>* /*repeated*/, std::array<uint8_t, 3>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status RepeatInts(const std::array<int32_t, 3>& /*input*/, std::array<int32_t, 3>* /*repeated*/, std::array<int32_t, 3>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status RepeatBinders(const std::array<::android::sp<::android::IBinder>, 3>& /*input*/, std::array<::android::sp<::android::IBinder>, 3>* /*repeated*/, std::array<::android::sp<::android::IBinder>, 3>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status RepeatParcelables(const std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& /*input*/, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* /*repeated*/, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& /*input*/, std::array<std::array<uint8_t, 3>, 2>* /*repeated*/, std::array<std::array<uint8_t, 3>, 2>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& /*input*/, std::array<std::array<int32_t, 3>, 2>* /*repeated*/, std::array<std::array<int32_t, 3>, 2>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status Repeat2dBinders(const std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>& /*input*/, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* /*repeated*/, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
    ::android::binder::Status Repeat2dParcelables(const std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& /*input*/, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* /*repeated*/, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
  };  // class IRepeatFixedSizeArrayDefault
  class BpRepeatFixedSizeArray : public ::android::BpInterface<IRepeatFixedSizeArray> {
  public:
    explicit BpRepeatFixedSizeArray(const ::android::sp<::android::IBinder>& _aidl_impl);
    virtual ~BpRepeatFixedSizeArray() = default;
    ::android::binder::Status RepeatBytes(const std::array<uint8_t, 3>& input, std::array<uint8_t, 3>* repeated, std::array<uint8_t, 3>* _aidl_return) override;
    ::android::binder::Status RepeatInts(const std::array<int32_t, 3>& input, std::array<int32_t, 3>* repeated, std::array<int32_t, 3>* _aidl_return) override;
    ::android::binder::Status RepeatBinders(const std::array<::android::sp<::android::IBinder>, 3>& input, std::array<::android::sp<::android::IBinder>, 3>* repeated, std::array<::android::sp<::android::IBinder>, 3>* _aidl_return) override;
    ::android::binder::Status RepeatParcelables(const std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& input, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* repeated, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) override;
    ::android::binder::Status Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& input, std::array<std::array<uint8_t, 3>, 2>* repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) override;
    ::android::binder::Status Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& input, std::array<std::array<int32_t, 3>, 2>* repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) override;
    ::android::binder::Status Repeat2dBinders(const std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>& input, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* repeated, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* _aidl_return) override;
    ::android::binder::Status Repeat2dParcelables(const std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& input, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* repeated, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) override;
  };  // class BpRepeatFixedSizeArray
  class BnRepeatFixedSizeArray : public ::android::BnInterface<IRepeatFixedSizeArray> {
  public:
    static constexpr uint32_t TRANSACTION_RepeatBytes = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
    static constexpr uint32_t TRANSACTION_RepeatInts = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
    static constexpr uint32_t TRANSACTION_RepeatBinders = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
    static constexpr uint32_t TRANSACTION_RepeatParcelables = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
    static constexpr uint32_t TRANSACTION_Repeat2dBytes = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
    static constexpr uint32_t TRANSACTION_Repeat2dInts = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
    static constexpr uint32_t TRANSACTION_Repeat2dBinders = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
    static constexpr uint32_t TRANSACTION_Repeat2dParcelables = ::android::IBinder::FIRST_CALL_TRANSACTION + 7;
    explicit BnRepeatFixedSizeArray();
    ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  };  // class BnRepeatFixedSizeArray

  class IRepeatFixedSizeArrayDelegator : public BnRepeatFixedSizeArray {
  public:
    explicit IRepeatFixedSizeArrayDelegator(const ::android::sp<IRepeatFixedSizeArray> &impl) : _aidl_delegate(impl) {}

    ::android::binder::Status RepeatBytes(const std::array<uint8_t, 3>& input, std::array<uint8_t, 3>* repeated, std::array<uint8_t, 3>* _aidl_return) override {
      return _aidl_delegate->RepeatBytes(input, repeated, _aidl_return);
    }
    ::android::binder::Status RepeatInts(const std::array<int32_t, 3>& input, std::array<int32_t, 3>* repeated, std::array<int32_t, 3>* _aidl_return) override {
      return _aidl_delegate->RepeatInts(input, repeated, _aidl_return);
    }
    ::android::binder::Status RepeatBinders(const std::array<::android::sp<::android::IBinder>, 3>& input, std::array<::android::sp<::android::IBinder>, 3>* repeated, std::array<::android::sp<::android::IBinder>, 3>* _aidl_return) override {
      return _aidl_delegate->RepeatBinders(input, repeated, _aidl_return);
    }
    ::android::binder::Status RepeatParcelables(const std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& input, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* repeated, std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) override {
      return _aidl_delegate->RepeatParcelables(input, repeated, _aidl_return);
    }
    ::android::binder::Status Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& input, std::array<std::array<uint8_t, 3>, 2>* repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) override {
      return _aidl_delegate->Repeat2dBytes(input, repeated, _aidl_return);
    }
    ::android::binder::Status Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& input, std::array<std::array<int32_t, 3>, 2>* repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) override {
      return _aidl_delegate->Repeat2dInts(input, repeated, _aidl_return);
    }
    ::android::binder::Status Repeat2dBinders(const std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>& input, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* repeated, std::array<std::array<::android::sp<::android::IBinder>, 3>, 2>* _aidl_return) override {
      return _aidl_delegate->Repeat2dBinders(input, repeated, _aidl_return);
    }
    ::android::binder::Status Repeat2dParcelables(const std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& input, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* repeated, std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) override {
      return _aidl_delegate->Repeat2dParcelables(input, repeated, _aidl_return);
    }
  private:
    ::android::sp<IRepeatFixedSizeArray> _aidl_delegate;
  };  // class IRepeatFixedSizeArrayDelegator
  enum class ByteEnum : int8_t {
    A = 0,
  };
  enum class IntEnum : int32_t {
    A = 0,
  };
  enum class LongEnum : int64_t {
    A = 0L,
  };
  class IEmptyInterfaceDelegator;

  class IEmptyInterface : public ::android::IInterface {
  public:
    typedef IEmptyInterfaceDelegator DefaultDelegator;
    DECLARE_META_INTERFACE(EmptyInterface)
  };  // class IEmptyInterface

  class IEmptyInterfaceDefault : public IEmptyInterface {
  public:
    ::android::IBinder* onAsBinder() override {
      return nullptr;
    }
  };  // class IEmptyInterfaceDefault
  class BpEmptyInterface : public ::android::BpInterface<IEmptyInterface> {
  public:
    explicit BpEmptyInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
    virtual ~BpEmptyInterface() = default;
  };  // class BpEmptyInterface
  class BnEmptyInterface : public ::android::BnInterface<IEmptyInterface> {
  public:
    explicit BnEmptyInterface();
    ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  };  // class BnEmptyInterface

  class IEmptyInterfaceDelegator : public BnEmptyInterface {
  public:
    explicit IEmptyInterfaceDelegator(const ::android::sp<IEmptyInterface> &impl) : _aidl_delegate(impl) {}

  private:
    ::android::sp<IEmptyInterface> _aidl_delegate;
  };  // class IEmptyInterfaceDelegator
  std::array<std::array<int32_t, 3>, 2> int2x3 = {{{{1, 2, 3}}, {{4, 5, 6}}}};
  std::array<bool, 2> boolArray = {{}};
  std::array<uint8_t, 2> byteArray = {{}};
  std::array<char16_t, 2> charArray = {{}};
  std::array<int32_t, 2> intArray = {{}};
  std::array<int64_t, 2> longArray = {{}};
  std::array<float, 2> floatArray = {{}};
  std::array<double, 2> doubleArray = {{}};
  std::array<::std::string, 2> stringArray = {{"hello", "world"}};
  std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2> byteEnumArray = {{}};
  std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2> intEnumArray = {{}};
  std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2> longEnumArray = {{}};
  std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 2> parcelableArray = {{}};
  std::array<std::array<bool, 2>, 2> boolMatrix = {{}};
  std::array<std::array<uint8_t, 2>, 2> byteMatrix = {{}};
  std::array<std::array<char16_t, 2>, 2> charMatrix = {{}};
  std::array<std::array<int32_t, 2>, 2> intMatrix = {{}};
  std::array<std::array<int64_t, 2>, 2> longMatrix = {{}};
  std::array<std::array<float, 2>, 2> floatMatrix = {{}};
  std::array<std::array<double, 2>, 2> doubleMatrix = {{}};
  std::array<std::array<::std::string, 2>, 2> stringMatrix = {{{{"hello", "world"}}, {{"Ciao", "mondo"}}}};
  std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>, 2> byteEnumMatrix = {{}};
  std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>, 2> intEnumMatrix = {{}};
  std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>, 2> longEnumMatrix = {{}};
  std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 2>, 2> parcelableMatrix = {{}};
  ::std::optional<std::array<bool, 2>> boolNullableArray;
  ::std::optional<std::array<uint8_t, 2>> byteNullableArray;
  ::std::optional<std::array<char16_t, 2>> charNullableArray;
  ::std::optional<std::array<int32_t, 2>> intNullableArray;
  ::std::optional<std::array<int64_t, 2>> longNullableArray;
  ::std::optional<std::array<float, 2>> floatNullableArray;
  ::std::optional<std::array<double, 2>> doubleNullableArray;
  ::std::optional<std::array<::std::optional<::std::string>, 2>> stringNullableArray = {{{"hello", "world"}}};
  ::std::optional<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>> byteEnumNullableArray;
  ::std::optional<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>> intEnumNullableArray;
  ::std::optional<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>> longEnumNullableArray;
  ::std::optional<std::array<::android::sp<::android::IBinder>, 2>> binderNullableArray;
  ::std::optional<std::array<::std::optional<::android::os::ParcelFileDescriptor>, 2>> pfdNullableArray;
  ::std::optional<std::array<::std::optional<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable>, 2>> parcelableNullableArray;
  ::std::optional<std::array<::android::sp<::android::aidl::fixedsizearray::FixedSizeArrayExample::IEmptyInterface>, 2>> interfaceNullableArray;
  ::std::optional<std::array<std::array<bool, 2>, 2>> boolNullableMatrix;
  ::std::optional<std::array<std::array<uint8_t, 2>, 2>> byteNullableMatrix;
  ::std::optional<std::array<std::array<char16_t, 2>, 2>> charNullableMatrix;
  ::std::optional<std::array<std::array<int32_t, 2>, 2>> intNullableMatrix;
  ::std::optional<std::array<std::array<int64_t, 2>, 2>> longNullableMatrix;
  ::std::optional<std::array<std::array<float, 2>, 2>> floatNullableMatrix;
  ::std::optional<std::array<std::array<double, 2>, 2>> doubleNullableMatrix;
  ::std::optional<std::array<std::array<::std::optional<::std::string>, 2>, 2>> stringNullableMatrix = {{{{{"hello", "world"}}, {{"Ciao", "mondo"}}}}};
  ::std::optional<std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>, 2>> byteEnumNullableMatrix;
  ::std::optional<std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>, 2>> intEnumNullableMatrix;
  ::std::optional<std::array<std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>, 2>> longEnumNullableMatrix;
  ::std::optional<std::array<std::array<::android::sp<::android::IBinder>, 2>, 2>> binderNullableMatrix;
  ::std::optional<std::array<std::array<::std::optional<::android::os::ParcelFileDescriptor>, 2>, 2>> pfdNullableMatrix;
  ::std::optional<std::array<std::array<::std::optional<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable>, 2>, 2>> parcelableNullableMatrix;
  ::std::optional<std::array<std::array<::android::sp<::android::aidl::fixedsizearray::FixedSizeArrayExample::IEmptyInterface>, 2>, 2>> interfaceNullableMatrix;
  inline bool operator!=(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) != std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }
  inline bool operator<(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) < std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }
  inline bool operator<=(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) <= std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }
  inline bool operator==(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) == std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }
  inline bool operator>(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) > std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }
  inline bool operator>=(const FixedSizeArrayExample& rhs) const {
    return std::tie(int2x3, boolArray, byteArray, charArray, intArray, longArray, floatArray, doubleArray, stringArray, byteEnumArray, intEnumArray, longEnumArray, parcelableArray, boolMatrix, byteMatrix, charMatrix, intMatrix, longMatrix, floatMatrix, doubleMatrix, stringMatrix, byteEnumMatrix, intEnumMatrix, longEnumMatrix, parcelableMatrix, boolNullableArray, byteNullableArray, charNullableArray, intNullableArray, longNullableArray, floatNullableArray, doubleNullableArray, stringNullableArray, byteEnumNullableArray, intEnumNullableArray, longEnumNullableArray, binderNullableArray, pfdNullableArray, parcelableNullableArray, interfaceNullableArray, boolNullableMatrix, byteNullableMatrix, charNullableMatrix, intNullableMatrix, longNullableMatrix, floatNullableMatrix, doubleNullableMatrix, stringNullableMatrix, byteEnumNullableMatrix, intEnumNullableMatrix, longEnumNullableMatrix, binderNullableMatrix, pfdNullableMatrix, parcelableNullableMatrix, interfaceNullableMatrix) >= std::tie(rhs.int2x3, rhs.boolArray, rhs.byteArray, rhs.charArray, rhs.intArray, rhs.longArray, rhs.floatArray, rhs.doubleArray, rhs.stringArray, rhs.byteEnumArray, rhs.intEnumArray, rhs.longEnumArray, rhs.parcelableArray, rhs.boolMatrix, rhs.byteMatrix, rhs.charMatrix, rhs.intMatrix, rhs.longMatrix, rhs.floatMatrix, rhs.doubleMatrix, rhs.stringMatrix, rhs.byteEnumMatrix, rhs.intEnumMatrix, rhs.longEnumMatrix, rhs.parcelableMatrix, rhs.boolNullableArray, rhs.byteNullableArray, rhs.charNullableArray, rhs.intNullableArray, rhs.longNullableArray, rhs.floatNullableArray, rhs.doubleNullableArray, rhs.stringNullableArray, rhs.byteEnumNullableArray, rhs.intEnumNullableArray, rhs.longEnumNullableArray, rhs.binderNullableArray, rhs.pfdNullableArray, rhs.parcelableNullableArray, rhs.interfaceNullableArray, rhs.boolNullableMatrix, rhs.byteNullableMatrix, rhs.charNullableMatrix, rhs.intNullableMatrix, rhs.longNullableMatrix, rhs.floatNullableMatrix, rhs.doubleNullableMatrix, rhs.stringNullableMatrix, rhs.byteEnumNullableMatrix, rhs.intEnumNullableMatrix, rhs.longEnumNullableMatrix, rhs.binderNullableMatrix, rhs.pfdNullableMatrix, rhs.parcelableNullableMatrix, rhs.interfaceNullableMatrix);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.fixedsizearray.FixedSizeArrayExample");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "FixedSizeArrayExample{";
    os << "int2x3: " << ::android::internal::ToString(int2x3);
    os << ", boolArray: " << ::android::internal::ToString(boolArray);
    os << ", byteArray: " << ::android::internal::ToString(byteArray);
    os << ", charArray: " << ::android::internal::ToString(charArray);
    os << ", intArray: " << ::android::internal::ToString(intArray);
    os << ", longArray: " << ::android::internal::ToString(longArray);
    os << ", floatArray: " << ::android::internal::ToString(floatArray);
    os << ", doubleArray: " << ::android::internal::ToString(doubleArray);
    os << ", stringArray: " << ::android::internal::ToString(stringArray);
    os << ", byteEnumArray: " << ::android::internal::ToString(byteEnumArray);
    os << ", intEnumArray: " << ::android::internal::ToString(intEnumArray);
    os << ", longEnumArray: " << ::android::internal::ToString(longEnumArray);
    os << ", parcelableArray: " << ::android::internal::ToString(parcelableArray);
    os << ", boolMatrix: " << ::android::internal::ToString(boolMatrix);
    os << ", byteMatrix: " << ::android::internal::ToString(byteMatrix);
    os << ", charMatrix: " << ::android::internal::ToString(charMatrix);
    os << ", intMatrix: " << ::android::internal::ToString(intMatrix);
    os << ", longMatrix: " << ::android::internal::ToString(longMatrix);
    os << ", floatMatrix: " << ::android::internal::ToString(floatMatrix);
    os << ", doubleMatrix: " << ::android::internal::ToString(doubleMatrix);
    os << ", stringMatrix: " << ::android::internal::ToString(stringMatrix);
    os << ", byteEnumMatrix: " << ::android::internal::ToString(byteEnumMatrix);
    os << ", intEnumMatrix: " << ::android::internal::ToString(intEnumMatrix);
    os << ", longEnumMatrix: " << ::android::internal::ToString(longEnumMatrix);
    os << ", parcelableMatrix: " << ::android::internal::ToString(parcelableMatrix);
    os << ", boolNullableArray: " << ::android::internal::ToString(boolNullableArray);
    os << ", byteNullableArray: " << ::android::internal::ToString(byteNullableArray);
    os << ", charNullableArray: " << ::android::internal::ToString(charNullableArray);
    os << ", intNullableArray: " << ::android::internal::ToString(intNullableArray);
    os << ", longNullableArray: " << ::android::internal::ToString(longNullableArray);
    os << ", floatNullableArray: " << ::android::internal::ToString(floatNullableArray);
    os << ", doubleNullableArray: " << ::android::internal::ToString(doubleNullableArray);
    os << ", stringNullableArray: " << ::android::internal::ToString(stringNullableArray);
    os << ", byteEnumNullableArray: " << ::android::internal::ToString(byteEnumNullableArray);
    os << ", intEnumNullableArray: " << ::android::internal::ToString(intEnumNullableArray);
    os << ", longEnumNullableArray: " << ::android::internal::ToString(longEnumNullableArray);
    os << ", binderNullableArray: " << ::android::internal::ToString(binderNullableArray);
    os << ", pfdNullableArray: " << ::android::internal::ToString(pfdNullableArray);
    os << ", parcelableNullableArray: " << ::android::internal::ToString(parcelableNullableArray);
    os << ", interfaceNullableArray: " << ::android::internal::ToString(interfaceNullableArray);
    os << ", boolNullableMatrix: " << ::android::internal::ToString(boolNullableMatrix);
    os << ", byteNullableMatrix: " << ::android::internal::ToString(byteNullableMatrix);
    os << ", charNullableMatrix: " << ::android::internal::ToString(charNullableMatrix);
    os << ", intNullableMatrix: " << ::android::internal::ToString(intNullableMatrix);
    os << ", longNullableMatrix: " << ::android::internal::ToString(longNullableMatrix);
    os << ", floatNullableMatrix: " << ::android::internal::ToString(floatNullableMatrix);
    os << ", doubleNullableMatrix: " << ::android::internal::ToString(doubleNullableMatrix);
    os << ", stringNullableMatrix: " << ::android::internal::ToString(stringNullableMatrix);
    os << ", byteEnumNullableMatrix: " << ::android::internal::ToString(byteEnumNullableMatrix);
    os << ", intEnumNullableMatrix: " << ::android::internal::ToString(intEnumNullableMatrix);
    os << ", longEnumNullableMatrix: " << ::android::internal::ToString(longEnumNullableMatrix);
    os << ", binderNullableMatrix: " << ::android::internal::ToString(binderNullableMatrix);
    os << ", pfdNullableMatrix: " << ::android::internal::ToString(pfdNullableMatrix);
    os << ", parcelableNullableMatrix: " << ::android::internal::ToString(parcelableNullableMatrix);
    os << ", interfaceNullableMatrix: " << ::android::internal::ToString(interfaceNullableMatrix);
    os << "}";
    return os.str();
  }
};  // class FixedSizeArrayExample
}  // namespace fixedsizearray
}  // namespace aidl
}  // namespace android
namespace android {
namespace aidl {
namespace fixedsizearray {
[[nodiscard]] static inline std::string toString(FixedSizeArrayExample::ByteEnum val) {
  switch(val) {
  case FixedSizeArrayExample::ByteEnum::A:
    return "A";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace fixedsizearray
}  // namespace aidl
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 1> enum_values<::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum> = {
  ::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace aidl {
namespace fixedsizearray {
[[nodiscard]] static inline std::string toString(FixedSizeArrayExample::IntEnum val) {
  switch(val) {
  case FixedSizeArrayExample::IntEnum::A:
    return "A";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace fixedsizearray
}  // namespace aidl
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 1> enum_values<::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum> = {
  ::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace aidl {
namespace fixedsizearray {
[[nodiscard]] static inline std::string toString(FixedSizeArrayExample::LongEnum val) {
  switch(val) {
  case FixedSizeArrayExample::LongEnum::A:
    return "A";
  default:
    return std::to_string(static_cast<int64_t>(val));
  }
}
}  // namespace fixedsizearray
}  // namespace aidl
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 1> enum_values<::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum> = {
  ::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
