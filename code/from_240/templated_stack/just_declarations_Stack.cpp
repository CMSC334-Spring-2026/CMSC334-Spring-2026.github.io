#include <sstream>
#include <stdexcept> // for runtime_error
#include <iostream>
#include <string>

using namespace std;

template <class T>
class Stack {

private:

  static const size_t INIT_CAP{10};

  size_t size;
  size_t cap;
  T* values;  // array of objects of type T that will hold the values pushed onto the stack

  void resize();
  
public:
  Stack();
  Stack(const Stack& other);
  Stack& operator=(const Stack& other);
  Stack(Stack&& other)noexcept;
  Stack& operator=(Stack&& other)noexcept;
  ~Stack();

  void push(T element);
  T pop();
  bool isEmpty();
  void print();
  
  // These are really for testing.  You wouldn't have them
  // in the API for a real Stack class
  size_t getSize();
  size_t getCap();
  T* getValues();
  
};
