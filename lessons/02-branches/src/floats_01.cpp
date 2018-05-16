#include <iostream>
#include <iomanip>

int main() {

  double num1 = 0.06;
  double num2 = 0.25;
  double num3 = 1.0;
  double num4 = 0.48;

  std::cout << "Printing numbers as they are, without specified precision:\n"
            << "  Num1 = " << num1 << std::endl
            << "  Num2 = " << num2 << std::endl
            << "  Num3 = " << num3 << std::endl
            << "  Num4 = " << num4 << std::endl;

  std::cout << std::setprecision(30) 
            << "\nPrinting numbers with 30 digit precision:\n"  
            << "  Num1 = " << num1 << std::endl
            << "  Num2 = " << num2 << std::endl
            << "  Num3 = " << num3 << std::endl
            << "  Num4 = " << num4 << std::endl;

  return 0;
}
