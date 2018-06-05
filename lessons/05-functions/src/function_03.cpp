#include <iostream>

/*
 *  Function AddOne(int num)
 *  Adds one to the number passed as argument
 *  Input:
 *    - num: integer to be increased by 1
 */
int AddOne(int num) {
  int x = num + 1;
  return x;
}

int main() {
  // Declaring a number
  int a = 1;
  int b;

  // Function call with the argument
  b = AddOne(a);

  // Printing result:
  std::cout << "AddOne(a=" << a << ") = " << b << std::endl;
  
  return 0;
}
