#include <iostream>

int main() {
    // So that we can just use cout and endl without std qualifier
    using std::cout;
    using std::endl;

    int a;
    a = 64;
    double b = 3.14159;
    char   c = '#';

    cout << a << " : " << b << " : " << c << endl;
    cout << sizeof(a) << " : " << sizeof(b) << " : " << 
        sizeof(c) << endl;

    //    (int*)        (double*)       (char*)
    cout << &a << " : " << &b << " : " << &c << endl;
        // cout will intepret char* as a C-style string
        // read character by character until reaches '\0'

    cout << &a << " : " << &b << " : " << static_cast<void*>(&c)
        << endl;
    //static_cast reverses an implicit type conversion.  Here we are
    //saying that we want the address of c to be considered a void pointer type,
    // rather than a string

    cout << "************************************" << endl;

    int* aptr;  // will hold a memory address pointing to an int
    aptr = &a;

    double* bptr = &b;
    char*   cptr = &c;
    //char*   cptr = static_cast<void*>(&c);

    cout << sizeof(aptr) << " : " << sizeof(bptr) << " : " <<
        sizeof(cptr) << endl;

    cout << aptr << " : " << bptr << " : " << cptr << endl;
    cout << aptr << " : " << bptr << " : " << 
        static_cast<void*>(cptr) << endl;

    cout << "************************************" << endl;

    cout << a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;  // dereference a pointer

    a = 128;
    cout << *aptr << endl;  // dereference a pointer

    int* x {&a};            // x points to a
    int z = 999;

    
    aptr = &z;              // aptr points to z (not to a anymore)

    *aptr = 256;            // z = 256
    cout << a << endl;      // a still has value 128

    *x = 512;               // x points to a, so a now has value 512
    cout << a << endl;

    cout << "************************************" << endl;

    *bptr = 2.718;          // bptr points to b, so b is now 2.718
    cout << bptr << endl;   // note that value of bptr has not changed
    cout << *bptr << endl;
    cout << b << endl;

    cout << "************************************" << endl;

    *cptr = 'w';            // cptr points to c, so c is now 'w'
    cout << cptr << endl;
    cout << cptr + 1 << endl;
    cout << *(cptr + 1) << endl;
    cout << "++++++++++++++" << endl;
    //    cout << static_cast<void*>(cptr) << endl;
    cout << *cptr << endl;
    cout << "++++++++++++++" << endl;
    cout << *cptr << endl;

    cout << aptr << endl;
    cout << *aptr << endl;  // remember a ptr points to z, which is 256

    cout << &aptr << endl;  // Note not the same as aptr.  It's aptr's address

    cout << *(&a) << endl;  //
    cout << a << endl;

    cout << *(&c) << endl;

    return 0;
}
