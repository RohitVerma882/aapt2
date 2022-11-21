#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/aidl/tests/RecursiveList.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
class RecursiveList {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t value = 0;
  std::unique_ptr<::aidl::android::aidl::tests::RecursiveList> next;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

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

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream os;
    os << "RecursiveList{";
    os << "value: " << ::android::internal::ToString(value);
    os << ", next: " << ::android::internal::ToString(next);
    os << "}";
    return os.str();
  }
};
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
