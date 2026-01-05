
#include <iostream>
#include <fstream>

void error(std::string msg, std::string arg) {

  std::cerr << msg << arg << std::endl;
  exit(1);
  
}

int main (int argc, char* argv[]) {

  // appropriately check for # of CLAs

  std::ofstream outfile{argv[1]};
  if (!outfile) {
    error("Unable to open file: ", argv[1]);
  }

  for (int i = 0; i < 10; ++i) {

    outfile << (866 + 1) << " - " << (530 *10 + 9 + i);
    outfile << std::endl;

  }

  outfile.close();
}
