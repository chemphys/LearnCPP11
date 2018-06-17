#include <iostream>

int main() {
  
  int i = 2;
  int j = i;
  int * ptr1 = &i;
  int * ptr2 = ptr1;
  
  // What is the value of *ptr2?
  std::cout << "*ptr2 = " << *ptr2 << std::endl;
  
  i = 3;
  // What is the value  of *ptr2?
  std::cout << "*ptr2 = " << *ptr2 << std::endl;
  
  // What is the value of j?
  std::cout << "j = " << j << std::endl;
  
  *ptr2 = j;
  
  // What is the value of *ptr1?
  std::cout << "*ptr1 = " << *ptr1 << std::endl;
  
  // What is the value of i?
  std::cout << "i = " << i << std::endl;
  
  ptr2 = &j;
  *ptr1 = 5;
  *ptr2 = *ptr1;
  
  // What is the value of i?
  std::cout << "i = " << i << std::endl;

  // What is the value of i?
  std::cout << "j = " << j << std::endl;

  return 0;
}
