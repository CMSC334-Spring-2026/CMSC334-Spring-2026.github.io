#include <iostream>
using namespace std;

int main()
{

  int* myArray{new int[3]};

  for (int i = 0; i < 3; ++i) {
    myArray[i] = i;
  }

  int& myRef = myArray[0];

  myRef = myArray[1];
  
  

  cout << "********************" << endl;

  for (int i = 0; i < 3; ++i) {
    cout << myArray[i] << endl;
  }

  return 0;
}
