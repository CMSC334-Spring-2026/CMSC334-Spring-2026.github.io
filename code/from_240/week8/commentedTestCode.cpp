

class TestClass{

public:
    TestClass(){
        str = new char[100];
    }
    ~TestClass(){}

  private:
    char* str;

};

int main() {
    //we are creating an automatic object of the ClassWithleakedMemory
    //when we will come out of the main, this object will be
    //out of scope. hence it will be deleted. so destructor will
    //be called. but in the destructor, we have not specifically
    //deleted the dynamically allocated string.

    //so the stack based pointer object str will be deleted but the   memory  
    //it was pointing to won't be deleted. so we will be left with an
    //unreferenced memory. that is memory leak.
    ClassWithLeakedMemory objectWithLeakedmemory;
    ClassWithNoLeakedMemory objectWithNoLeakedmemory;
    return 0;
}
