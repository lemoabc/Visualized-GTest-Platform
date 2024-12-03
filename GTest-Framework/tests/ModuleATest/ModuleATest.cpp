#include "ModuleATest.h"
#include <gtest/gtest.h>

void ModuleATest::SetUp() {
    // Setup code before each test
}

void ModuleATest::TearDown() {
    // Cleanup code after each test
}

TEST_F(ModuleATest, AddTest) {
    EXPECT_EQ(calc.Add(2, 3), 5);
    EXPECT_EQ(calc.Add(-1, 1), 0);
}

TEST_F(ModuleATest, SubtractTest) {
    EXPECT_EQ(calc.Subtract(5, 3), 2);
    EXPECT_EQ(calc.Subtract(1, 1), 0);
}
