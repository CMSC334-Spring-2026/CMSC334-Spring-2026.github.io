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

//So when do you have to prepend the class name?
// When you are defining methods and members outside of the
// class declaration.

//You could also initialize this using x(0), y(1), z(2)
// That is, parentheses, not curly braces.  Use curly braces.
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

//*******************************************

// What does the public declaration here mean?  That is,
// what does public mean when declaring inheritance?
// see
// https://www.learncpp.com/cpp-tutorial/115-inheritance-and-access-specifiers/
class Child : public Parent {
    private: char atSign;
    public:
       Child();
       Child(int xVal, int yVal, int zVal, char atVal);
       ~Child();
       void print();
};

//If we don't actually call the Parent() constructor, 
// it (the default constructor) will be called automatically
    Child::Child() : Parent(), atSign{'@'} {
    cout << "In Child default constructor" << endl;
}

Child::Child(int xVal, int yVal, int zVal, char atVal)
    //: x(xVal), y(yVal), z(zVal), atSign(atVal)  // can't do this for child class! Why not?
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

//******************************************

int main() {
    Parent  p;
    Parent* ptr = new Parent(55, 66, 77);
    p.print();
    ptr->print();

    cout << "*******************" << endl;

    Child c;
    Child* cptr = new Child(10, 20, 30, '#');
    c.print();
    cptr->print();

    //    Child d(11,21,31,'$');
    //    d.print();

    cout << "*******************" << endl;

    // hmmm... even though cptr points to a Child object, the
    // print method from Parent is called, not from Child;
    // need polymorphism -- will discuss soon!
    Parent* testptr = cptr;
    testptr->print();
    cptr->print();

    delete ptr; // does not get rid of the variable
                // just gives back the memory
    delete cptr;

    return 0;
}













