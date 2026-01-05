

#include <iostream>
#include <fstream>
#include <string>

void error(std::string msg, std::string arg) {

  std::cerr << msg << arg << std::endl;
  exit(1);
  
}

int main (int argc, char* argv[]) {

  // appropriately check for # of CLAs

  std::ifstream infile{argv[1]};
  if (!infile) {
    error("Unable to open file: ", argv[1]);
  }

  std::string number1;
  std::string number2;
  infile >> number1  >> number2;
  std::cout << number1 << " : " << number2 << std::endl;
  infile.close();
}
