#include <gtest/gtest.h>
extern "C" {
  #include "../include/main.h"
}

TEST(CountTest, HandleCount) {
  const char fname[] = "t.txt";

  int result = Count(fname);

  EXPECT_EQ(result, 3);
}