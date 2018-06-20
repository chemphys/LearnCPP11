#include <iostream>
#include <cassert>

#include "molecule_sol.h"

int main() {
  std::ifstream ifs_m1;
  std::ifstream ifs_m2;
  std::ifstream ifs_m12;

  std::ofstream ofs_m1;
  std::ofstream ofs_m2;
  std::ofstream ofs_m12;

  ifs_m1.open("src/problem_01_sol/mol1.xyz");
  ifs_m2.open("src/problem_01_sol/mol2.xyz");
  ifs_m12.open("src/problem_01_sol/mols12.xyz");

  ofs_m1.open("mol1_out_sol.xyz");
  ofs_m2.open("mol2_out_sol.xyz");
  ofs_m12.open("mols12_out_sol.xyz");

  Molecule m1;
  Molecule m2;
  Molecule m1_2;
  Molecule m2_2;

  m1.LoadXyz(ifs_m1);
  m2.LoadXyz(ifs_m2);
  m1_2.LoadXyz(ifs_m12);
  m2_2.LoadXyz(ifs_m12);

  m1.WriteXyz(ofs_m1);
  m2.WriteXyz(ofs_m2);
  m1_2.WriteXyz(ofs_m12);
  m2_2.WriteXyz(ofs_m12);

  ifs_m1.close();
  ifs_m2.close();
  ifs_m12.close();

  ofs_m1.close();
  ofs_m2.close();
  ofs_m12.close();

  return 0;
}
