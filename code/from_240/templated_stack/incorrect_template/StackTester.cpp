#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

  // OK, First, do they correctly build an empty stack
  
  Stack<int> stack1{};
  Stack<char> stack2{};
  Stack<double> stack3{};

  for (int i = 0; i < 10; ++i) {
    stack1.push(5*i + 3);
  }

  stack1.print();

  cout << endl;
  
  for (int i = 0; i < 10; ++i) {
    stack2.push('a' + i);
  }
  stack2.print();

  cout << endl;
  for (int i = 0; i < 10; ++i) {
    stack3.push(5.5*i + 3.8);
  }
  stack3.print();

  cout << endl;

  Stack<string> stack4{};

  stack4.push("ago");
  stack4.push("years");
  stack4.push("seven");
  stack4.push("and");
  stack4.push("score");
  stack4.push("four");
	    
  stack4.print();
    
}


