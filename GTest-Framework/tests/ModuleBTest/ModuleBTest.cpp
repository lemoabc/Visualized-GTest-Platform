#include "ModuleBTest.h"
#include <gtest/gtest.h>

void ModuleBTest::SetUp() {
    // Setup code before each test
}

void ModuleBTest::TearDown() {
    // Cleanup code after each test
}

TEST_F(ModuleBTest, IsEmpty_WithNullptr_ReturnsTrue) {
    EXPECT_TRUE(stringUtil.IsEmpty(nullptr));
}

TEST_F(ModuleBTest, IsEmpty_WithEmptyString_ReturnsTrue) {
    EXPECT_TRUE(stringUtil.IsEmpty(""));
}

TEST_F(ModuleBTest, IsEmpty_WithNonEmptyString_ReturnsFalse) {
    EXPECT_FALSE(stringUtil.IsEmpty("Hello"));
}

TEST_F(ModuleBTest, IsEmpty_WithSingleCharacter_ReturnsFalse) {
    EXPECT_FALSE(stringUtil.IsEmpty("a"));
}
