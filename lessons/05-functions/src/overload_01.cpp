#include <iostream>
#include <vector>

// Function that adds two vectors element by element
std::vector<double> AddNumbers(std::vector<double> v1,
                               std::vector<double> v2);

// Function that adds two doubles
double AddNumbers(double a, double b);

int main() {

  std::vector<double> v1(3,2.0);
  std::vector<double> v2(3,1.0);
  std::vector<double> resultv;

  double a = 3.0;
  double b = 1.0;
  double resultd;

  std::cout << "Starting AddNumbers with vectors\n";

  resultv = AddNumbers(v1,v2);

  std::cout << "Starting AddNumbers with doubles\n";

  resultd = AddNumbers(a,b);

  return 0;
}

std::vector<double> AddNumbers(std::vector<double> v1,
                               std::vector<double> v2) {

  std::cout << "Entered AddNumbers with vectors\n";
  std::vector<double> c(3,0.0);
  for (size_t i = 0; i < v1.size(); i++) {
    c[i] = v1[i] + v2[i];
  }

  return c;
}

double AddNumbers(double a, double b) {
  std::cout << "Entered AddNumbers with doubles\n";
  double c = a + b;
  return c;
}
