#include <iostream>

int main() {

  // Define the variables a and b
  int a = 0;
  int b = 1;

  // Check if they are not equal
  if (a != b) {
    // Print on screen that they are not equal
    std::cout << a << " and " << b << " are not equal\n";
  } else {
    // Print on screen that they are equal
    std::cout << a << " and " << b << " are equal\n";
  }

  // Update a to be same as b
  a = 1;

  // Check if they are not equal
  if (a != b) {
    // Print on screen that they are not equal
    std::cout << a << " and " << b << " are not equal\n";
  } else {
    // Print on screen that they are equal
    std::cout << a << " and " << b << " are equal\n";
  }

  return 0;
}
