#include <iostream>

#include "fibonacci.hpp"

#include "gtest/gtest.h"

namespace Fibonacci {

TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(1, recursiveFib(0));
  EXPECT_EQ(1, recursiveFib(1));
  EXPECT_EQ(2, recursiveFib(2));
  EXPECT_EQ(3, recursiveFib(3));
  EXPECT_EQ(5, recursiveFib(4));
  EXPECT_EQ(8, recursiveFib(5));
  EXPECT_EQ(13, recursiveFib(6));
  EXPECT_EQ(21, recursiveFib(7));
  EXPECT_EQ(34, recursiveFib(8));
  EXPECT_EQ(55, recursiveFib(9));
  EXPECT_EQ(89, recursiveFib(10));
}
}