

#include "String.h"
#include <iostream>
#include <exception>


using namespace std;

String::String(): value{""} {}

//====================================================
//  String::String(const char* cString);
//====================================================

String::String(const char* cString) {
  if (cString == nullptr) {
    throw invalid_argument("Argument to const char* constructor cannot be null!\n");
  }
  value = cString;
}

//====================================================
//  String::String(const String& other);
//====================================================

String::String(const String& other) {
  this->value = other.value;
}

//====================================================
//  String::~String();
//====================================================

String::~String() {};

//====================================================
//  string String::toString();
//====================================================

string String::toString() {

  string returnVal {value};
  return returnVal;

}

//====================================================
//  int String::length();
//====================================================

int String::length() {

  return value.length();

}

//====================================================
//  String String::substring(int start, int end);
//====================================================

String String::substring(int start, int end) {

  // So the idea would be to use the substring method
  // in the C++ string class, unless the indices are
  // invalid

  if ((start < 0) || (start > end) || (end > value.length())) {
    string msg = "Invalid arguments to substring: [" + 
      to_string(start) + ", " + to_string(end) + "]";
    throw out_of_range(msg.c_str()); // note conversion from string to const char*
  }

  // OK, so if we're here, subscripts are good

  return (String(value.substr(start, end - start).c_str()));
}

//====================================================
//  bool String::operator(const String& other);
//====================================================


bool String::operator==(const String& other) {

  // We only care whether the underlying strings are the same
  return (this->value == other.value);

}

//====================================================
//  String& String::operator=(const String& other);
//====================================================

String&  String::operator=(const String& other) {  // so one can assign str2 = str 1..

  // Need to use move semantics here

  this->value = other.value;
  return (*this);

}

//====================================================
//  bool String::operator+=(const String& other);
//====================================================


String& String::operator+=(const String& other) { //so one can use str2 += str1

  //The key is to remembet that when you do this operator,
  // the "result" is going into "this"
  
  this->value += other.value;
  return (*this);

}

