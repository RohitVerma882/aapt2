#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/aidl/tests/extension/MyExt.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
namespace extension {
class MyExt2 {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t a = 0;
  ::aidl::android::aidl::tests::extension::MyExt b;
  std::string c;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator!=(const MyExt2& rhs) const {
    return std::tie(a, b, c) != std::tie(rhs.a, rhs.b, rhs.c);
  }
  inline bool operator<(const MyExt2& rhs) const {
    return std::tie(a, b, c) < std::tie(rhs.a, rhs.b, rhs.c);
  }
  inline bool operator<=(const MyExt2& rhs) const {
    return std::tie(a, b, c) <= std::tie(rhs.a, rhs.b, rhs.c);
  }
  inline bool operator==(const MyExt2& rhs) const {
    return std::tie(a, b, c) == std::tie(rhs.a, rhs.b, rhs.c);
  }
  inline bool operator>(const MyExt2& rhs) const {
    return std::tie(a, b, c) > std::tie(rhs.a, rhs.b, rhs.c);
  }
  inline bool operator>=(const MyExt2& rhs) const {
    return std::tie(a, b, c) >= std::tie(rhs.a, rhs.b, rhs.c);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream os;
    os << "MyExt2{";
    os << "a: " << ::android::internal::ToString(a);
    os << ", b: " << ::android::internal::ToString(b);
    os << ", c: " << ::android::internal::ToString(c);
    os << "}";
    return os.str();
  }
};
}  // namespace extension
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
