#include <gtest/gtest.h>
#include "basic_functions.h"

// raiseToPower tests
TEST(RaiseToPowerTest, BasicExponent) {
    EXPECT_EQ(raiseToPower(3, 4), 81);
    EXPECT_EQ(raiseToPower(6, 5), 7776);
    EXPECT_EQ(raiseToPower(2, 10), 1024);
}

TEST(RaiseToPowerTest, ZeroExponent) {
    EXPECT_EQ(raiseToPower(5, 0), 1);   // anything^0 = 1
}

TEST(RaiseToPowerTest, ZeroBase) {
    EXPECT_EQ(raiseToPower(0, 5), 0);   // 0^anything = 0
}

// squareRoot tests
TEST(SquareRootTest, PerfectSquares) {
    EXPECT_NEAR(squareRoot(9.0),  3.0, 0.001);
    EXPECT_NEAR(squareRoot(16.0), 4.0, 0.001);
    EXPECT_NEAR(squareRoot(25.0), 5.0, 0.001);
}

// divide tests
TEST(DivideTest, QuotientAndRemainder) {
    int rem;
    EXPECT_EQ(divide(14, 4, rem), 3);
    EXPECT_EQ(rem, 2);
}

TEST(DivideTest, EvenDivision) {
    int rem;
    EXPECT_EQ(divide(12, 4, rem), 3);
    EXPECT_EQ(rem, 0);
}