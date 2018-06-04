#include <iostream>

int main(int argc, char** argv) {

  // Usage
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <text>\n";
    return 1;
  }

  int numer_of_letters = 0;

  ////////////////////////////////////
  // Write your code here



  ////////////////////////////////////
  
  std::cout << "The text \"" << argv[1] << "\" has " << numer_of_letters
            << " characters that are not a space\n";

  return 0;

}
