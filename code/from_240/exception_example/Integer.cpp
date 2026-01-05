#include "Integer.h"
#include <iostream>
#include <string>

Integer::Integer() : value(0) {}

Integer::Integer(int myValue)
{
  this->value = myValue;
}


Integer::Integer(const Integer& other)
{
    // either of the options below will work:
    //   the first is generally preferred as no
    //   additional method call is required;
    //   if you do want to use a method (e.g., were
    //   some special checks required), the method
    //   must be a const method -- see below

    this->value = other.value;
//    this->value = other.intValue();

    cout << "In Copy Constructor" << endl;
}

Integer::~Integer() {}

int Integer::intValue() const { return(value); }

//Integer* Integer::operator=(const Integer& other)
Integer& Integer::operator=(const Integer& other)
//void Integer::operator=(const Integer& other)
{
    this->value = other.value;
    return(*this);
    //return(this);
}

Integer& Integer::operator=(const string& other)
{
    this->value = stoi(other);
    return(*this);
}
