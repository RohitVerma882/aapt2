#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace aidl {
namespace versioned {
namespace tests {
class Foo : public ::android::Parcelable {
public:
  inline bool operator!=(const Foo&) const {
    return std::tie() != std::tie();
  }
  inline bool operator<(const Foo&) const {
    return std::tie() < std::tie();
  }
  inline bool operator<=(const Foo&) const {
    return std::tie() <= std::tie();
  }
  inline bool operator==(const Foo&) const {
    return std::tie() == std::tie();
  }
  inline bool operator>(const Foo&) const {
    return std::tie() > std::tie();
  }
  inline bool operator>=(const Foo&) const {
    return std::tie() >= std::tie();
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.versioned.tests.Foo");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "Foo{";
    os << "}";
    return os.str();
  }
};  // class Foo
}  // namespace tests
}  // namespace versioned
}  // namespace aidl
}  // namespace android
