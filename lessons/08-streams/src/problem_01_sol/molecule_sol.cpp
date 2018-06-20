#include "molecule_sol.h"

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

void Molecule::LoadXyz(std::ifstream &ifs) {
  int n;
  ifs >> n;
  std::string dummy;
  ifs >> dummy;
  std::vector<double> xyz(3*n,0.0);
  std::vector<std::string> ats(n,"");
  for (int i =0; i < n; i++) {
    ifs >> ats[i] >> xyz[3*i] >> xyz[3*i + 1] >> xyz[3+i + 2];
  }
  xyz_ = xyz;
  n_ = n;
  atnames_ = ats;
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

void Molecule::WriteXyz(std::ofstream &ofs) {
  ofs << n_ << std::endl;
  ofs << "0.0" << std::endl;
  for (int i = 0; i < n_; i++) {
    ofs << std::setw(6) << atnames_[i]
        << std::scientific << std::setprecision(8)
        << std::setw(20) << xyz_[3*i + 0]
        << std::setw(20) << xyz_[3*i + 1]
        << std::setw(20) << xyz_[3*i + 2] << std::endl;
  }
}



