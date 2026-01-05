#include <sstream>
#include <stdexcept> // for runtime_error
#include <vector>
#include <iostream>

using namespace std;

template <class T>
class TestStack {
private:
  vector<T> myVector;  // this will be a vector of type T items,
                             // where T could be int, char, or objects
public:
  TestStack();
  TestStack(const TestStack& other);
  TestStack& operator=(const TestStack& other);
  TestStack(TestStack&& other);
  TestStack& operator=(TestStack&& other);
  ~TestStack();

  void push(T element);
  T pop();
  bool isEmpty();
        
  void print();       // a method to show use of iterator

};

template <class T>
TestStack<T>::TestStack() {}   // myVector will be created for us automagically

template <class T>
TestStack<T>::TestStack(const TestStack& other): myVector{other.myVector}{}

template <class T>
TestStack<T>::TestStack<T>& operator=(const TestStack<T>& other) {
  if (this == &other) {
    return this;
  }
  this->myVector.clear();
  this->myVector = other.myVector;
  return *this;
}




template <class T>
TestStack<T>::~TestStack() {}

template <class T>
void TestStack<T>::push(T element) {
    myVector.push_back(element);
}

template <class T>
T TestStack<T>::pop() {
    // note: use of [] will not throw an exception for bad index, so you should
    // use .at() instead (see below); however, here, we will show an example of
    // using stringstream and throw to handle throwing an exception in cases 
    // where you might need to throw your own exception (e.g., lab 9)

  if (myVector.empty()) {
        stringstream ss;  // ss acts like cout -- you can "write to a string"
        ss << "Attempt to pop() off an empty stack!";
        throw runtime_error(ss.str().c_str()); // needs a const char*, not string
  }

  //stack not empty, so pop the last element
  TestStack<T> returnT = myVector.back();
  // now remove that last element;
  myVector.pop_back();
  return returnT; // if here, index is good, so not problem
}

template <class T>
void TestStack<T>::print() {
    // (1) need typename in front because using in a template class
    //       (see http://www.cplusplus.com/forum/general/37217/
    // (2) vector<T>::iterator is your type
    // (3) myIterator is your variable, which will refer to the iterator
    // (4) begin() is a method in the vector class, returning an iterator
    //      that points to the start of the vector
    // (5) end() is a method in the vector class, returning an iterator
    //      that points to the end of the vector
    // (6) advance the iterator by just using ++
    // (7) access the contents of the vector to where the iterator currently
    //      points by dereferencing the iterator
    typename vector<T>::iterator myIterator = myVector.begin();
    while (myIterator != myVector.end()) {
        cout << *myIterator << endl;
        myIterator++;
    }
}
