#include <gtest/gtest.h>
#include "pass_by_ref.h"

TEST(IncrementTest, ModifiesOriginal) {
    int x = 3;
    increment(x);
    EXPECT_EQ(x, 4);   // original changed — pass by ref works
}

TEST(SwapTest, SwapsValues) {
    int a = 3, b = 5;
    swap(a, b);
    EXPECT_EQ(a, 5);
    EXPECT_EQ(b, 3);
}

TEST(SwapTest, SwapTwiceRestoresValues) {
    int a = 3, b = 5;
    swap(a, b);
    swap(a, b);
    EXPECT_EQ(a, 3);
    EXPECT_EQ(b, 5);
}