#include "print_shapes_sol.h"

void PrintTriangle(int size, char c) {
  int length = 2 * size - 1;
  for (int i = 0; i < size; i++) {
    int n = i + 1;
    std::string s;
    s.push_back(c);
    for (int j = 1; j < n; j++) {
      s.push_back(' ');
      s.push_back(c);
    }
    int nspaces = size - i - 1;
    std::string spaces(nspaces,' ');
    std::cout << spaces << s << std::endl;
  }
}

void PrintSquare(int size, char c) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) { 
      std::cout << c << ' ';
    }
    std::cout << std::endl;
  }
}
