#include <iostream>

void Print3Char(char c = 'o') {
  std::cout << c << c << c << std::endl;
  return;
}

int main() {
  std::cout << "Calling Print3Char()\n";
  Print3Char();

  std::cout << "Calling Print3Char('a')\n";
  Print3Char('a');

  return 0;
}
