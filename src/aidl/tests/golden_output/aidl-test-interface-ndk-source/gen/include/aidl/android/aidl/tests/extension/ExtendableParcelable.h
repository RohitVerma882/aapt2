#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
namespace extension {
class ExtendableParcelable {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t a = 0;
  std::string b;
  ::ndk::AParcelableHolder ext{::ndk::STABILITY_LOCAL};
  int64_t c = 0L;
  ::ndk::AParcelableHolder ext2{::ndk::STABILITY_LOCAL};

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator!=(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) != std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }
  inline bool operator<(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) < std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }
  inline bool operator<=(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) <= std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }
  inline bool operator==(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) == std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }
  inline bool operator>(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) > std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }
  inline bool operator>=(const ExtendableParcelable& rhs) const {
    return std::tie(a, b, ext, c, ext2) >= std::tie(rhs.a, rhs.b, rhs.ext, rhs.c, rhs.ext2);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream os;
    os << "ExtendableParcelable{";
    os << "a: " << ::android::internal::ToString(a);
    os << ", b: " << ::android::internal::ToString(b);
    os << ", ext: " << ::android::internal::ToString(ext);
    os << ", c: " << ::android::internal::ToString(c);
    os << ", ext2: " << ::android::internal::ToString(ext2);
    os << "}";
    return os.str();
  }
};
}  // namespace extension
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
