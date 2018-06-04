#include <iostream>
#include <string>

int main (int argc, char** argv) {

  if (argc != 3) {
    std::cout << "Usage: " << argv[0] << " <\"string1\"> <\"string2\"> \n";
    return 1;
  }

  std::string s1(argv[1]);
  std::string s2(argv[2]);

  ///////////////////////////////////////////////////
  // Write your code here

  
  
  ///////////////////////////////////////////////////
  
  std::cout << "The string left is \"" << s2 << "\"\n";

  return 0;
}
