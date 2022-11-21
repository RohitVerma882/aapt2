#pragma once

#include <android/aidl/tests/BackendType.h>
#include <android/aidl/tests/ByteEnum.h>
#include <android/aidl/tests/INamedCallback.h>
#include <android/aidl/tests/INewName.h>
#include <android/aidl/tests/IOldName.h>
#include <android/aidl/tests/ITestService.h>
#include <android/aidl/tests/IntEnum.h>
#include <android/aidl/tests/LongEnum.h>
#include <android/aidl/tests/RecursiveList.h>
#include <android/aidl/tests/StructuredParcelable.h>
#include <android/aidl/tests/Union.h>
#include <android/aidl/tests/extension/ExtendableParcelable.h>
#include <android/binder_to_string.h>
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
#include <vector>

namespace android {
namespace aidl {
namespace tests {
class ITestServiceDelegator;

class ITestService : public ::android::IInterface {
public:
  typedef ITestServiceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(TestService)
  class Empty : public ::android::Parcelable {
  public:
    inline bool operator!=(const Empty&) const {
      return std::tie() != std::tie();
    }
    inline bool operator<(const Empty&) const {
      return std::tie() < std::tie();
    }
    inline bool operator<=(const Empty&) const {
      return std::tie() <= std::tie();
    }
    inline bool operator==(const Empty&) const {
      return std::tie() == std::tie();
    }
    inline bool operator>(const Empty&) const {
      return std::tie() > std::tie();
    }
    inline bool operator>=(const Empty&) const {
      return std::tie() >= std::tie();
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.ITestService.Empty");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "Empty{";
      os << "}";
      return os.str();
    }
  };  // class Empty
  class CompilerChecks : public ::android::Parcelable {
  public:
    ::android::sp<::android::IBinder> binder;
    ::android::sp<::android::IBinder> nullable_binder;
    ::std::vector<::android::sp<::android::IBinder>> binder_array;
    ::std::optional<::std::vector<::android::sp<::android::IBinder>>> nullable_binder_array;
    ::std::vector<::android::sp<::android::IBinder>> binder_list;
    ::std::optional<::std::vector<::android::sp<::android::IBinder>>> nullable_binder_list;
    ::android::os::ParcelFileDescriptor pfd;
    ::std::optional<::android::os::ParcelFileDescriptor> nullable_pfd;
    ::std::vector<::android::os::ParcelFileDescriptor> pfd_array;
    ::std::optional<::std::vector<::std::optional<::android::os::ParcelFileDescriptor>>> nullable_pfd_array;
    ::std::vector<::android::os::ParcelFileDescriptor> pfd_list;
    ::std::optional<::std::vector<::std::optional<::android::os::ParcelFileDescriptor>>> nullable_pfd_list;
    ::android::aidl::tests::ITestService::Empty parcel;
    ::std::optional<::android::aidl::tests::ITestService::Empty> nullable_parcel;
    ::std::vector<::android::aidl::tests::ITestService::Empty> parcel_array;
    ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>> nullable_parcel_array;
    ::std::vector<::android::aidl::tests::ITestService::Empty> parcel_list;
    ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>> nullable_parcel_list;
    inline bool operator!=(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) != std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }
    inline bool operator<(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) < std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }
    inline bool operator<=(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) <= std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }
    inline bool operator==(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) == std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }
    inline bool operator>(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) > std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }
    inline bool operator>=(const CompilerChecks& rhs) const {
      return std::tie(binder, nullable_binder, binder_array, nullable_binder_array, binder_list, nullable_binder_list, pfd, nullable_pfd, pfd_array, nullable_pfd_array, pfd_list, nullable_pfd_list, parcel, nullable_parcel, parcel_array, nullable_parcel_array, parcel_list, nullable_parcel_list) >= std::tie(rhs.binder, rhs.nullable_binder, rhs.binder_array, rhs.nullable_binder_array, rhs.binder_list, rhs.nullable_binder_list, rhs.pfd, rhs.nullable_pfd, rhs.pfd_array, rhs.nullable_pfd_array, rhs.pfd_list, rhs.nullable_pfd_list, rhs.parcel, rhs.nullable_parcel, rhs.parcel_array, rhs.nullable_parcel_array, rhs.parcel_list, rhs.nullable_parcel_list);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.ITestService.CompilerChecks");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "CompilerChecks{";
      os << "binder: " << ::android::internal::ToString(binder);
      os << ", nullable_binder: " << ::android::internal::ToString(nullable_binder);
      os << ", binder_array: " << ::android::internal::ToString(binder_array);
      os << ", nullable_binder_array: " << ::android::internal::ToString(nullable_binder_array);
      os << ", binder_list: " << ::android::internal::ToString(binder_list);
      os << ", nullable_binder_list: " << ::android::internal::ToString(nullable_binder_list);
      os << ", pfd: " << ::android::internal::ToString(pfd);
      os << ", nullable_pfd: " << ::android::internal::ToString(nullable_pfd);
      os << ", pfd_array: " << ::android::internal::ToString(pfd_array);
      os << ", nullable_pfd_array: " << ::android::internal::ToString(nullable_pfd_array);
      os << ", pfd_list: " << ::android::internal::ToString(pfd_list);
      os << ", nullable_pfd_list: " << ::android::internal::ToString(nullable_pfd_list);
      os << ", parcel: " << ::android::internal::ToString(parcel);
      os << ", nullable_parcel: " << ::android::internal::ToString(nullable_parcel);
      os << ", parcel_array: " << ::android::internal::ToString(parcel_array);
      os << ", nullable_parcel_array: " << ::android::internal::ToString(nullable_parcel_array);
      os << ", parcel_list: " << ::android::internal::ToString(parcel_list);
      os << ", nullable_parcel_list: " << ::android::internal::ToString(nullable_parcel_list);
      os << "}";
      return os.str();
    }
  };  // class CompilerChecks
  enum : int32_t { TEST_CONSTANT = 42 };
  enum : int32_t { TEST_CONSTANT2 = -42 };
  enum : int32_t { TEST_CONSTANT3 = 42 };
  enum : int32_t { TEST_CONSTANT4 = 4 };
  enum : int32_t { TEST_CONSTANT5 = -4 };
  enum : int32_t { TEST_CONSTANT6 = 0 };
  enum : int32_t { TEST_CONSTANT7 = 0 };
  enum : int32_t { TEST_CONSTANT8 = 0 };
  enum : int32_t { TEST_CONSTANT9 = 86 };
  enum : int32_t { TEST_CONSTANT10 = 165 };
  enum : int32_t { TEST_CONSTANT11 = 250 };
  enum : int32_t { TEST_CONSTANT12 = -1 };
  enum : int8_t { BYTE_TEST_CONSTANT = 17 };
  enum : int64_t { LONG_TEST_CONSTANT = 1099511627776L };
  static const ::android::String16& STRING_TEST_CONSTANT();
  static const ::android::String16& STRING_TEST_CONSTANT2();
  static const ::std::string& STRING_TEST_CONSTANT_UTF8();
  enum : int32_t { A1 = 1 };
  enum : int32_t { A2 = 1 };
  enum : int32_t { A3 = 1 };
  enum : int32_t { A4 = 1 };
  enum : int32_t { A5 = 1 };
  enum : int32_t { A6 = 1 };
  enum : int32_t { A7 = 1 };
  enum : int32_t { A8 = 1 };
  enum : int32_t { A9 = 1 };
  enum : int32_t { A10 = 1 };
  enum : int32_t { A11 = 1 };
  enum : int32_t { A12 = 1 };
  enum : int32_t { A13 = 1 };
  enum : int32_t { A14 = 1 };
  enum : int32_t { A15 = 1 };
  enum : int32_t { A16 = 1 };
  enum : int32_t { A17 = 1 };
  enum : int32_t { A18 = 1 };
  enum : int32_t { A19 = 1 };
  enum : int32_t { A20 = 1 };
  enum : int32_t { A21 = 1 };
  enum : int32_t { A22 = 1 };
  enum : int32_t { A23 = 1 };
  enum : int32_t { A24 = 1 };
  enum : int32_t { A25 = 1 };
  enum : int32_t { A26 = 1 };
  enum : int32_t { A27 = 1 };
  enum : int32_t { A28 = 1 };
  enum : int32_t { A29 = 1 };
  enum : int32_t { A30 = 1 };
  enum : int32_t { A31 = 1 };
  enum : int32_t { A32 = 1 };
  enum : int32_t { A33 = 1 };
  enum : int32_t { A34 = 1 };
  enum : int32_t { A35 = 1 };
  enum : int32_t { A36 = 1 };
  enum : int32_t { A37 = 1 };
  enum : int32_t { A38 = 1 };
  enum : int32_t { A39 = 1 };
  enum : int32_t { A40 = 1 };
  enum : int32_t { A41 = 1 };
  enum : int32_t { A42 = 1 };
  enum : int32_t { A43 = 1 };
  enum : int32_t { A44 = 1 };
  enum : int32_t { A45 = 1 };
  enum : int32_t { A46 = 1 };
  enum : int32_t { A47 = 1 };
  enum : int32_t { A48 = 1 };
  enum : int32_t { A49 = 1 };
  enum : int32_t { A50 = 1 };
  enum : int32_t { A51 = 1 };
  enum : int32_t { A52 = 1 };
  enum : int32_t { A53 = 1 };
  enum : int32_t { A54 = 1 };
  enum : int32_t { A55 = 1 };
  enum : int32_t { A56 = 1 };
  enum : int32_t { A57 = 1 };
  virtual ::android::binder::Status UnimplementedMethod(int32_t arg, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status Deprecated() __attribute__((deprecated("to make sure we have something in system/tools/aidl which does a compile check of deprecated and make sure this is reflected in goldens"))) = 0;
  virtual ::android::binder::Status TestOneway() = 0;
  virtual ::android::binder::Status RepeatBoolean(bool token, bool* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatByte(int8_t token, int8_t* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatChar(char16_t token, char16_t* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatInt(int32_t token, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatLong(int64_t token, int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatFloat(float token, float* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatDouble(double token, double* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatString(const ::android::String16& token, ::android::String16* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatByteEnum(::android::aidl::tests::ByteEnum token, ::android::aidl::tests::ByteEnum* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatIntEnum(::android::aidl::tests::IntEnum token, ::android::aidl::tests::IntEnum* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatLongEnum(::android::aidl::tests::LongEnum token, ::android::aidl::tests::LongEnum* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseBoolean(const ::std::vector<bool>& input, ::std::vector<bool>* repeated, ::std::vector<bool>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseByte(const ::std::vector<uint8_t>& input, ::std::vector<uint8_t>* repeated, ::std::vector<uint8_t>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseChar(const ::std::vector<char16_t>& input, ::std::vector<char16_t>* repeated, ::std::vector<char16_t>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseInt(const ::std::vector<int32_t>& input, ::std::vector<int32_t>* repeated, ::std::vector<int32_t>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseLong(const ::std::vector<int64_t>& input, ::std::vector<int64_t>* repeated, ::std::vector<int64_t>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseFloat(const ::std::vector<float>& input, ::std::vector<float>* repeated, ::std::vector<float>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseDouble(const ::std::vector<double>& input, ::std::vector<double>* repeated, ::std::vector<double>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseString(const ::std::vector<::android::String16>& input, ::std::vector<::android::String16>* repeated, ::std::vector<::android::String16>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseByteEnum(const ::std::vector<::android::aidl::tests::ByteEnum>& input, ::std::vector<::android::aidl::tests::ByteEnum>* repeated, ::std::vector<::android::aidl::tests::ByteEnum>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseIntEnum(const ::std::vector<::android::aidl::tests::IntEnum>& input, ::std::vector<::android::aidl::tests::IntEnum>* repeated, ::std::vector<::android::aidl::tests::IntEnum>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseLongEnum(const ::std::vector<::android::aidl::tests::LongEnum>& input, ::std::vector<::android::aidl::tests::LongEnum>* repeated, ::std::vector<::android::aidl::tests::LongEnum>* _aidl_return) = 0;
  virtual ::android::binder::Status GetOtherTestService(const ::android::String16& name, ::android::sp<::android::aidl::tests::INamedCallback>* _aidl_return) = 0;
  virtual ::android::binder::Status VerifyName(const ::android::sp<::android::aidl::tests::INamedCallback>& service, const ::android::String16& name, bool* _aidl_return) = 0;
  virtual ::android::binder::Status GetInterfaceArray(const ::std::vector<::android::String16>& names, ::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>* _aidl_return) = 0;
  virtual ::android::binder::Status VerifyNamesWithInterfaceArray(const ::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>& services, const ::std::vector<::android::String16>& names, bool* _aidl_return) = 0;
  virtual ::android::binder::Status GetNullableInterfaceArray(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& names, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>* _aidl_return) = 0;
  virtual ::android::binder::Status VerifyNamesWithNullableInterfaceArray(const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>& services, const ::std::optional<::std::vector<::std::optional<::android::String16>>>& names, bool* _aidl_return) = 0;
  virtual ::android::binder::Status GetInterfaceList(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& names, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>* _aidl_return) = 0;
  virtual ::android::binder::Status VerifyNamesWithInterfaceList(const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>& services, const ::std::optional<::std::vector<::std::optional<::android::String16>>>& names, bool* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseStringList(const ::std::vector<::android::String16>& input, ::std::vector<::android::String16>* repeated, ::std::vector<::android::String16>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatParcelFileDescriptor(const ::android::os::ParcelFileDescriptor& read, ::android::os::ParcelFileDescriptor* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseParcelFileDescriptorArray(const ::std::vector<::android::os::ParcelFileDescriptor>& input, ::std::vector<::android::os::ParcelFileDescriptor>* repeated, ::std::vector<::android::os::ParcelFileDescriptor>* _aidl_return) = 0;
  virtual ::android::binder::Status ThrowServiceException(int32_t code) = 0;
  virtual ::android::binder::Status RepeatNullableIntArray(const ::std::optional<::std::vector<int32_t>>& input, ::std::optional<::std::vector<int32_t>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableByteEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::ByteEnum>>& input, ::std::optional<::std::vector<::android::aidl::tests::ByteEnum>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableIntEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::IntEnum>>& input, ::std::optional<::std::vector<::android::aidl::tests::IntEnum>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableLongEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::LongEnum>>& input, ::std::optional<::std::vector<::android::aidl::tests::LongEnum>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableString(const ::std::optional<::android::String16>& input, ::std::optional<::android::String16>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableStringList(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& input, ::std::optional<::std::vector<::std::optional<::android::String16>>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableParcelable(const ::std::optional<::android::aidl::tests::ITestService::Empty>& input, ::std::optional<::android::aidl::tests::ITestService::Empty>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableParcelableArray(const ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>& input, ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableParcelableList(const ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>& input, ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>* _aidl_return) = 0;
  virtual ::android::binder::Status TakesAnIBinder(const ::android::sp<::android::IBinder>& input) = 0;
  virtual ::android::binder::Status TakesANullableIBinder(const ::android::sp<::android::IBinder>& input) = 0;
  virtual ::android::binder::Status TakesAnIBinderList(const ::std::vector<::android::sp<::android::IBinder>>& input) = 0;
  virtual ::android::binder::Status TakesANullableIBinderList(const ::std::optional<::std::vector<::android::sp<::android::IBinder>>>& input) = 0;
  virtual ::android::binder::Status RepeatUtf8CppString(const ::std::string& token, ::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status RepeatNullableUtf8CppString(const ::std::optional<::std::string>& token, ::std::optional<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseUtf8CppString(const ::std::vector<::std::string>& input, ::std::vector<::std::string>* repeated, ::std::vector<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseNullableUtf8CppString(const ::std::optional<::std::vector<::std::optional<::std::string>>>& input, ::std::optional<::std::vector<::std::optional<::std::string>>>* repeated, ::std::optional<::std::vector<::std::optional<::std::string>>>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseUtf8CppStringList(const ::std::optional<::std::vector<::std::optional<::std::string>>>& input, ::std::optional<::std::vector<::std::optional<::std::string>>>* repeated, ::std::optional<::std::vector<::std::optional<::std::string>>>* _aidl_return) = 0;
  virtual ::android::binder::Status GetCallback(bool return_null, ::android::sp<::android::aidl::tests::INamedCallback>* _aidl_return) = 0;
  virtual ::android::binder::Status FillOutStructuredParcelable(::android::aidl::tests::StructuredParcelable* parcel) = 0;
  virtual ::android::binder::Status RepeatExtendableParcelable(const ::android::aidl::tests::extension::ExtendableParcelable& ep, ::android::aidl::tests::extension::ExtendableParcelable* ep2) = 0;
  virtual ::android::binder::Status ReverseList(const ::android::aidl::tests::RecursiveList& list, ::android::aidl::tests::RecursiveList* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseIBinderArray(const ::std::vector<::android::sp<::android::IBinder>>& input, ::std::vector<::android::sp<::android::IBinder>>* repeated, ::std::vector<::android::sp<::android::IBinder>>* _aidl_return) = 0;
  virtual ::android::binder::Status ReverseNullableIBinderArray(const ::std::optional<::std::vector<::android::sp<::android::IBinder>>>& input, ::std::optional<::std::vector<::android::sp<::android::IBinder>>>* repeated, ::std::optional<::std::vector<::android::sp<::android::IBinder>>>* _aidl_return) = 0;
  virtual ::android::binder::Status GetOldNameInterface(::android::sp<::android::aidl::tests::IOldName>* _aidl_return) = 0;
  virtual ::android::binder::Status GetNewNameInterface(::android::sp<::android::aidl::tests::INewName>* _aidl_return) = 0;
  virtual ::android::binder::Status GetUnionTags(const ::std::vector<::android::aidl::tests::Union>& input, ::std::vector<::android::aidl::tests::Union::Tag>* _aidl_return) = 0;
  virtual ::android::binder::Status GetCppJavaTests(::android::sp<::android::IBinder>* _aidl_return) = 0;
  virtual ::android::binder::Status getBackendType(::android::aidl::tests::BackendType* _aidl_return) = 0;
};  // class ITestService

class ITestServiceDefault : public ITestService {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status UnimplementedMethod(int32_t /*arg*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status Deprecated() override __attribute__((deprecated("to make sure we have something in system/tools/aidl which does a compile check of deprecated and make sure this is reflected in goldens"))) {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status TestOneway() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatBoolean(bool /*token*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatByte(int8_t /*token*/, int8_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatChar(char16_t /*token*/, char16_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatInt(int32_t /*token*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatLong(int64_t /*token*/, int64_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatFloat(float /*token*/, float* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatDouble(double /*token*/, double* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatString(const ::android::String16& /*token*/, ::android::String16* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatByteEnum(::android::aidl::tests::ByteEnum /*token*/, ::android::aidl::tests::ByteEnum* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatIntEnum(::android::aidl::tests::IntEnum /*token*/, ::android::aidl::tests::IntEnum* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatLongEnum(::android::aidl::tests::LongEnum /*token*/, ::android::aidl::tests::LongEnum* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseBoolean(const ::std::vector<bool>& /*input*/, ::std::vector<bool>* /*repeated*/, ::std::vector<bool>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseByte(const ::std::vector<uint8_t>& /*input*/, ::std::vector<uint8_t>* /*repeated*/, ::std::vector<uint8_t>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseChar(const ::std::vector<char16_t>& /*input*/, ::std::vector<char16_t>* /*repeated*/, ::std::vector<char16_t>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseInt(const ::std::vector<int32_t>& /*input*/, ::std::vector<int32_t>* /*repeated*/, ::std::vector<int32_t>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseLong(const ::std::vector<int64_t>& /*input*/, ::std::vector<int64_t>* /*repeated*/, ::std::vector<int64_t>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseFloat(const ::std::vector<float>& /*input*/, ::std::vector<float>* /*repeated*/, ::std::vector<float>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseDouble(const ::std::vector<double>& /*input*/, ::std::vector<double>* /*repeated*/, ::std::vector<double>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseString(const ::std::vector<::android::String16>& /*input*/, ::std::vector<::android::String16>* /*repeated*/, ::std::vector<::android::String16>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseByteEnum(const ::std::vector<::android::aidl::tests::ByteEnum>& /*input*/, ::std::vector<::android::aidl::tests::ByteEnum>* /*repeated*/, ::std::vector<::android::aidl::tests::ByteEnum>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseIntEnum(const ::std::vector<::android::aidl::tests::IntEnum>& /*input*/, ::std::vector<::android::aidl::tests::IntEnum>* /*repeated*/, ::std::vector<::android::aidl::tests::IntEnum>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseLongEnum(const ::std::vector<::android::aidl::tests::LongEnum>& /*input*/, ::std::vector<::android::aidl::tests::LongEnum>* /*repeated*/, ::std::vector<::android::aidl::tests::LongEnum>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetOtherTestService(const ::android::String16& /*name*/, ::android::sp<::android::aidl::tests::INamedCallback>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status VerifyName(const ::android::sp<::android::aidl::tests::INamedCallback>& /*service*/, const ::android::String16& /*name*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetInterfaceArray(const ::std::vector<::android::String16>& /*names*/, ::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status VerifyNamesWithInterfaceArray(const ::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>& /*services*/, const ::std::vector<::android::String16>& /*names*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetNullableInterfaceArray(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& /*names*/, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status VerifyNamesWithNullableInterfaceArray(const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>& /*services*/, const ::std::optional<::std::vector<::std::optional<::android::String16>>>& /*names*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetInterfaceList(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& /*names*/, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status VerifyNamesWithInterfaceList(const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::INamedCallback>>>& /*services*/, const ::std::optional<::std::vector<::std::optional<::android::String16>>>& /*names*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseStringList(const ::std::vector<::android::String16>& /*input*/, ::std::vector<::android::String16>* /*repeated*/, ::std::vector<::android::String16>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatParcelFileDescriptor(const ::android::os::ParcelFileDescriptor& /*read*/, ::android::os::ParcelFileDescriptor* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseParcelFileDescriptorArray(const ::std::vector<::android::os::ParcelFileDescriptor>& /*input*/, ::std::vector<::android::os::ParcelFileDescriptor>* /*repeated*/, ::std::vector<::android::os::ParcelFileDescriptor>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ThrowServiceException(int32_t /*code*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableIntArray(const ::std::optional<::std::vector<int32_t>>& /*input*/, ::std::optional<::std::vector<int32_t>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableByteEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::ByteEnum>>& /*input*/, ::std::optional<::std::vector<::android::aidl::tests::ByteEnum>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableIntEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::IntEnum>>& /*input*/, ::std::optional<::std::vector<::android::aidl::tests::IntEnum>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableLongEnumArray(const ::std::optional<::std::vector<::android::aidl::tests::LongEnum>>& /*input*/, ::std::optional<::std::vector<::android::aidl::tests::LongEnum>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableString(const ::std::optional<::android::String16>& /*input*/, ::std::optional<::android::String16>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableStringList(const ::std::optional<::std::vector<::std::optional<::android::String16>>>& /*input*/, ::std::optional<::std::vector<::std::optional<::android::String16>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableParcelable(const ::std::optional<::android::aidl::tests::ITestService::Empty>& /*input*/, ::std::optional<::android::aidl::tests::ITestService::Empty>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableParcelableArray(const ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>& /*input*/, ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableParcelableList(const ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>& /*input*/, ::std::optional<::std::vector<::std::optional<::android::aidl::tests::ITestService::Empty>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status TakesAnIBinder(const ::android::sp<::android::IBinder>& /*input*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status TakesANullableIBinder(const ::android::sp<::android::IBinder>& /*input*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status TakesAnIBinderList(const ::std::vector<::android::sp<::android::IBinder>>& /*input*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status TakesANullableIBinderList(const ::std::optional<::std::vector<::android::sp<::android::IBinder>>>& /*input*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatUtf8CppString(const ::std::string& /*token*/, ::std::string* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatNullableUtf8CppString(const ::std::optional<::std::string>& /*token*/, ::std::optional<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseUtf8CppString(const ::std::vector<::std::string>& /*input*/, ::std::vector<::std::string>* /*repeated*/, ::std::vector<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseNullableUtf8CppString(const ::std::optional<::std::vector<::std::optional<::std::string>>>& /*input*/, ::std::optional<::std::vector<::std::optional<::std::string>>>* /*repeated*/, ::std::optional<::std::vector<::std::optional<::std::string>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseUtf8CppStringList(const ::std::optional<::std::vector<::std::optional<::std::string>>>& /*input*/, ::std::optional<::std::vector<::std::optional<::std::string>>>* /*repeated*/, ::std::optional<::std::vector<::std::optional<::std::string>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetCallback(bool /*return_null*/, ::android::sp<::android::aidl::tests::INamedCallback>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status FillOutStructuredParcelable(::android::aidl::tests::StructuredParcelable* /*parcel*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status RepeatExtendableParcelable(const ::android::aidl::tests::extension::ExtendableParcelable& /*ep*/, ::android::aidl::tests::extension::ExtendableParcelable* /*ep2*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseList(const ::android::aidl::tests::RecursiveList& /*list*/, ::android::aidl::tests::RecursiveList* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseIBinderArray(const ::std::vector<::android::sp<::android::IBinder>>& /*input*/, ::std::vector<::android::sp<::android::IBinder>>* /*repeated*/, ::std::vector<::android::sp<::android::IBinder>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status ReverseNullableIBinderArray(const ::std::optional<::std::vector<::android::sp<::android::IBinder>>>& /*input*/, ::std::optional<::std::vector<::android::sp<::android::IBinder>>>* /*repeated*/, ::std::optional<::std::vector<::android::sp<::android::IBinder>>>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetOldNameInterface(::android::sp<::android::aidl::tests::IOldName>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetNewNameInterface(::android::sp<::android::aidl::tests::INewName>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetUnionTags(const ::std::vector<::android::aidl::tests::Union>& /*input*/, ::std::vector<::android::aidl::tests::Union::Tag>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status GetCppJavaTests(::android::sp<::android::IBinder>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getBackendType(::android::aidl::tests::BackendType* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class ITestServiceDefault
}  // namespace tests
}  // namespace aidl
}  // namespace android
