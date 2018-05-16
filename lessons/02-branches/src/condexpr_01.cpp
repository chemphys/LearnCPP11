#include <iostream>

int main() {
  
  int x = 10;
  int y = 20;
  int var = (y % x == 0) ? 0 : 1;
  
  std::cout << "Example 1: var = " << var << std::endl;

  x = 5;
  y = 2;
  int z = 12;
  var = (z / y == x) ? 1 : (y < x) ? y : z;
  
  std::cout << "Example 2: var = " << var << std::endl;

  x = 5;
  y = 2;
  z = 12;
  var = (z % y || z % x) ? (y > x) ? x : y : 0;

  std::cout << "Example 3: var = " << var << std::endl;

  return 0;
}
