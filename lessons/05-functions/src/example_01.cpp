#include <iostream>
#include <cassert>

/*
 *  Function FeetAndInchToCm(double feet, double inch)
 *  Converts feet and inches to centimeters
 *  Inputs:
 *    - feet: double with the number of feet
 *    - inch: double with the number of inches
 */
double FeetAndInchToCm(double feet, double inch) {
  double cm = (feet * 12 + inch) * 2.54;
  std::cout << feet << " feet and " << inch << " inches are "
            << cm << " centimeters" << std::endl;
  return cm;
}

void TestFeetAndInchToCm() {
  // Check extreme values (like 0,0)
  assert(FeetAndInchToCm(0,0) == 0.0);

  // Check with one or the other one 0;
  assert(FeetAndInchToCm(0,1) == 2.54);
  assert(FeetAndInchToCm(1,0) == 30.48);

  // Check some random values:
  // Write the assertion to test 6 feet and 1 inch:
  // assert();

  std::cout << "Everything good!\n";
}

int main() {
  TestFeetAndInchToCm();
  return 0;
}
