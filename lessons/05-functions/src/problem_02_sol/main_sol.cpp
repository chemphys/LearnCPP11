#include <cstdlib>

#include "print_shapes_sol.h"

int main(int argc, char** argv) {
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <shape(t/s)> <height> [<char>]\n"
              << "  t --> Triangle\n"
              << "  s --> Square\n";
    return 1;
  }

  char shape = *argv[1];
  int height = atoi(argv[2]);
  
  if (argc == 4) {
    char character = *argv[3];
    if (shape == 't') {
      PrintTriangle(height, character);
    } else {
      PrintSquare(height, character);
    }
  } else {
    if (shape == 't') {
      PrintTriangle(height);
    } else {
      PrintSquare(height);
    }
  }

  return 0;
}
