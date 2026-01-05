#include <iostream>
#include "MyContainer.h"  // now a templated class
#include "Student.h"

using namespace std;

int main()
{
    MyContainer<int> mc;  // container of int

    cout << "Initial size: " << mc.size() << endl;
    for (int i = 0; i < 5; i++)
    {
        mc.add(i + 10);
    }
    cout << "Ending size: " << mc.size() << endl << endl;

    cout << "Print each element using .get():" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": " << mc.get(i) << endl;
    }
    cout << endl;

    cout << "Print all elements using .print(), i.e., via iterator:" << endl;
    mc.print();

    cout << "========================================" << endl;

    MyContainer<char> mc2;

    for (int i = 0; i < 5; i++)
    {
        mc2.add('a' + i);
    }

    mc2.print();

    cout << "========================================" << endl;

    MyContainer<Student> mc3;

    Student a("Andre");
    Student b("Casey");
    Student c("Eleazer");
    Student d("Ashley");

    mc3.add(a);
    mc3.add(d);
    mc3.add(b);
    mc3.add(c);

    //mc3.print();
    

    for (int i = 0; i < mc3.size(); i++)
    {
        cout << mc3.get(i).getName() << endl;

    }


    return 0;
}
