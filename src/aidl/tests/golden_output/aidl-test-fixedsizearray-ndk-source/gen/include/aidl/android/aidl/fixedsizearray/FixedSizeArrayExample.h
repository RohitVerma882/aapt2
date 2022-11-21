#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#include <android/binder_ibinder.h>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/aidl/fixedsizearray/FixedSizeArrayExample.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace aidl {
namespace fixedsizearray {
class FixedSizeArrayExample {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class IntParcelable {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    int32_t value = 0;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

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

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
    inline std::string toString() const {
      std::ostringstream os;
      os << "IntParcelable{";
      os << "value: " << ::android::internal::ToString(value);
      os << "}";
      return os.str();
    }
  };
  class IRepeatFixedSizeArrayDelegator;

  class IRepeatFixedSizeArray : public ::ndk::ICInterface {
  public:
    typedef IRepeatFixedSizeArrayDelegator DefaultDelegator;
    static const char* descriptor;
    IRepeatFixedSizeArray();
    virtual ~IRepeatFixedSizeArray();

    static constexpr uint32_t TRANSACTION_RepeatBytes = FIRST_CALL_TRANSACTION + 0;
    static constexpr uint32_t TRANSACTION_RepeatInts = FIRST_CALL_TRANSACTION + 1;
    static constexpr uint32_t TRANSACTION_RepeatBinders = FIRST_CALL_TRANSACTION + 2;
    static constexpr uint32_t TRANSACTION_RepeatParcelables = FIRST_CALL_TRANSACTION + 3;
    static constexpr uint32_t TRANSACTION_Repeat2dBytes = FIRST_CALL_TRANSACTION + 4;
    static constexpr uint32_t TRANSACTION_Repeat2dInts = FIRST_CALL_TRANSACTION + 5;
    static constexpr uint32_t TRANSACTION_Repeat2dBinders = FIRST_CALL_TRANSACTION + 6;
    static constexpr uint32_t TRANSACTION_Repeat2dParcelables = FIRST_CALL_TRANSACTION + 7;

