#include <iostream>
#include <string>
using namespace std;

int main() {
    string cppStyle = "Lilly McSilly";
    //                ^^^^^^^^^^^^^^^  c-style string <literal>
    cout << cppStyle << endl;

    //char* cStyle = cppStyle.c_str();  // compilation not allowed!
    
    const char* cStyle = cppStyle.c_str();
    cout << cStyle << endl;
    cout << &cppStyle << endl;
    
    //char* cStyle2 = "Lilly McSilly";  
    //cStyle2[0] = 'M';  // this will lead to bus error
    //Why? Because a string literal is immutable (it's const) and
    //the line changing the first char to 'M' is thus changing a const
    //value.  Modifying a const string literal via a pointer is undefined behavior.

    char cStyle2[] = "Lilly McSilly";  // this will make a local copy for us
    cout << &cStyle2[0] << endl;
    cStyle2[0] = 'M';
    // The string literal here is stored inside the array.  You can change that.
    cout << cStyle2 << endl;

    cout << "==========================" << endl;

    const char* cStyle3 = "Lilly McSilly";
    const char* cStyle4 = "Lilly McSilly";

    cout << cStyle3 << endl;  // note: prints as a C-style string
    cout << cStyle4 << endl;
    cout << *cStyle3 << endl; // note: dereferences to get a single char

    cout << &cStyle3 << endl; // this is the address of the variable cStyle3
    cout << &cStyle4 << endl; // this is the address of the variable cStyle4

    // note: prints as the address of the string literal -- note that
    // the addresses (to the string literal) are the same
    cout << static_cast<const void*>(cStyle3) << endl;
    cout << static_cast<const void*>(cStyle4) << endl;

    cout << "==========================" << endl;

    char cStyle5[10] = "foo";  // C++ will put the \0 in for us

    // So what gives with the -97?
    //cStyle5[3] = 63;
    cStyle5[5] = 'H';
    cStyle5[4] = '!';
    cStyle5[6] = 'i';
    cStyle5[9] = '@';
    //	cStyle5[4] = 'A';

    for (int i = 0; i < 10; i++)
    {
        cout << cStyle5[i] << " -- " 
             << static_cast<int>(cStyle5[i]) << endl;
    }
    cout << "<" << cStyle5 << ">" << endl;

    cout << "==========================" << endl;

     // pointer arithmetic
    char* cptr = cStyle5;
    cout << cptr << endl;
    cptr++;  // "add 1", but it depends on the pointer type
    cout << cptr << endl;
    cptr++;  // "add 1", but it depends on the pointer type
    cout << cptr << endl;
    cptr++;  // "add 1", but it depends on the pointer type
    cout << cptr << endl;
    cptr++;  // "add 1", but it depends on the pointer type
    cout << cptr << endl;
    cptr++;  // "add 1", but it depends on the pointer type
    cout << cptr << endl;

    return 0;
}













