#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/ParcelableHolder.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace aidl {
namespace tests {
namespace extension {
class ExtendableParcelable : public ::android::Parcelable {
public:
  int32_t a = 0;
  ::std::string b;
  ::android::os::ParcelableHolder ext { ::android::Parcelable::Stability::STABILITY_LOCAL };
  int64_t c = 0L;
  ::android::os::ParcelableHolder ext2 { ::android::Parcelable::Stability::STABILITY_LOCAL };
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

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.extension.ExtendableParcelable");
    return DESCIPTOR;
  }
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
};  // class ExtendableParcelable
}  // namespace extension
}  // namespace tests
}  // namespace aidl
}  // namespace android
