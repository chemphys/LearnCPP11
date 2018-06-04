#include <iostream>

int main(int argc, char** argv) {

  // Usage
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <word less than 80 characters>\n";
    return 1;
  }

  // Storing the word
  // Braces {} are to initialize word
  // Asterisc * is to dereference argv[1]  
  char word[80] = {*argv[1]};
  
  // Print the first letter of the word
  std::cout << "First letter of word: " << word[0] << std::endl;
  std::cout << "First letter of argv[1]: " << argv[1][0] << std::endl;

  return 0;

}
