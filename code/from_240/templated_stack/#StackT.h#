#include <sstream>
#include <stdexcept> // for runtime_error
#include <iostream>
#include <string>

using namespace std;

// templated stack
<template class T>
class StackT {

private:

  static const size_t INIT_CAP{10};

  size_t size;
  size_t cap;
  T* values;  // array of objects of type T that will hold the values pushed onto the stack

  void resize();
  
public:
  StackT();
  StackT(const StackT& other);
  StackT& operator=(const StackT& other);
  StackT(StackT&& other)noexcept;
  Stack& operator=(Stack&& other)noexcept;
  ~Stack();

  void push(int element);
  int pop();
  bool isEmpty();
  void print();
  
  // These are really for testing.  You wouldn't have them
  // in the API for a real Stack class
  size_t getSize();
  size_t getCap();
  int* getValues();
  
};
