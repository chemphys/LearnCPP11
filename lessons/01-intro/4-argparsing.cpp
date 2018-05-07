#include <iostream> // For std::cout
#include <cstdlib> // For atoi (ascii to integer)

// This program will print the number of hours for a given number of days
int main (int argc, char** argv) {

  // How many days?
  // int days = 30; This is commented now.
  int days;
  int hours;

  days = atoi(argv[1]);

  hours = days * 24;

  // Note that if we don't put the semicolon, the instruction just 
  // continues in the next line
  std::cout << "There are " << hours << " hours in " 
            << days << " days." << std::endl;

  return 0;

} // end of main function
