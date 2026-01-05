#include "String.h"
#include <iostream>
#include <exception>
using namespace std;

String::String() : value{""} { cout << "in default" << endl;}

//======================================================================
//* String::String(const char* cString)
//======================================================================
String::String(const char* cString) {
   if (cString == nullptr)
   {
      throw invalid_argument("Argument to const char* constructor cannot be null");
   }
   value = cString;
}

//======================================================================
//* String::String(const String& other)
//======================================================================
String::String(const String& other)
{
    this->value = other.value;
}


//======================================================================
//* String::~String() {}
//======================================================================
String::~String() {}

//======================================================================
//* string String::toString()
//======================================================================
string String::toString()
{
  return(value);
}

//======================================================================
//* int String::length() { return(value.length()); }
//======================================================================
int String::length() { return(value.length()); }

//======================================================================
//* String String::substring(int start, int end)
//======================================================================
String String::substring(int start, int end)
{

    if (start < 0 || start > end || end > value.length())
    {
        std::string str = "Invalid string indices: " + std::to_string(start)
            + ", " + std::to_string(end);
        throw std::out_of_range(str.c_str());
    }
    return(String(value.substr(start, end-start).c_str()));

}

//======================================================================
//* bool String::operator==(const String& other)
//======================================================================
bool String::operator==(const String& other) const{
    if (this->value == other.value) return(true);
    return(false);
}

//======================================================================
//* String& String::operator=(const String& other)
//======================================================================
String& String::operator=(const String& other)
{
  string copiedStdString{other.value};
  this->value = copiedStdString;
  return (*this);
}

//======================================================================
//* String& String::operator+=(const String& other)
//======================================================================
String& String::operator+=(const String& other)
{
    this->value += other.value;
    return(*this);
}
