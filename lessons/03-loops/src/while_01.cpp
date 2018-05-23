#include <iostream>

int main() {
  
  // Declare and initialize i to 1
  int i = 1;

  // Loop until i is equal to 10.
  while (i < 10) {
    // Print i
    std::cout << "Iteration " << i << " completed\n";
    // IMPORTANT. Update i inside the loop body, or we enter and infinite loop.
    i = i + 1;
  }

  return 0;
}
