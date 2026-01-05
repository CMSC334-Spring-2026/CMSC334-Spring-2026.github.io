#include <iostream>
#include <string>
#include "Integer.h"

using namespace std;

int main()
{
    Integer a;
    Integer b(5);
    Integer c(8);
    Integer d(c);

    cout << a.intValue() << endl;
    cout << b.intValue() << endl;
    cout << c.intValue() << endl;
    cout << d.intValue() << endl;

    cout << "******************" << endl;

    //a = b = c = 7;
    a.operator=( b.operator=(c) );

    cout << a.intValue() << endl;
    cout << b.intValue() << endl;
    cout << c.intValue() << endl;
    cout << d.intValue() << endl;

    cout << "******************" << endl;

//    cout << (a == b) << endl;

    string s("38");

    a = s;
    cout << a.intValue() << endl;

    return(0);
}
