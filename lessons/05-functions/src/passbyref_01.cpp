#include <iostream>

/*  Function AddOne(int num)
 *  Adds one to num and returns the old value
 *  Inputs:
 *    - num: integer to which we will add one
 *  Outputs:
 *    - num: new value after adding 1
 */
int AddOne(int num) {
  // Saving old number
  int num_old = num;

  // Checkpoint B

  // Updating num
  num++;

  // Checkpoint C

  // Return old number
  return num_old;
}

int main() {
  int number = 10;
  int result;

  // Checkpoint A

  // After this call, result should be 10 and number 11
  result = AddOne(number);

  // Checkpoint D
  // Print results:
  std::cout << "number = " << number << std::endl;
  std::cout << "result = " << result << std::endl;

  return 0;
}
