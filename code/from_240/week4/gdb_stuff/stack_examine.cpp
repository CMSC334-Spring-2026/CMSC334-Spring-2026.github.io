#include <iostream>

using namespace std;

void foo(int value, int size) {

  int myArray[size];

  for (int i = 0; i < size; ++i) {
    myArray[size] = value;
  }

  // So the compiler doesn't 
  // yell that I don't use myArray
  cout << myArray[0] << endl;

}



int main() {

  cout << "Entering foo" << endl;
  
  foo(55, 10);

  cout << "foo has ended" << endl;
  return 0;

}















