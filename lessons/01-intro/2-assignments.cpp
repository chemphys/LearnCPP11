#include <iostream> // For std::cout

// This program will print the number of hours for a given number of days
int main () {

  // How many days?
  int days = 30;
  int hours;

  hours = days * 24;

  // Note that if we don't put the semicolon, the instruction just 
  // continues in the next line
  std::cout << "There are " << hours << " hours in " 
            << days << " days." << std::endl;

  return 0;

} // end of main function
