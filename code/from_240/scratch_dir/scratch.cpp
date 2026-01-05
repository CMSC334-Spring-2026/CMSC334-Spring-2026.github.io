#include <cstdio>
#include <iostream>

using namespace std;

void ref_type(int &x) {
  printf("lvalue reference %d\n", x);
}

void ref_type(int &&x) {
  printf("rvalue reference %d\n", x);
}

void foo(int& myInt) {
  myInt = 3;
}


void foo2(int myInt) {
  myInt = 4;
}


int main() {
  auto x = 1;
  ref_type(x);
  ref_type(2);
  ref_type(x + 2);

  int myInt{5};

  int* intPtr{&myInt};

  foo(*intPtr);
  cout << myInt << endl;
  
  foo2(*intPtr);

  cout << myInt << endl;
  
}


