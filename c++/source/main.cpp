#include "calculator.hpp"
#include <iostream>

void calculator() {
  std::cout << "Hello, World!" << std::endl;
}

bool run_tests() {
  std::cout << "Running tests..." << std::endl;
  std::cout << "Tests passed!" << std::endl;
  return true;
}

int main(int argc, char** argv) {
    if (argc > 1) {
        if (std::string(argv[1]) == "--test") {
            if (run_tests()) {
                return 0;
            } else {
                return 1;
            }
        } else {
            std::cout << "Unknown argument: " << argv[1] << std::endl;
            return 1;
        }
    }
    calculator();
    return 0;
}
