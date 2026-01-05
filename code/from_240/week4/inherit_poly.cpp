#include <iostream>
using namespace std;

class Parent {
    private:   int x;  // not directly accessible in derived classes
    protected: int y;
    public:    int z;

    // here is a comment

    Parent();
    Parent(int xVal, int yVal, int zVal);
    virtual ~Parent();
    inline int getX() { return this->x; }

    //void print();
  //   virtual void print();    // allows for polymorphism
  virtual void print() = 0;  // pure virtual -- Parent becomes an abstract class
                                     // (i.e., cannot declare instances of Parent)
};

Parent::Parent() : x(0), y(1), z(2) {
    cout << "In Parent default constructor" << endl;
}

Parent::Parent(int xVal, int yVal, int zVal)
: x(xVal), y(yVal), z(zVal) {
    cout << "In Parent typical-use constructor" << endl;
}

Parent::~Parent() {}

/*
void Parent::print() {
    cout << "In Parent's print statement" << endl;
    cout << "x = " << this->x
         << " y = " << this->y
         << " z = " << this->z << endl;
}
*/

//*******************************************

class Child : public Parent {
    private: 
        char atSign;

    public:
       Child();
       Child(int xVal, int yVal, int zVal, char atVal);
       ~Child();
       void print();
};

Child::Child() : Parent(), atSign('@') {
    cout << "In Child default constructor" << endl;
}

Child::Child(int xVal, int yVal, int zVal, char atVal)
    //: x(xVal), y(yVal), z(zVal), atSign(atVal)  // can't do this for child class!
: Parent(xVal, yVal, zVal), atSign(atVal) {
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
  
    cout << "x = " << this->getX() //this->x
         << " y = " << this->y
         << " z = " << this->z 
         << " atSign = " << this->atSign << endl;
  

    //print();  // this calls Child::print and will be an eventual stack melt!
    //  Parent::print();

    //    cout << " atSign = " << this->atSign << endl;
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

    cout << "*******************" << endl;

    // hmmm... even though cptr points to a Child object, the
    // print method from Parent is called, not from Child;
    // need polymorphism -- next time!
    Parent* testptr = cptr;
    testptr->print();  // calls Child::print when print is virtual
    cout << "---------------------------" << endl;
    cptr->print();     // calls Child::print
    cout << "---------------------------" << endl;

    // Child* testptr2 = ptr;  // can't do this -- derived class pointer pointing to
                                                        // base class object

    testptr = ptr;
    testptr->print();  // calls Parent::print

    cout << testptr << " : " << cptr << endl;

    delete ptr; // does not get rid of the variable
                // just gives back the memory
    delete cptr;

    return 0;
}













