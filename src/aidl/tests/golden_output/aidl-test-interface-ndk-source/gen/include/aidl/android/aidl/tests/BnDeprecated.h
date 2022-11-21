#pragma once

#include "aidl/android/aidl/tests/IDeprecated.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
class __attribute__((deprecated("test"))) BnDeprecated : public ::ndk::BnCInterface<IDeprecated> {
public:
  BnDeprecated();
  virtual ~BnDeprecated();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class __attribute__((deprecated("test"))) IDeprecatedDelegator : public BnDeprecated {
public:
  explicit IDeprecatedDelegator(const std::shared_ptr<IDeprecated> &impl) : _impl(impl) {
  }

protected:
private:
  std::shared_ptr<IDeprecated> _impl;
};

}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
