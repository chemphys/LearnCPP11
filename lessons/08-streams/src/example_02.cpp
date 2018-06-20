#include <iostream>

int main(int argc, char** argv) {
  // Usage:
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <file.txt>\n";
    return 1;
  }

  return 0;
}
