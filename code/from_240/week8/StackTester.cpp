#include <iostream>
#include "Stack.h"

using namespace std;

Stack addressTest() {

  Stack mystack{};
  cout << "address of stack in function -> " << &mystack << endl;
  return mystack;
  
}

int main() {

  // OK, First, do they correctly build an empty stack
  
  Stack stack1{};

  Stack stack22 = addressTest();
  cout << "address of stack in main -> " << &stack22 << endl;
  
  cout << endl << "empty Stack 1" << endl;
  stack1.print();

  cout << "Testing isEmpty() " << stack1.isEmpty() << endl;
}


