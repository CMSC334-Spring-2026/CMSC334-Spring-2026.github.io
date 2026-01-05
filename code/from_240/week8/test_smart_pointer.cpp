
#include <iostream>
#include <string>

void remodel(std::string& str) {

  std::string* ps = new std::string(str);

  str = *ps;

}
