#include <iostream>

#include "libsample/sample.h"

int main( int argc, char **argv ) {

  const float a = 2.5, b = 3.2;

  std::cout << a << " + " << b << " = " << libsample::sum(a,b) << std::endl;
}
