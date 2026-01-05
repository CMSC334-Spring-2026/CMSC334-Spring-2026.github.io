#include <iostream>
using namespace std;

int main() {

    int x{5}; 
    int* xptr{&x};
    *xptr = 6;

    int* yptr = new int;  
    *yptr = 8675309;
    cout << *yptr << endl;
    
    delete yptr;  
    yptr = nullptr;

    

    yptr = &x;  
    cout << *yptr << endl;
    
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





