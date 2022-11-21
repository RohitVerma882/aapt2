#pragma once

#include <android/aidl/tests/RecursiveList.h>
#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <optional>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace aidl {
namespace tests {
class RecursiveList : public ::android::Parcelable {
public:
  int32_t value = 0;
  ::std::unique_ptr<::android::aidl::tests::RecursiveList> next;
  inline bool operator!=(const RecursiveList& rhs) const {
    return std::tie(value, next) != std::tie(rhs.value, rhs.next);
  }
  inline bool operator<(const RecursiveList& rhs) const {
    return std::tie(value, next) < std::tie(rhs.value, rhs.next);
  }
  inline bool operator<=(const RecursiveList& rhs) const {
    return std::tie(value, next) <= std::tie(rhs.value, rhs.next);
  }
  inline bool operator==(const RecursiveList& rhs) const {
    return std::tie(value, next) == std::tie(rhs.value, rhs.next);
  }
  inline bool operator>(const RecursiveList& rhs) const {
    return std::tie(value, next) > std::tie(rhs.value, rhs.next);
  }
  inline bool operator>=(const RecursiveList& rhs) const {
    return std::tie(value, next) >= std::tie(rhs.value, rhs.next);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.RecursiveList");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "RecursiveList{";
    os << "value: " << ::android::internal::ToString(value);
    os << ", next: " << ::android::internal::ToString(next);
    os << "}";
    return os.str();
  }
};  // class RecursiveList
}  // namespace tests
}  // namespace aidl
}  // namespace android
