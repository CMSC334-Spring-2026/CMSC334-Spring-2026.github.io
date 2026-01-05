
int main() {
    Parent  p;
    Parent* ptr = new Parent(55, 66, 77);
    Parent p2 = Parent(444,33,28);
    p2.print();
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













