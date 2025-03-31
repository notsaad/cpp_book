#include <iostream>

// function prototypes
bool accept();

int main() {
  std::cout << "Hello, World!\n";
  std::cout << "size of int is: " << sizeof(int) << " bytes\n";
  bool answer = accept();
  std::cout << "answer: " << answer << "\n";
  return 0;
}

/*
fundamental types in c++
- bool: 1 byte
- char: 1 byte
- int: 4 bytes
- double: 8 bytes

constants:
- const: "constant that does not have guaranteed compile time evaluation"
- constexpr: "constant that has guaranteed compile time evaluation"
- for a function to be usable in a constant expression, it has to be an expression that will be evaluated at compile time - constexpr used
*/

bool accept() {
  std::cout << "do you want to proceed? (y or n)\n";
  char answer = 0;
  std::cin >> answer;
  switch (answer) {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      std::cout << "unrecognized input, returning no\n";
      return false;
  }
}

