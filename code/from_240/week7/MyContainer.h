#ifndef __MYCONTAINER_H__
#define __MYCONTAINER_H__

// A stringstream is a stream like object
// that allows one to read to or write from a string as
// if it were a stream.

#include <sstream>   // for stringstream
#include <stdexcept> // for invalid_argument
#include <vector>

using namespace std;

template <class T>
class MyContainer {
    private:
        vector<T> myVector;  // this will be a vector of type T items,
                             // where T could be int, char, or objects

    public:
        MyContainer();
        ~MyContainer();

        void add(T element);
        T    get(int index);
        
        unsigned int size();

        void print();       // just a method to show use of iterator

};

template <class T>
MyContainer<T>::MyContainer() {}
    // myVector will be created for us automagically

template <class T>
MyContainer<T>::~MyContainer() {}

template <class T>
void MyContainer<T>::add(T element) {
    myVector.push_back(element);
}

template <class T>
T MyContainer<T>::get(int index) {
    // note: use of [] will not throw an exception for bad index, so you should
    // use .at() instead (see below); however, here, we will show an example of
    // using stringstream and throw to handle throwing an exception, reenforcing
    // some stuff you've already done in labs.

  if (index < 0 || index >= myVector.size()) {
        stringstream ss;  // ss acts like cout -- you can "write to a string"
        ss << "Invalid argument to get: " << index;
        throw invalid_argument(ss.str().c_str()); // needs a const char*, not string
  }

  return myVector[index]; // if here, index is good, so not problem

  //return myVector.at(index); // use of .at() will throw an exception for us automatically
}

template <class T>
unsigned int MyContainer<T>::size() {
    return myVector.size();
}

template <class T>
void MyContainer<T>::print() {
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



#endif
