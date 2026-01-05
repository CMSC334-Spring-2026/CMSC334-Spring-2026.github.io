//Example thanks to J. Lospinoso in his text
//C++ Crash Course, No Starch Press

#include <cstddef>

double mean(const double* values, size_t length) {
  double result{};
  for(size_t i{}; i < length; i++) {
    result += values[i];
  }
  return result / length;
}


//We can make this work for other types via operator overloading,
//as we see below.

long mean(const long* values, size_t length) {
  long result{};
  for(size_t i{}; i < length; i++) {
    result += values[i];
  }
  return result / length;
}


//This requires us to copy a lot of code that is doing
//essentially the same operation.  There's a better way.

int mean(const int* values, size_t length) {
  int result{};
  for(size_t i{}; i < length; i++) {
    result += values[i];
  }
  return result / length;
}







