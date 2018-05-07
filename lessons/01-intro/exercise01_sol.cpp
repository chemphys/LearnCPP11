#include <iostream>
#include <cstdlib> 

int main(int argc, char** argv) {

  double salary; // Dollars per hour
  double hours;  // Total amount of hours worked
  double percent_tax; // Percentage (0-100) taken from income as taxes
  
  salary = atof(argv[1]);
  hours = atof(argv[2]);
  percent_tax = atof(argv[3]);

  double amount_gross = hours * salary;
  double amount_after_tax = amount_gross * (100.0 - percent_tax) / 100.0;

  std::cout << "The money in your account after " << hours
            << " worked will be " << amount_after_tax 
            << " dollars." << std::endl;

  return 0;
  
}
