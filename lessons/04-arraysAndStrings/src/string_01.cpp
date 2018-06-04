#include <iostream>
#include <string>
#include <cctype>

int main() {

  // Declare a string str1
  std::string str1;
  // Declare and initialize a string str2
  std::string str2 = "Marc";

  // Fill str1:
  str1.push_back('h');
  str1.append("ello ");

  // Concatenate str1 and str2
  std::string str_all = str1 + str2;
  
  // Extracting the fourth character of str_all
  char c = str_all[3];

  // Converting it to upper case and save it in string type
  std::string cs;
  cs.push_back(toupper(c));
  
  // Replace the fourth character by the uppercase version
  str_all.replace(3,1,cs);

  // Print final string:
  std::cout << "Final string is " << str_all << std::endl;

  return 0;
}
