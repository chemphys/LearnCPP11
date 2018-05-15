#include <iostream>

int main() {

  int a = 10;
  int b = 1;

  if (a / b) {
    std::cout << a << " is a multiple of " << b << std::endl;
  } else {
    std::cout << a << " is not a multiple of " << b << std::endl;
  }

  return 0;
}
