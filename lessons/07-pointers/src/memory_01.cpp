#include <iostream>

static const int TEN = 10;
static int TWO = 2;

int IncreaseTWO() {
  return TWO++;
}

int main() {
  std::cout << "At the beggining, TWO = " << TWO << std::endl;
  std::cout << "At the beggining, TEN = " << TEN << std::endl;

  int a = IncreaseTWO();
  
  std::cout << "We called IncreaseTWO() and stored the result in a\n"
            << "Now a = " << a << " and TWO = " << TWO << std::endl;
  
  std::cout << "If we try to modify TEN, which is a constant, "
            << "we will get a compilation error.\n";
  
  return 0;
}
