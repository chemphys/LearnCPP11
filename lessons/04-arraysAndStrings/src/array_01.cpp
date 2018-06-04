#include <iostream>

int main() {

  // Declare the array of 3 integers
  int array1[3];
  
  // Initialize the values
  for (int i = 0; i < 3; i++) {
    array1[i] = i;
  }

  // Print the values from 0 to 4 (3 and 4 do not exists!)
  std::cout << "Array[0] = " << array1[0] << std::endl
            << "Array[1] = " << array1[1] << std::endl
            << "Array[2] = " << array1[2] << std::endl
            << "Array[3] = " << array1[3] << std::endl
            << "Array[4] = " << array1[4] << std::endl;

  return 0;

}
