#ifndef __CHILD_H__
#define __CHILD_H__

#include "parent.h"

class Child : public Parent {
    private: char atSign;
    public:
       Child();
       Child(int xVal, int yVal, int zVal, char atVal);
       ~Child();
       void print();
};


#endif









