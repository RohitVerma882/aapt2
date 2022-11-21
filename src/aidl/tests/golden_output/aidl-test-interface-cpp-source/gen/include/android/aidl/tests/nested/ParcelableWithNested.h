#pragma once

#include <android/aidl/tests/nested/ParcelableWithNested.h>
#include <android/binder_to_string.h>
#include <array>
#include <binder/Enums.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace aidl {
namespace tests {
namespace nested {
class ParcelableWithNested : public ::android::Parcelable {
public:
  enum class Status : int8_t {
    OK = 0,
    NOT_OK = 1,
  };
  ::android::aidl::tests::nested::ParcelableWithNested::Status status = ::android::aidl::tests::nested::ParcelableWithNested::Status::OK;
  inline bool operator!=(const ParcelableWithNested& rhs) const {
    return std::tie(status) != std::tie(rhs.status);
  }
  inline bool operator<(const ParcelableWithNested& rhs) const {
    return std::tie(status) < std::tie(rhs.status);
  }
  inline bool operator<=(const ParcelableWithNested& rhs) const {
    return std::tie(status) <= std::tie(rhs.status);
  }
  inline bool operator==(const ParcelableWithNested& rhs) const {
    return std::tie(status) == std::tie(rhs.status);
  }
  inline bool operator>(const ParcelableWithNested& rhs) const {
    return std::tie(status) > std::tie(rhs.status);
  }
  inline bool operator>=(const ParcelableWithNested& rhs) const {
    return std::tie(status) >= std::tie(rhs.status);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.nested.ParcelableWithNested");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "ParcelableWithNested{";
    os << "status: " << ::android::internal::ToString(status);
    os << "}";
    return os.str();
  }
};  // class ParcelableWithNested
}  // namespace nested
}  // namespace tests
}  // namespace aidl
}  // namespace android
namespace android {
namespace aidl {
namespace tests {
namespace nested {
[[nodiscard]] static inline std::string toString(ParcelableWithNested::Status val) {
  switch(val) {
  case ParcelableWithNested::Status::OK:
    return "OK";
  case ParcelableWithNested::Status::NOT_OK:
    return "NOT_OK";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace nested
}  // namespace tests
}  // namespace aidl
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::aidl::tests::nested::ParcelableWithNested::Status, 2> enum_values<::android::aidl::tests::nested::ParcelableWithNested::Status> = {
  ::android::aidl::tests::nested::ParcelableWithNested::Status::OK,
  ::android::aidl::tests::nested::ParcelableWithNested::Status::NOT_OK,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
