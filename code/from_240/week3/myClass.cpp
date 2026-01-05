//
//  myClass.cpp
//  
//
//  Created by Doug Szajda on 9/8/20.
//


#include <iostream>
#include "String.h"

using namespace std;

String::String() {
  this->value = "";
}

string String::toString() {

  return this->value;

}

String::~String() {}
