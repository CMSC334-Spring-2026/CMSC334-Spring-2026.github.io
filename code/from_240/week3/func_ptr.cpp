#include <cstdio>

float add(float a, int b) {
  return a + b;
}

float subtract(float a, int b) {
  return a - b;
}

int main() {
  const float first{ 100 };
  const int second{ 20 };

  float (*func_ptr)(float, int){};
  printf("func_ptr %p\n", func_ptr);

 
  func_ptr = &add;
  printf("&add = %p\n", func_ptr);
  printf("%g + %d = %g\n", first, second, func_ptr(first, second));

  func_ptr = &subtract;
  printf("&subtract = %p\n", func_ptr);
  printf("%g - %d = %g\n", first, second, func_ptr(first, second));
}


