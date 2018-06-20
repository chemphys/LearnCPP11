#include <string>
#include <iostream>
#include <fstream>

int main() {
  // Declare input and output file stream 
  std::ifstream ifs;
  std::ofstream ofs;

  // Open them for reading/writting
  // Since we will read from the src folder, and execute from the parent,
  // we need to add the relative path to the file.
  // The output will be written in the parent folder.
  ifs.open("src/reading_01_in.txt");
  ofs.open("reading_01_out.txt");

  // read and write
  while (ifs.good()) {
    double a,b;
    ifs >> a >> b;
    ofs << a + b << std::endl;
  }

  // Close files
  ifs.close();
  ofs.close();

  return 0;
}
