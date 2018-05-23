#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  // Usage
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <number>\n";
    return 1;
  }

  // Get input
  int n = atoi(argv[1]);

  // Declare and initialize counters
  int i = 2;
  int count = 0;

  // Print the first part of the answer:
  // Don't put and end of line!
  std::cout << n << "=";
  // Loop while the divisor is smalle than the dividend
  while (i <= n) {
    // Loop while i is a divisor of n
    while (n % i == 0) {
      count++;
      n /= i;
    }
    
    // Check if count is 1 or >2, and print accordingly
    if (count == 1) {
      std::cout << i;
    } else if (count > 1) {
      std::cout << i << "^" << count;
    } // else don't print anything

    // Update i and reset count
    i++;

    // Check if this is the last iteration, and if not, add a *
    if (i <= n && count > 0) {
      std::cout << "*";
    }

    // Reset count
    count = 0;
  }

  // Print end of line
  std::cout << std::endl;

  return 0;
}




