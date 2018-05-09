#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  double a = atof(argv[1]);
  double b = atof(argv[2]);

  double price = 1.04;
  double meter2ft = 3.28084;

  double a_ft = a * meter2ft;
  double b_ft = b * meter2ft;

  double area_ft = a_ft * b_ft;
  double total_cost = area_ft * price;

  std::cout << "The total maintainance cost is $" 
            << total_cost << " / day" << std::endl;
  return 0;
  
}
