
#include <iostream>

int main() {

  std::cout << "Enter 10 integers: " << std::endl;

  int array[10];
  for (int i = 0; i < 10; ++i) {
    std::cin >> array[i];
  }

  std::cout << "In reverse, you entered: ";
  for (int i = 9; i >= 0; --i) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  return 0;

}
