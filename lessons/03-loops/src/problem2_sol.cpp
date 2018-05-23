#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  // Usage
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <number>\n";
    return 1;
  }

  // Get input
  long long int n = atoll(argv[1]);

  // Declare and initialize counters
  long long int i = 2;
  long long int large = 2;

  // Loop while the divisor is smalle than the dividend
  while (i <= n) {
    // Loop while i is a divisor of n
    while (n % i == 0) {
      n /= i;
    }
    
    large = i;

    // Update i
    i++;

  }

  // Print end of line
  std::cout << "Largest prime number is " << large << std::endl;

  return 0;
}




