#include <gtest/gtest.h>
#include "recursion.h"

TEST(FibonacciTest, BaseCase) {
    EXPECT_EQ(fibonacci(0), 1);
    EXPECT_EQ(fibonacci(1), 1);
}

TEST(FibonacciTest, KnownValues) {
    EXPECT_EQ(fibonacci(2), 2);
    EXPECT_EQ(fibonacci(5), 8);
    EXPECT_EQ(fibonacci(9), 55);
}