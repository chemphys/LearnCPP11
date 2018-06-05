#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <shape(t/s)> <height> [<char>]\n"
              << "  t --> Triangle\n"
              << "  s --> Square\n";
    return 1;
  }

  return 0;
}
