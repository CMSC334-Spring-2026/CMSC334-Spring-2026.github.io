
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

  if (argc < 2) {
    cerr << "Error: Usage" << argv[0] <<
      " <first name> " << endl;
  } else {
    cout << "Hello " << argv[1] << endl;
  }
  return 0;
}


  
