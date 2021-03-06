// Copyright (c) 2021
// Authors: Weixiong (Victor) Zheng
// All rights reserved
//
// SPDX-License-Identifier: MIT

#include "para/base/status.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

// Macros used in tests
#define EXPECT_OKAY(s)                                                         \
  do {                                                                         \
    const para::Status& UNIQUE_EXPECT_OKAY_STATUS = (s);                       \
    EXPECT_TRUE(UNIQUE_EXPECT_OKAY_STATUS.okay()) << UNIQUE_EXPECT_OKAY_STATUS;\
  } while (false)

#define EXPECT_ERROR(s)                                                           \
  do {                                                                            \
    const para::Status& UNIQUE_EXPECT_ERROR_STATUS = (s);                         \
    EXPECT_FALSE(UNIQUE_EXPECT_ERROR_STATUS.okay()) << UNIQUE_EXPECT_ERROR_STATUS;\
  } while (false)

#define ASSERT_OKAY(s)                                                         \
  do {                                                                         \
    const para::Status& UNIQUE_ASSERT_OKAY_STATUS = (s);                       \
    ASSERT_TRUE(UNIQUE_ASSERT_OKAY_STATUS.okay()) << UNIQUE_ASSERT_OKAY_STATUS;\
  } while (false)

#define ASSERT_ERROR(s)                                                           \
  do {                                                                            \
    const para::Status& UNIQUE_ASSERT_ERROR_STATUS = (s);                         \
    EXPECT_FALSE(UNIQUE_ASSERT_ERROR_STATUS.okay()) << UNIQUE_ASSERT_ERROR_STATUS;\
  } while (false)

#define EXPECT_SUBSTR(test_str, sub_str)                                             \
  do {                                                                               \
    const std::string& UNIQUE_EXPECT_TEST_STR = (test_str);                          \
    const std::string& UNIQUE_EXPECT_SUB_STR = (sub_str);                            \
    EXPECT_THAT(UNIQUE_EXPECT_TEST_STR, ::testing::HasSubstr(UNIQUE_EXPECT_SUB_STR));\
  } while (false)

#define ASSERT_SUBSTR(test_str, sub_str)                                             \
  do {                                                                               \
    const std::string& UNIQUE_ASSERT_TEST_STR = (test_str);                          \
    const std::string& UNIQUE_ASSERT_SUB_STR = (sub_str);                            \
    EXPECT_THAT(UNIQUE_ASSERT_TEST_STR, ::testing::HasSubstr(UNIQUE_ASSERT_SUB_STR));\
  } while (false)
