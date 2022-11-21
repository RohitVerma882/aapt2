#include "aidl/android/aidl/tests/unions/EnumUnion.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
namespace unions {
const char* EnumUnion::descriptor = "android.aidl.tests.unions.EnumUnion";

binder_status_t EnumUnion::readFromParcel(const AParcel* _parcel) {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_tag;
  if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_tag)) != STATUS_OK) return _aidl_ret_status;
  switch (static_cast<Tag>(_aidl_tag)) {
  case intEnum: {
    ::aidl::android::aidl::tests::IntEnum _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::aidl::tests::IntEnum>) {
      set<intEnum>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<intEnum>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case longEnum: {
    ::aidl::android::aidl::tests::LongEnum _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::aidl::tests::LongEnum>) {
      set<longEnum>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<longEnum>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wdeprecated-declarations"
  case deprecatedField: {
    int32_t _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<int32_t>) {
      set<deprecatedField>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<deprecatedField>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  #pragma clang diagnostic pop
  }
  return STATUS_BAD_VALUE;
}
binder_status_t EnumUnion::writeToParcel(AParcel* _parcel) const {
  binder_status_t _aidl_ret_status = ::ndk::AParcel_writeData(_parcel, static_cast<int32_t>(getTag()));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;
  switch (getTag()) {
  case intEnum: return ::ndk::AParcel_writeData(_parcel, get<intEnum>());
  case longEnum: return ::ndk::AParcel_writeData(_parcel, get<longEnum>());
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wdeprecated-declarations"
  case deprecatedField: return ::ndk::AParcel_writeData(_parcel, get<deprecatedField>());
  #pragma clang diagnostic pop
  }
  __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "can't reach here");
}

}  // namespace unions
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
