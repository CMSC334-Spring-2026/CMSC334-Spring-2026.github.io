#include <iostream>
using namespace std;

class Parent {
private:   int x;  

public:
  
  Parent();
  Parent(int xVal);
  ~Parent();

  void print();
  int getX() { return this->x; }
};

Parent::Parent() : x{0} {
  cout << "In Parent default constructor" << endl;
}

Parent::Parent(int xVal): x{xVal} {
  cout << "In Parent typical-use constructor" << endl;
}

Parent::~Parent() {}

void Parent::print() {
  cout << "In Parent's print statement" << endl;
  cout << "x = " << this->x << endl;
}

int main() {

  Parent p;
  return 0;

}
