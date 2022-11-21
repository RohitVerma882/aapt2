#pragma once

#include <android/aidl/tests/extension/MyExt.h>
#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace aidl {
namespace tests {
namespace extension {
class MyExt2 : public ::android::Parcelable {
public:
  int32_t a = 0;
  ::android::aidl::tests::extension::MyExt b;
  ::std::string c;
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

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.extension.MyExt2");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "MyExt2{";
    os << "a: " << ::android::internal::ToString(a);
    os << ", b: " << ::android::internal::ToString(b);
    os << ", c: " << ::android::internal::ToString(c);
    os << "}";
    return os.str();
  }
};  // class MyExt2
}  // namespace extension
}  // namespace tests
}  // namespace aidl
}  // namespace android
