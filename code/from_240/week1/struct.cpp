#include <iostream>
#include <string>

using namespace std;


// this will define a type
struct Dog {
    std::string name;
    std::string breed;
    int         age;
};

/* So why a struct and not a class?  Technically, there is only a small difference:
 * members and methods of a struct are public by default, and they publicly inherit from
 * the base class, if they inherit.  Members and methods of classes are private, and they inherit privately.  But there's
 * more to this.  See Jonathan Boccara's blog:
 * https://www.fluentcpp.com/2017/06/13/the-real-difference-between-struct-class/
 */

void print(Dog&);

int main() {
    Dog frosty;   // automatic variable -- on the stack

    // use . when accessing fields via non-pointer
    frosty.name = "Frosty";
    frosty.breed = "Golden Retriever";
    frosty.age = 9;

    print(frosty);

    //            (Dog*)
    //            VVVVVVV
    Dog* bailey = new Dog;  // dynamic allocation -- on the heap/free-store
                            // asking for enough space to store a Dog

    // use -> when accessing fields via pointer
    bailey->name = "Bailey";
    bailey->breed = "black lab";
    bailey->age = 16;

    print(*bailey);
    
    delete bailey;  // does not get rid of the variable;
                    // frees up the allocated memory
    // So we can use bailey again if we want...
    bailey = new Dog;

    print(frosty);
    
    Dog& dogRef = frosty;
    dogRef.name = "King Frosty";

    print(frosty);
    
    // dogRef = bailey;
    
    
    return 0;
}

void print(Dog& mydog) {
    
    cout << "\nName: " << mydog.name << "\nBreed: " << mydog.breed
    << "\nAge: " << mydog.age << "\n" << endl;
    
}


