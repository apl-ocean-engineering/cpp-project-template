#include <gtest/gtest.h>

#include "libsample/sample.h"

TEST(sum, simple_sum) {

  const float a = 5.0, b = 3.5;

  ASSERT_FLOAT_EQ(  libsample::sum(a, b), a+b );

}
