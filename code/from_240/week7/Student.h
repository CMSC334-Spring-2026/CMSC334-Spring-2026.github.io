#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>
using namespace std;

class Student
{
    private:
        string name;

    public:
        Student();
        Student(string name);
        ~Student();

        string getName();
};

#endif
