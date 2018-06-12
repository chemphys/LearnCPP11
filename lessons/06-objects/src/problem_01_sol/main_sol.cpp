#include <iostream>
#include <cassert>

#include "molecule_sol.h"

int main() {
  std::vector<double> xyz1 = {0.0,0.0,0.0,1.0,0.0,0.0};
  std::vector<double> xyz2 = {0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0};

  std::vector<std::string> atnames1 = {"H","Cl"};
  std::vector<std::string> atnames2 = {"O","H","H"};

  Molecule m1;
  assert(m1.GetXyz().size() == 0);
  assert(m1.GetNumAts() == -1);

  m1.SetXyz(xyz1);
  m1.SetNumAts(2);
  m1.SetAtNames(atnames1);

  assert(m1.GetNumAts() == m1.GetAtNames().size());
  assert(m1.GetXyz() == xyz1);

  m1 = Molecule();
  assert(m1.GetXyz().size() == 0);
  assert(m1.GetNumAts() == -1);

  std::cout << "All assertions passed!!\n";

  return 0;
}
