#include <iostream>

int main() {
  int * i_ptr = new int;

  *i_ptr = 3;

  std::cout << "*i_ptr = " << *i_ptr << std::endl;

  return 0;
}
