#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  // Check if we have two arguments
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <num1> <num2>\n";
    return 1;
  }

  // Declare and assign a and b
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  // Check if b is 0 and exit the function with error code 0
  if (b == 0) {
    std::cout << "The number " << a << " cannot be divided by 0\n";
    return 0;
  }

  // Check if a is multiple of b
  // Operator % returns the residue of a / b
  if (a % b == 0) {
    std::cout << a << " is a multiple of " << b << std::endl;
  } else {
    std::cout << a << " is not a multiple of " << b << std::endl;
  }

  return 0;
}
