#include "Stack.h"

template <class T>
Stack<T>::Stack(): size{0}, cap{INIT_CAP}, values{new T[INIT_CAP]}{}   


template <class T>
Stack<T>::Stack(const Stack& other): size{other.size}, cap{other.cap} {

  values = new T[other.cap];
  for (int i = 0; i < size; ++i) {
    //Assumes T has a copy assignment operator
    values[i] = other.values[i];
  }
}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack& other) {

  if (values != nullptr) {
    delete[] values;
  }

  size = other.size;
  cap = other.cap;
  values = new T[other.cap];
    
  for (int i = 0; i < size; ++i) {
    values[i] = other.values[i];
  }
  return *this;
}

template <class T>
Stack<T>::Stack(Stack&& other) noexcept :
size{other.size},
  cap{other.cap},
  values{other.values} {

  other.size = 0;
  other.cap = 0;
  other.values = nullptr;

  }

template <class T>
Stack<T>& Stack<T>::operator=(Stack&& other) noexcept {
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

template <class T>
Stack<T>::~Stack() {delete[] values;}

template <class T>
void Stack<T>::push(T element) {

  if (size == cap) {
    resize();
  }
  values[size++] = element;
}

template <class T>
T Stack<T>::pop() {
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

template <class T>
bool Stack<T>::isEmpty() {
  return (size == 0);
}

template <class T>
void Stack<T>::print() {

  for (int i = size - 1; i >= 0; --i) {
    cout << values[i] << endl;
  }

}

template <class T>
void Stack<T>::resize() {

  T* tmp = values;
  cap *= 2;
  values = new T[cap];

  for (int i = 0; i < size; ++i) {
    values[i] = tmp[i];
  }

  delete[] tmp;

}

template <class T>
size_t Stack<T>::getSize() {
  return size;
}

template <class T>
size_t Stack<T>::getCap() {
  return cap;
}

template <class T>
T* Stack<T>::getValues() {
  return values;
}


template class Stack<int>;



