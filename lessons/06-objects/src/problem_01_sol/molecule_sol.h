#ifndef MOLECULE_H
#define MOLECULE_H

#include <vector>
#include <string>

class Molecule {

  public:
    Molecule();
    Molecule(std::vector<double> xyz, std::vector<std::string> atnames);
    ~Molecule();

    void SetXyz(std::vector<double> xyz);
    void SetAtNames(std::vector<std::string> atnames);
    void SetNumAts(int n);

    std::vector<double> GetXyz();
    std::vector<std::string> GetAtNames();
    int GetNumAts();

  private:
    std::vector<double> xyz_;
    std::vector<std::string> atnames_;
    int n_;
};

#endif // MOLECULE_H
