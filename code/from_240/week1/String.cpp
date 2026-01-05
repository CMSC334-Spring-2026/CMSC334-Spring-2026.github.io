#include "String.h"
#include <exception>

String::String() {

  value = "";

}

String::String(const char* cString) {

  value = cString;

}

String::String(const String& other) {

  value = other.value;

}

String::~String(){}

string String::toString(){

  // I have an underlying standard string.  Need to
  // return a standard string

  return value;

}

int String::length() {
  
  return value.length();
  
}

String String::substring(int start, int end) {

  return nullptr;

}

bool String::operator==(const String& other) {

  if (value == other.value) {
    return true;
  }
  
  return false;

}

String& String::operator=(const String& other) {

  String* myString{new String};
  
  return *myString;
  
}

String& String::operator+=(const String& other) {

  String* myString{new String};
  
  return *myString;

}
