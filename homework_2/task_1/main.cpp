#include <cstdlib>
#include <iostream>
#include <random>

int main() {
  // lets generate a random number and print it.

  int number;
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<int> dist(0, 99);

  while (1) {
    // first generate a random number
    int rnum = dist(mt);
    // Let's prompt the user to enter the number.
    std::cout << "Enter an integer between range [0,99]: " << std::endl;
    std::cin >> number;
    if (std::cin.fail()) {
      std::cout << "Error encountered, exiting..." << std::endl;
      exit(EXIT_FAILURE);
    } else {
      if ((number < 0) || (number > 99)) {
        std::cerr << "WARNING] : Number must be between 0 and 99" << std::endl;
      } else {
        if (number == rnum) {
          std::cout << "Your guess is correct..!" << std::endl;

          return EXIT_SUCCESS;
        } else if (number < rnum) {
          std::cout << "Your guess is less than answer" << std::endl;
          std::cout << "The generated random number is " << rnum << std::endl;
        } else {
          std::cout << "Your guess is greater than answer" << std::endl;
          std::cout << "The generated random number is " << rnum << std::endl;
        }
      }
    }
  }
}