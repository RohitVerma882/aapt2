#pragma once

#include "aidl/android/aidl/tests/INewName.h"

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
class BnNewName : public ::ndk::BnCInterface<INewName> {
public:
  BnNewName();
  virtual ~BnNewName();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class INewNameDelegator : public BnNewName {
public:
  explicit INewNameDelegator(const std::shared_ptr<INewName> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus RealName(std::string* _aidl_return) override {
    return _impl->RealName(_aidl_return);
  }
protected:
private:
  std::shared_ptr<INewName> _impl;
};

}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
