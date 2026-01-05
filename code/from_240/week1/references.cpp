#include <iostream>

// from C++ super faq:  https://isocpp.org/wiki/faq/references#overview-refs
//
// Reference: An alias (an alternate name) for an object.
//
// Important note: Even though a reference is often implemented
// using an address in the underlying assembly language, please
// do not think of a reference as a funny looking pointer to an
// object. A reference IS the object, just with another name.
// It is neither a pointer to the object, nor a copy of the
// object. It IS the object. There is no C++ syntax that lets
// you operate on the reference itself separate from the object
// to which it refers.

void doit(int x) { // pass-by-value
    x = 8675310;  // will not affect any variable back in main
}

void doit2(int* xptr) { // pass-by-reference using pointer

    *xptr = 8675309;                  // deref xptr, thereby changing a

    std::cout << xptr << std::endl;   // prints contents of xpter : address of a
    std::cout << &xptr << std::endl;  // prints address of xptr

    int zzz = 22;
    xptr = &zzz;   // can change where local xptr points, losing address of a
    *xptr = 33;    // this will change local variable zzz
}

void doit3(int& x) { // pass-by-reference

    // the reference parameter x cannot be decoupled from the argument
    // provided when this function is called -- it is an alias to that
    // argument; indeed, it _is_ that argument, and will have the same
    // address

    std::cout << "address of int& x: " << &x << std::endl;

    x = 1234567;  // will change the corresponding argument variable in main
   
}

int main() {

    int a = 5551212;

    doit(a);  // pass by value
    std::cout << a << std::endl;  // no change
    std::cout << "***************" << std::endl;
    doit2(&a); // pass by ref using pointer
    std::cout << a << std::endl;  // change occurs

    std::cout << "*************** doing reference" << std::endl;
    doit3(a);  // pass by ref using C++ reference
    std::cout << "address of a: " << &a << std::endl;  // compare to addy doit3's param
    std::cout << a << std::endl;  // change occurs

    doit3(5);

    int b = 0;
    doit3(b);  // same function w/ C++ reference can be used on multiple vars
    std::cout << b << std::endl;

  std::cout << "***************" << std::endl;

  int foo = 50;
  int& bar = foo;
  std::cout << foo << "\t" << bar << std::endl;
  
    

    return 0;
}







