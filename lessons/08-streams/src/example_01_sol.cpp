#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

int main() {
  // Declare input file stream 
  std::ifstream ifs;

  // Open them for reading
  ifs.open("src/example_01_in.txt");

  // Declare rmsd to add up and number of data points
  double rmsd = 0.0;
  int n = 0;

  // read and add the squared of the errors
  while (true) {
    double a,b;
    ifs >> a >> b;
    if (ifs.eof()) {
      break;
    }
    rmsd += (a - b) * (a - b);
    n++;
  }

  // Divide RMSD by n and square root it
  rmsd = sqrt(rmsd / n);

  // Close files
  ifs.close();

  // Print result:
  std::cout << std::scientific << std::setprecision(4) << rmsd << std::endl;

  return 0;
}
