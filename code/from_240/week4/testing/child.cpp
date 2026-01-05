
#include "child.h"



Child::Child() : Parent(), atSign{'@'} {
    cout << "In Child default constructor" << endl;
}

Child::Child(int xVal, int yVal, int zVal, char atVal)
// : x{xVal}, y{yVal}, z{zVal}, atSign{atVal} { // can't do this for child class! Why not?
     : Parent(xVal, yVal, zVal), atSign{atVal} {
    //x = xVal;  // private, so no-go
        // could use a setter method in Parent, or 
        // call typical-use Parent constructor in list initialization above
    //y = yVal;
    //z = zVal;
    //atSign = atVal; 
    cout << "In Child typical-use constructor" << endl;
}

Child::~Child() {}

void Child::print() {
    cout << "In Child's print statement" << endl;
    /*
    cout << "x = " << this->getX() //this->x
         << " y = " << this->y
         << " z = " << this->z 
         << " atSign = " << this->atSign << endl;
         */

    //print();  // this calls Child::print and will be an eventual stack melt!
    Parent::print();

    cout << " atSign = " << this->atSign << endl;
}













