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

  char c = argv[1][0];
  int i = 0;
  while (c != '\0') {
    if (c != ' ') {
      numer_of_letters++;
    }
    c = argv[1][++i];
  }

  ////////////////////////////////////
  
  std::cout << "The text \"" << argv[1] << "\" has " << numer_of_letters
            << " characters that are not a space\n";

  return 0;

}
