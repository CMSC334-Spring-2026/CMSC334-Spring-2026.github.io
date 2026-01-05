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


  stack1.push(4);
  stack1.push(5);
  stack1.push(-24);
  stack1.push(-3);

  cout << endl << "Stack 1 populated" << endl;
  
  stack1.print();

  cout << "Testing isEmpty() again " << stack1.isEmpty() << endl;

  
  stack1.pop();
  cout << endl << "Stack 1 after one pop" << endl;
  stack1.print();

  
  Stack stack2{stack1};

  cout << endl << "Stack 2, created using copy constructor" << endl;
  stack2.print();

  cout << endl << "Stack 1 check after using copy constructor" << endl;

  stack1.print();

  cout << endl << "Now check independence of the copy (Stack 2)" << endl;

  stack1.push(-45);
  stack1.push(32);

  cout << endl << "Stack 1 after pushing 2 new values" << endl;
  stack1.print();

  cout << endl << "Stack 2 (should not have changed)" << endl;
  stack2.print();
  

  Stack stack3{move(stack2)};

  cout << endl << "Stack 3, initialized via move from Stack 2" << endl;
  stack3.print();

  cout << endl << "Now checking Stack 2 after move -- it should be in moved from state" << endl;
  stack2.print();

  stack2 = stack1;

  cout << endl << "Repopulated Stack 2 via copy assignment from Stack 1" << endl;

  stack2.print();

  cout << endl << endl << "And checking that Stack 1 remains same after copy assignment" << endl;
  stack1.print();

  cout << endl << "Now check independence of the copy (Stack 2)" << endl;

  stack1.push(-78);
  stack1.push(22);

  cout << endl << "Stack 1 after pushing 2 new values" << endl;
  stack1.print();

  cout << endl << "Stack 2 (should not have changed)" << endl;
  stack2.print();

  Stack stack4 = move(stack2);

  cout << endl << "Stack 4 initialized via move assignment from Stack 2" << endl;
  stack4.print();

  cout << endl << "And checking that Stack 2 is now in moved-from state" << endl;
  stack2.print();
    
  cout << stack1.isEmpty() << endl;
}


