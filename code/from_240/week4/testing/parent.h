
#ifndef __PARENT_H__
#define __PARENT_H__

#include <iostream>
using namespace std;

class Parent {
    private:   int x;  // not directly accessible in derived classes
    protected: int y;
    public:    int z;

    Parent();
    Parent(int xVal, int yVal, int zVal);
    ~Parent();
    void print();
    // inline declaration means?  (see page 244 in text)
    inline int getX() { return this->x; }
};

#endif













