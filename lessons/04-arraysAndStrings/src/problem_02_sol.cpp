#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main (int argc, char** argv) {

  if (argc != 3) {
    std::cout << "Usage: " << argv[0] << " <\"string1\"> <\"string2\"> \n";
    return 1;
  }

  std::string s1(argv[1]);
  std::string s2(argv[2]);

  ///////////////////////////////////////////////////
  // Write your code here

  // Copy of s2:
  std::string s2_cp = s2;

  // Convert both strings to lower case for comparison
  std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  std::transform(s2.begin(), s2.end(), s2_cp.begin(), ::tolower);

  // Loop over all letters in s1
  for (size_t i = 0; i < s1.length(); i++) {
    std::string l = s1.substr(i,1);
    while (true) {
      // Check if the string is there, and where is it
      int k = s2_cp.find(l);
      if (k >= 0) {
        // Update the strings
        s2.replace(k,1,"");
        s2_cp.replace(k,1,"");
      } else {
        // If k < 0, we exit
        break;
      }
    }
  }
  
  
  ///////////////////////////////////////////////////
  
  std::cout << "The string left is \"" << s2 << "\"\n";

  return 0;
}
