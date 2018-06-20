#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>

class Molecule {

  public:
    Molecule();
    Molecule(std::vector<double> xyz, std::vector<std::string> atnames);
    ~Molecule();

    void SetXyz(std::vector<double> xyz);
    void SetAtNames(std::vector<std::string> atnames);
    void SetNumAts(int n);
    void LoadXyz(std::ifstream &ifs);

    std::vector<double> GetXyz();
    std::vector<std::string> GetAtNames();
    int GetNumAts();
    void WriteXyz(std::ofstream &ofs);

  private:
    std::vector<double> xyz_;
    std::vector<std::string> atnames_;
    int n_;
};

#endif // MOLECULE_H
