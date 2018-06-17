#include <iostream>
#include <string>

int main() {
  // Declare a standart string, as we have done before
  std::string s = "Hello";

  // Create a string pointer to point to the address of s
  std::string * s_ptr = &s;

  // Let's print the size of Hello using s:
  std::cout << "Printing size using the variable s.size():\n";
  std::cout << "Size of " << s << " is " << s.size() << std::endl;

  // Let's do the same but using s_ptr:
  std::cout << "Printing size using the variable s_ptr->size():\n";
  std::cout << "Size of " << *s_ptr << " is " << s_ptr->size() << std::endl;


  return 0;
}
