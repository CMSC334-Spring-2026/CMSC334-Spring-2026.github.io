
#include "parent.h"

Parent::Parent() : x{0}, y{1}, z{2} {
    cout << "In Parent default constructor" << endl;
}

Parent::Parent(int xVal, int yVal, int zVal)
    : x{xVal}, y{yVal}, z{zVal} {
    cout << "In Parent typical-use constructor" << endl;
}

Parent::~Parent() {}

void Parent::print() {
    cout << "In Parent's print statement" << endl;
    cout << "x = " << this->x
         << " y = " << this->y
         << " z = " << this->z << endl;
}














