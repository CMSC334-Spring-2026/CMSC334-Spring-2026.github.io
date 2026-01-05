
#include <iostream>


template <typename T>
T maxElement(const T* values, size_t length) {
  T result{};
  T currentMax{values[0]};
  
  for(size_t i{1}; i < length; i++) {
    if (values[i] > currentMax) {
      currentMax = values[i];
    }
  }
  return currentMax;
}

int main() {
  const double nums_d[]{ 1.0, 2.0, 3.0, 4.0 };
  const auto result1 = mean<double>(nums_d, 4);
  printf("double: %f\n", result1);

  const float nums_f[]{ 1.0f, 2.0f, 3.0f, 4.0f };
  const auto result2 = mean<float>(nums_f, 4);
  printf("float: %f\n", result2);

  const size_t nums_c[]{ 1, 2, 3, 4 };
  const auto result3 = mean<size_t>(nums_c, 4);
  printf("size_t: %zd\n", result3);
}