    static std::shared_ptr<IRepeatFixedSizeArray> fromBinder(const ::ndk::SpAIBinder& binder);
    static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IRepeatFixedSizeArray>& instance);
    static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IRepeatFixedSizeArray>* instance);
    static bool setDefaultImpl(const std::shared_ptr<IRepeatFixedSizeArray>& impl);
    static const std::shared_ptr<IRepeatFixedSizeArray>& getDefaultImpl();
    virtual ::ndk::ScopedAStatus RepeatBytes(const std::array<uint8_t, 3>& in_input, std::array<uint8_t, 3>* out_repeated, std::array<uint8_t, 3>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus RepeatInts(const std::array<int32_t, 3>& in_input, std::array<int32_t, 3>* out_repeated, std::array<int32_t, 3>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus RepeatBinders(const std::array<::ndk::SpAIBinder, 3>& in_input, std::array<::ndk::SpAIBinder, 3>* out_repeated, std::array<::ndk::SpAIBinder, 3>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus RepeatParcelables(const std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& in_input, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* out_repeated, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& in_input, std::array<std::array<uint8_t, 3>, 2>* out_repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& in_input, std::array<std::array<int32_t, 3>, 2>* out_repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus Repeat2dBinders(const std::array<std::array<::ndk::SpAIBinder, 3>, 2>& in_input, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* out_repeated, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* _aidl_return) = 0;
    virtual ::ndk::ScopedAStatus Repeat2dParcelables(const std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& in_input, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* out_repeated, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) = 0;
  private:
    static std::shared_ptr<IRepeatFixedSizeArray> default_impl;
  };
  class IRepeatFixedSizeArrayDefault : public IRepeatFixedSizeArray {
  public:
    ::ndk::ScopedAStatus RepeatBytes(const std::array<uint8_t, 3>& in_input, std::array<uint8_t, 3>* out_repeated, std::array<uint8_t, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatInts(const std::array<int32_t, 3>& in_input, std::array<int32_t, 3>* out_repeated, std::array<int32_t, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatBinders(const std::array<::ndk::SpAIBinder, 3>& in_input, std::array<::ndk::SpAIBinder, 3>* out_repeated, std::array<::ndk::SpAIBinder, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatParcelables(const std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& in_input, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* out_repeated, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& in_input, std::array<std::array<uint8_t, 3>, 2>* out_repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& in_input, std::array<std::array<int32_t, 3>, 2>* out_repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dBinders(const std::array<std::array<::ndk::SpAIBinder, 3>, 2>& in_input, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* out_repeated, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dParcelables(const std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& in_input, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* out_repeated, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) override;
    ::ndk::SpAIBinder asBinder() override;
    bool isRemote() override;
  };
  class BpRepeatFixedSizeArray : public ::ndk::BpCInterface<IRepeatFixedSizeArray> {
  public:
    explicit BpRepeatFixedSizeArray(const ::ndk::SpAIBinder& binder);
    virtual ~BpRepeatFixedSizeArray();

    ::ndk::ScopedAStatus RepeatBytes(const std::array<uint8_t, 3>& in_input, std::array<uint8_t, 3>* out_repeated, std::array<uint8_t, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatInts(const std::array<int32_t, 3>& in_input, std::array<int32_t, 3>* out_repeated, std::array<int32_t, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatBinders(const std::array<::ndk::SpAIBinder, 3>& in_input, std::array<::ndk::SpAIBinder, 3>* out_repeated, std::array<::ndk::SpAIBinder, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus RepeatParcelables(const std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>& in_input, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* out_repeated, std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dBytes(const std::array<std::array<uint8_t, 3>, 2>& in_input, std::array<std::array<uint8_t, 3>, 2>* out_repeated, std::array<std::array<uint8_t, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dInts(const std::array<std::array<int32_t, 3>, 2>& in_input, std::array<std::array<int32_t, 3>, 2>* out_repeated, std::array<std::array<int32_t, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dBinders(const std::array<std::array<::ndk::SpAIBinder, 3>, 2>& in_input, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* out_repeated, std::array<std::array<::ndk::SpAIBinder, 3>, 2>* _aidl_return) override;
    ::ndk::ScopedAStatus Repeat2dParcelables(const std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>& in_input, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* out_repeated, std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 3>, 2>* _aidl_return) override;
  };
  class BnRepeatFixedSizeArray : public ::ndk::BnCInterface<IRepeatFixedSizeArray> {
  public:
    BnRepeatFixedSizeArray();
    virtual ~BnRepeatFixedSizeArray();
  protected:
    ::ndk::SpAIBinder createBinder() override;
  private:
  };
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

  class IEmptyInterface : public ::ndk::ICInterface {
  public:
    typedef IEmptyInterfaceDelegator DefaultDelegator;
    static const char* descriptor;
    IEmptyInterface();
    virtual ~IEmptyInterface();


    static std::shared_ptr<IEmptyInterface> fromBinder(const ::ndk::SpAIBinder& binder);
    static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IEmptyInterface>& instance);
    static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IEmptyInterface>* instance);
    static bool setDefaultImpl(const std::shared_ptr<IEmptyInterface>& impl);
    static const std::shared_ptr<IEmptyInterface>& getDefaultImpl();
  private:
    static std::shared_ptr<IEmptyInterface> default_impl;
  };
  class IEmptyInterfaceDefault : public IEmptyInterface {
  public:
    ::ndk::SpAIBinder asBinder() override;
    bool isRemote() override;
  };
  class BpEmptyInterface : public ::ndk::BpCInterface<IEmptyInterface> {
  public:
    explicit BpEmptyInterface(const ::ndk::SpAIBinder& binder);
    virtual ~BpEmptyInterface();

  };
  class BnEmptyInterface : public ::ndk::BnCInterface<IEmptyInterface> {
  public:
    BnEmptyInterface();
    virtual ~BnEmptyInterface();
  protected:
    ::ndk::SpAIBinder createBinder() override;
  private:
  };
  std::array<std::array<int32_t, 3>, 2> int2x3 = {{{{1, 2, 3}}, {{4, 5, 6}}}};
  std::array<bool, 2> boolArray = {{}};
  std::array<uint8_t, 2> byteArray = {{}};
  std::array<char16_t, 2> charArray = {{}};
  std::array<int32_t, 2> intArray = {{}};
  std::array<int64_t, 2> longArray = {{}};
  std::array<float, 2> floatArray = {{}};
  std::array<double, 2> doubleArray = {{}};
  std::array<std::string, 2> stringArray = {{"hello", "world"}};
  std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2> byteEnumArray = {{}};
  std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2> intEnumArray = {{}};
  std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2> longEnumArray = {{}};
  std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 2> parcelableArray = {{}};
  std::array<std::array<bool, 2>, 2> boolMatrix = {{}};
  std::array<std::array<uint8_t, 2>, 2> byteMatrix = {{}};
  std::array<std::array<char16_t, 2>, 2> charMatrix = {{}};
  std::array<std::array<int32_t, 2>, 2> intMatrix = {{}};
  std::array<std::array<int64_t, 2>, 2> longMatrix = {{}};
  std::array<std::array<float, 2>, 2> floatMatrix = {{}};
  std::array<std::array<double, 2>, 2> doubleMatrix = {{}};
  std::array<std::array<std::string, 2>, 2> stringMatrix = {{{{"hello", "world"}}, {{"Ciao", "mondo"}}}};
  std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>, 2> byteEnumMatrix = {{}};
  std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>, 2> intEnumMatrix = {{}};
  std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>, 2> longEnumMatrix = {{}};
  std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable, 2>, 2> parcelableMatrix = {{}};
  std::optional<std::array<bool, 2>> boolNullableArray;
  std::optional<std::array<uint8_t, 2>> byteNullableArray;
  std::optional<std::array<char16_t, 2>> charNullableArray;
  std::optional<std::array<int32_t, 2>> intNullableArray;
  std::optional<std::array<int64_t, 2>> longNullableArray;
  std::optional<std::array<float, 2>> floatNullableArray;
  std::optional<std::array<double, 2>> doubleNullableArray;
  std::optional<std::array<std::optional<std::string>, 2>> stringNullableArray = {{{"hello", "world"}}};
  std::optional<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>> byteEnumNullableArray;
  std::optional<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>> intEnumNullableArray;
  std::optional<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>> longEnumNullableArray;
  std::optional<std::array<::ndk::SpAIBinder, 2>> binderNullableArray;
  std::optional<std::array<::ndk::ScopedFileDescriptor, 2>> pfdNullableArray;
  std::optional<std::array<std::optional<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable>, 2>> parcelableNullableArray;
  std::optional<std::array<std::shared_ptr<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IEmptyInterface>, 2>> interfaceNullableArray;
  std::optional<std::array<std::array<bool, 2>, 2>> boolNullableMatrix;
  std::optional<std::array<std::array<uint8_t, 2>, 2>> byteNullableMatrix;
  std::optional<std::array<std::array<char16_t, 2>, 2>> charNullableMatrix;
  std::optional<std::array<std::array<int32_t, 2>, 2>> intNullableMatrix;
  std::optional<std::array<std::array<int64_t, 2>, 2>> longNullableMatrix;
  std::optional<std::array<std::array<float, 2>, 2>> floatNullableMatrix;
  std::optional<std::array<std::array<double, 2>, 2>> doubleNullableMatrix;
  std::optional<std::array<std::array<std::optional<std::string>, 2>, 2>> stringNullableMatrix = {{{{{"hello", "world"}}, {{"Ciao", "mondo"}}}}};
  std::optional<std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 2>, 2>> byteEnumNullableMatrix;
  std::optional<std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 2>, 2>> intEnumNullableMatrix;
  std::optional<std::array<std::array<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 2>, 2>> longEnumNullableMatrix;
  std::optional<std::array<std::array<::ndk::SpAIBinder, 2>, 2>> binderNullableMatrix;
  std::optional<std::array<std::array<::ndk::ScopedFileDescriptor, 2>, 2>> pfdNullableMatrix;
  std::optional<std::array<std::array<std::optional<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntParcelable>, 2>, 2>> parcelableNullableMatrix;
  std::optional<std::array<std::array<std::shared_ptr<::aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IEmptyInterface>, 2>, 2>> interfaceNullableMatrix;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

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

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
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
};
}  // namespace fixedsizearray
}  // namespace aidl
}  // namespace android
}  // namespace aidl
namespace aidl {
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
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum, 1> enum_values<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum> = {
  aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::ByteEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
namespace aidl {
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
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum, 1> enum_values<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum> = {
  aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::IntEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
namespace aidl {
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
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum, 1> enum_values<aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum> = {
  aidl::android::aidl::fixedsizearray::FixedSizeArrayExample::LongEnum::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
