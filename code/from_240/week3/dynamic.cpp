#include <iostream>
using namespace std;

int main() {

    int x{5}; // allocate an automatic (on stack)
    int* xptr{&x};
    *xptr = 6;

    int* yptr = new int;  // allocate dynamically on heap (free store)
    *yptr = 8675309;
    cout << *yptr << endl;
    
    delete yptr;  // does not get rid of yptr variable;
                  // only gives back the dynamically allocated memory
    yptr = nullptr;

    // I should not try to use *yptr until it is reassigned to
    // legitimate memory.

    yptr = &x;  // pointing to automatic so don't delete!
    cout << *yptr << endl;
    //delete yptr;  // bad!

    // From stack overflow:
    /*  Invoking delete on a pointer not allocated dynamically using new is something called Undefined Behavior. In short, it means that anything on the earth can happen when such a code is executed and you can't complaint a bit to anyone on this planet.
     */
    
    // dynamically allocate space for an array of ten ints on heap
    int* xptr2 = new int[10];
    for (int i = 0; i < 10; i++) {
        xptr2[i] = i;
        
        // Note that even though sizeof(int) is 4 bytes, we
        // don't need to account for that in the dereference expression
        cout << *(xptr2 + i) << endl;
    }

    cout << *(xptr2 + 1000000000) << endl;
    cout << xptr2 << endl;
    cout << xptr2 + 1 << endl;
    
    delete[] xptr2;

    return 0;
}





