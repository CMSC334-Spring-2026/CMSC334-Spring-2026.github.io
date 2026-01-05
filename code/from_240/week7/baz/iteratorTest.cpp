#include <iostream>
#include <list>

int main()
{
    std::list<int> myList;

    myList.push_back(8);
    myList.push_back(6);
    myList.push_back(7);
    myList.push_back(5);
    myList.push_back(3);
    myList.push_back(0);
    myList.push_back(9);

    /*
            type
    |                      | iterator variable
    |                      | ||
    |                      | ||   point to start of list
    |                      | ||   |            |
    |                      | ||   |            |
    vvvvvvvvvvvvvvvvvvvvvvvv vv   vvvvvvvvvvvvvv    */
    std::list<int>::iterator it = myList.end();
    --it;
    while (it != myList.begin())
    {
        std::cout << *it << std::endl; // deref the iterator
        --it;  // advance the iterator
    }

    // TO USE ITERATOR IN TEMPLATE CLASS:

    // (1) need typename in front since <T>: http://www.cplusplus.com/forum/general/37217/
    // typename std::list<T>::iterator it = myList.begin();

    // (2) because get is defined as const, must use const_iterator not iterator
    //typename std::list<T>::const_iterator it2 = myList.begin();


    return 0;
}
