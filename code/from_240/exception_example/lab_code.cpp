#include "String.h"
#include <iostream>
#include <exception>
using namespace std;

String::String() : value{""} { cout << "in default" << endl;}



//======================================================================
//* String& String::operator=(const String& other)
//======================================================================
String& String::operator=(const String& other)
{
    this->value = other.value;
    return(*this);
}



