#include <iostream>
#include <fstream>
#include <string>

// This program reads an input file where each line of the input file
// consists of a string (name) and an integer score separated by a space.
// The program will compute and print the average of those scores.
//
// To compile this program:  g++ example.cpp -o example

int main(int argc, char* argv[]) {
    //std::cout << argc << std::endl;
    if (argc != 2) {
        // give a useful usage message
        std::cerr << "Usage: " << argv[0] << " [input file]" << std::endl;
        std::exit(1);
    }

    // open the input file for reading
    std::ifstream infile(argv[1]);

    if (!infile.is_open()) {  // or: if (!infile)

      // if file can't be opened, need to let the user know
        std::cerr << "Error: could not open file: " << argv[1] << std::endl;
        std::exit(1);
    }

    std::string name;
    int score = 0;

    int sum = 0;  // for keeping track of total of scores
    int cnt = 0;  // for keeping track of number of students

    // the boolean expression will become false whenever a next line (string
    // and int) cannot be read from the file, or if there is a type error
    // in reading...
    while (infile >> name >> score) {  // try to read the string & int together

      sum += score;
        cnt++;
    }

    // look up use of .fail() in ifstream to handle bad data type
    if (infile.fail() && !infile.eof()) {
        std::cerr << "Error: bad file format: " << argv[1] << std::endl;
        std::exit(1);
    }


    // print the average score
    std::cout << "Average is: "
        << static_cast<double>(sum) / cnt  // cast sum to a double
        << std::endl;

    return 0;
}

