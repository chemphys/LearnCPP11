#include <iostream>

int main(int argc, char** argv) {
  
  // Usage printing if less than two arguments
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <char1> <char2>\n";
    return 0;
  }

  // Assigning the characters to c1 and c2
  char c1 = *argv[1];
  char c2 = *argv[2];

  // Checking if they are capital or lower case
  bool isLower1 = false;
  bool isLower2 = false;
  bool isCapital1 = false;
  bool isCapital2 = false;

  if (c1 >= 'A' && c1 <= 'Z') {
    isCapital1 = true;
  }
  
  if (c1 >= 'a' && c1 <= 'z') {
    isLower1 = true;
  }
  
  if (c2 >= 'A' && c2 <= 'Z') {
    isCapital2 = true;
  }
  
  if (c2 >= 'a' && c2 <= 'z') {
    isLower2 = true;
  }

  // Checking if they are letters
  bool isLetter1 = false;
  bool isLetter2 = false;

  if (isCapital1 || isLower1) {
    isLetter1 = true;
  }

  if (isCapital2 || isLower2) {
    isLetter2 = true;
  }

  // Printing in case one of them is not a letter
  if (!isLetter1) {
    std::cout << "ERROR: " << c1 << " is not a letter\n";
    return 0;
  } else if (!isLetter2) {
    std::cout << "ERROR: " << c2 << " is not a letter\n";
    return 0;
  }

  // Checking if they are both lower case or upper case
  if (isLower1 && isLower2) {
    std::cout << "The two letters " << c1 << " and " 
                                    << c2 << " are lowercase\n";
  } else if (isCapital1 && isCapital2) {
    std::cout << "The two letters " << c1 << " and "
                                    << c2 << " are capital\n";
  }

  return 0;
}
