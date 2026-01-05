#include "Student.h"

Student::Student() : name{"noname"} {}
Student::~Student() {}

Student::Student(string name)
{
    this->name = name;
}

string Student::getName()
{
    return this->name;
}
