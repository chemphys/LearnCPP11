#include <iostream>

int main() {

  int i = 10;

  std::cout << "Value of i before printing i++: " << i << std::endl;
  std::cout << "Printing i++: " << i++ << std::endl;
  std::cout << "Value of i after printing i++: " << i << std::endl;

  std::cout << std::endl;

  std::cout << "Value of i before printing ++i: " << i << std::endl;
  std::cout << "Printing ++i: " << ++i << std::endl;
  std::cout << "Value of i after printing ++i: " << i << std::endl;

  return 0;
}
