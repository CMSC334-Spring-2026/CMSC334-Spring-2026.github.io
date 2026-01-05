#include "Stack.h"

using namespace std;

Stack::Stack(): size{0}, cap{INIT_CAP}, values{new int[INIT_CAP]}{}   

Stack::Stack(const Stack& other): size{other.size}, cap{other.cap} {

  values = new int[other.cap];
  for (int i = 0; i < size; ++i) {
    values[i] = other.values[i];
  }
}

Stack& Stack::operator=(const Stack& other) {

  if (values != nullptr) {
    delete[] values;
  }

  size = other.size;
  cap = other.cap;
  values = new int[other.cap];
    
  for (int i = 0; i < size; ++i) {
    values[i] = other.values[i];
  }
  return *this;
}

Stack::Stack(Stack&& other) noexcept :
size{other.size},
  cap{other.cap},
  values{other.values} {

  other.size = 0;
  other.cap = 0;
  other.values = nullptr;

  }


Stack& Stack::operator=(Stack&& other) noexcept {
  if (this == &other) {
    return *this;
  }

  delete[] values;
  size = other.size;
  cap = other.cap;
  values = other.values;
  other.size = 0;
  other.cap = 0;
  other.values = nullptr;
  return *this;
}

Stack::~Stack() {delete[] values;}

void Stack::push(int element) {

  if (size == cap) {
    resize();
  }
  values[size++] = element;
}


int Stack::pop() {
    // note: use of [] will not throw an exception for bad index, so you should
    // use .at() instead (see below); however, here, we will show an example of
    // using stringstream and throw to handle throwing an exception in cases 
    // where you might need to throw your own exception (e.g., lab 9)

  if (this->size == 0) {
        stringstream ss;  // ss acts like cout -- you can "write to a string"
        ss << "Attempt to pop() off an empty stack!";
	throw runtime_error(ss.str().c_str()); // needs a const char*, not string
  }

  //stack not empty, so pop the last element
  int return_val = values[size - 1];
  // now remove that last element;
  size -= 1;
  return return_val; // if here, index is good, so not problem
}

bool Stack::isEmpty() {
  return (size == 0);
}

void Stack::print() {

  for (int i = size - 1; i >= 0; --i) {
    cout << values[i] << endl;
  }

}

void Stack::resize() {

  int* tmp = values;
  cap *= 2;
  values = new int[cap];

  for (int i = 0; i < size; ++i) {
    values[i] = tmp[i];
  }

  delete[] tmp;

}

size_t Stack::getSize() {
  return size;
}

size_t Stack::getCap() {
  return cap;
}

int* Stack::getValues() {
  return values;
}


