#include <iostream>
#include <cstdlib> 

int main() {

  int salary; // Dollars per hour
  int hours;  // Total amount of hours worked
  double percent_tax; // Percentage (0-100) taken from income as taxes
  
  salary = atoi(argv[1])
  hours = atoi(argv[2]);
  percent_tax = atoi(argv[3]);

  amount_gross = hours * salary;
  amount_after_tax = amount_gross * (100.0 - percent_tax) / 100.0;

  std::cout << "The money in your account after " << hours
            << " worked will be " << amount_after_tax 
            << " dollars." << std::endl;

  return 0;
  
}
