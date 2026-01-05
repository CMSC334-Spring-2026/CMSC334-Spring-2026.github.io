#include <iostream>
using namespace std;

int main()
{
    int foo[3];
    foo[0] = 1;
    foo[1] = 2;
    foo[2] = 3;

    int* fooptr = foo;
    cout << foo << endl;     // address of start of array
    cout << fooptr << endl;  // address of start of array
    cout << &foo[0] << endl;  // address of first element of array

    cout << "++++++++++++++++++++++++++" << endl;
    
    for (int i = 0; i < 3; i++) {
      cout << foo[i] << " ";
    }
    cout << endl;

    // next two examples each set first entry in array
    foo[0] = 8675309;
    for (int i = 0; i < 3; i++) {
      cout << foo[i] << " ";
    }
    cout << endl;

    cout << "++++++++++++++++++++++++++" << endl;

	
    *fooptr = 5551212;
    for (int i = 0; i < 3; i++) {
      cout << foo[i] << " ";
    }
    cout << endl;

    cout << "++++++++++++++++++++++++++" << endl;
    
    // next two each set the third entry in array
    // note that even though foo[2] is 8 bytes from foo[0], we don't
    // have to do *(fooptr + 8).  When the pointer arithmetic is done,
    // the runtime system multiplies the "2" by 4, because fooptr is a pointer
    // to a 4 byte type (int in this case)

   
    *(fooptr + 2) = 123456789;
    for (int i = 0; i < 3; i++) { cout << foo[i] << " "; } cout << endl;

    cout << "1++++++++++++++++++++++++++" << endl;
    
    fooptr[2] = 666;
    for (int i = 0; i < 3; i++) { cout << foo[i] << " "; } cout << endl;

    cout << "2++++++++++++++++++++++++++" << endl;

    
    // will set first entry in the array, and then advance the pointer
    // to point to the second entry in the array (fooptr++ returns the value
    // of fooptr before incrementing)
    *(fooptr++) = 123456789;
    for (int i = 0; i < 3; i++) { cout << foo[i] << " "; } cout << endl;

    // note fooptr++ increased value of fooptr by 4, not by 1
    cout << fooptr << endl;

    cout << "3++++++++++++++++++++++++++" << endl;

    
    // will advance the pointer to point to the next entry in the array,
    // and then set the entry at that position (++fooptr returns the value
    // of fooptr after incrementing)

    *(++fooptr) = 123456789;
    ++fooptr;
    cout << *fooptr << endl;
    for (int i = 0; i < 3; i++) { cout << foo[i] << " "; } cout << endl;

    cout << "4++++++++++++++++++++++++++" << endl;

    
    char mychar = 'A';
    
    char* charptr = &mychar;
    cout << static_cast<void*>(charptr) << endl;
    
    // Note that because charptr is a pointer to char, incrementing it
    // using ++ only adds 1 to charptr
    ++charptr;
    cout << static_cast<void*>(charptr) << endl;

    cout << "5++++++++++++++++++++++++++" << endl;

    string mystring[4];
    mystring[0] = "Frosty is a very very good boy!"; // length 32 (including null byte)
    mystring[1] = "A very good boy!";      // length 17
    mystring[2] = "Really!"; //length 8
    mystring[3] = "I'm not kidding!"; //
    string* myStringPtr = &mystring[0];
    cout << myStringPtr << endl;
    cout << &mystring[0] << endl;
    cout << *myStringPtr << endl;
    cout << sizeof(mystring[0]) << endl;
    ++myStringPtr;
    cout << myStringPtr << endl;
    cout << &mystring[1] << endl;
    cout << *myStringPtr << endl;
    ++myStringPtr;
    cout << myStringPtr << endl;
    cout << &mystring[2] << endl;
    cout << *myStringPtr << endl;
    ++myStringPtr;
    cout << myStringPtr << endl;
    cout << &mystring[3] << endl;
    cout << *myStringPtr << endl;

    //a8 - 90 = (16*10 + 8) - (9*16) = 24
    //c0 - a8 = (16*12) - ( 168) = 24 as well.
    //d8 - c0 = (16*13 + 8) - 192 = 24

}
