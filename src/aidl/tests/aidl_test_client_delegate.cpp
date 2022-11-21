/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "aidl_test_client.h"
#include "gmock/gmock.h"

#include "android/aidl/tests/BnTestService.h"

using android::binder::Status;

using android::aidl::tests::ITestService;
using android::aidl::tests::ITestServiceDelegator;

static constexpr int8_t kCustomByte = 8;

static_assert(std::is_same<ITestService::DefaultDelegator, ITestServiceDelegator>::value);

struct CustomDelegator : public ITestServiceDelegator {
 public:
  CustomDelegator(sp<ITestService>& impl) : ITestServiceDelegator(impl) {}

  // Change RepeatByte to always return the same byte.
  Status RepeatByte(int8_t /* token */, int8_t* _aidl_return) override {
    *_aidl_return = kCustomByte;
    return Status::ok();
  }
};

TEST_F(AidlTest, Delegator) {
  auto delegator = sp<ITestServiceDelegator>::make(service);

  int8_t returned_value;
  auto status = delegator->RepeatByte(12, &returned_value);
  ASSERT_TRUE(status.isOk()) << status;
  EXPECT_EQ(12, returned_value);
}

TEST_F(AidlTest, CustomDelegator) {
  auto delegator = sp<CustomDelegator>::make(service);

  int8_t returned_value;
  auto status = delegator->RepeatByte(12, &returned_value);
  ASSERT_TRUE(status.isOk()) << status;
  EXPECT_EQ(kCustomByte, returned_value);
}
