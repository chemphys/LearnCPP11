#include <iostream>

int main() {

  // Declare an integer variable
  int i;

  // Declare an integer pointer
  int * iptr;

  // Assign 3 to the integer variable
  i = 3;

  // Assign the address of i to iptr
  iptr = &i;

  // Print what everything contains:
  std::cout << "Variable i = " << i
            << " and pointer iptr = " << iptr << std::endl;

  // Declare another integer variable
  int j;

  // Assign to j the value of the memory address of iptr
  j = *iptr;

  std:: cout << "Variable j = " << j 
             << " and its address is " << &j << std::endl;

  return 0;  

}
