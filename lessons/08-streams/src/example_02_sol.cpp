#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char** argv) {
  // Usage:
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <file.txt>\n";
    return 1;
  }

  // Declare input file stream 
  std::ifstream ifs;

  // Open them for reading
  ifs.open(argv[1]);

  // Check that is opened
  if (!ifs.is_open()) {
    std::cout << "Could not open file " << argv[1] << std::endl;
    return 1;
  }

  // Store number of points
  int n = 0;

  // read and print
  while (true) {
    double a = 1.0;
    ifs >> a;
    if (ifs.eof()) {
      if (n % 3 != 0) {
        std::cout << std::endl;
      }
      break;
    }
    std::cout << std::fixed << std::setw(20) 
              << std::showpoint << std::setprecision(5) << a;
    n++;
    if (n % 3 == 0) {
      std::cout << std::endl;
    }
  }

  // Close files
  ifs.close();

  return 0;
}
