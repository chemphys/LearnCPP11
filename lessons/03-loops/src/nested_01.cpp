#include <iostream>

int main() {
  
  // Loop until i is equal to 10, increasing i by 2 each iteration.
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      // Print i
      std::cout << "Iteration with i = " << i
                << " and j = " << j << " completed\n";
    }
  }

  return 0;
}
