#include <iostream>
#include<cstring>
#include<string>
#include "String.h"
#include <exception>
using namespace std;



    //Constructs a string with no arguments
    String::String(){
        value = "";

    }

    //Copy Constructor
    String::String(const String& other){
        this->value = other.value;
    }

    String::String(const char* other){
       if(other == nullptr){
	 throw invalid_argument("Argument to const char* constructor cannot be null");
       }       
       value = other; 
    }

    String::~String() {}
   

    //Returns a C++ string
    string String::toString(){
        return value;

    }

    int String::length(){

        return value.length();
    }

    String String::substring(int start, int end){
      if( (start < 0) || (end < start) || (end > value.length())){
            throw out_of_range("Values out of range");
        }
      return (String(value.substr(start, end-start).c_str()));
    }

    bool String::operator == (const String& other){
      return (value == other.value);
    }


    String& String::operator = (const String& other){
        this->value = other.value;
        return *this;   

    }

    String& String::operator+=(const String& other){
        this->value = value + other.value;
        return *this;

    }
