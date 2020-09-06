#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
int main(int argc, char *argv[]) {
  // program should take only two command line arguments.
  std::cout << "number of arguments provided are " << argc << std::endl;
  if ((argc - 1) != 2) {
    std::cerr << "Only two inputs arguments are allowed...Aborting the program";
    exit(EXIT_FAILURE);
  } else {
    std::string filename1, filename2;
    filename1 = argv[1];
    filename2 = argv[2];

    std::stringstream filename1s{filename1};
    std::stringstream filename2s{filename2};
    int n1, n2 = -1;
    std::string s1, s2;

    filename1s >> n1 >> s1;
    filename2s >> n2 >> s2;

    std::cout << n1 << " " << n2 << std::endl;
    std::cout << s1 << " " << s2 << std::endl;

    // Now that we have the two filenames with us, we need to check
    // whether first part is integer and second part is a valid extension
    // ('.png' or '.txt').
    // For checking the integer or not checking s1 and s2 for emptiness is
    // sufficient.
    if (s1.empty() || s2.empty()) {
      std::cout << "One of the inputs or both are in incorrect format..aborting"
                << std::endl;
      exit(EXIT_FAILURE);
    }
    if (!(s1.compare(".png") || s1.compare(".txt"))) {
      std::cout << "One of the inputs or both are in incorrect format..aborting"
                << std::endl;
      exit(EXIT_FAILURE);
    }
    if (!(s2.compare(".png") || s2.compare(".txt"))) {
      std::cout << "One of the inputs or both are in incorrect format..aborting"
                << std::endl;
      exit(EXIT_FAILURE);
    }
    // std::cout << "Both the arguments are valid and you can proceed..."
    //<< std::endl;

    // Note: in using compare() we need to remember that if strings are equal
    // then output will be zero.

    if (!s1.compare(".txt") && !s2.compare(".txt")) {
      // find the mean of the first and last number of the arguments.
      std::cout << "The output is " << (n1 + n2) / 2 << std::endl;
    } else if (!s1.compare(".png") && !s2.compare(".png")) {
      std::cout << "The output is " << (n1 + n2) << std::endl;
    } else if (!s1.compare(".txt") && !s2.compare(".png")) {
      std::cout << "The output is " << (n1 % n2) << std::endl;
    } else {
      std::cerr << "Program couldn't find the valid conditions thus aborting..."
                << std::endl;
      exit(EXIT_FAILURE);
    }
  }
}