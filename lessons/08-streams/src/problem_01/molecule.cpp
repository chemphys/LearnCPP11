#include "molecule.h"

Molecule::Molecule() {
  xyz_.clear();
  atnames_.clear();
  n_ = -1;
}

Molecule::Molecule(std::vector<double> xyz, std::vector<std::string> atnames) {
  xyz_ = xyz;
  atnames_ = atnames;
  n_ = atnames.size();
}

Molecule::~Molecule() { }

void Molecule::SetXyz(std::vector<double> xyz) {
  xyz_ = xyz;
}

void Molecule::SetAtNames(std::vector<std::string> atnames) {
  atnames_ = atnames;
}

void Molecule::SetNumAts(int n) {
  n_ = n;
}

std::vector<double> Molecule::GetXyz() {
  return xyz_;
}

std::vector<std::string> Molecule::GetAtNames() {
  return atnames_;
}

int Molecule::GetNumAts() {
  return n_;
}



