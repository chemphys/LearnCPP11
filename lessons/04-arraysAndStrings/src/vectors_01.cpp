#include <iostream>
#include <vector>

int main() {

  // Declare a, uninitialized
  std::vector<int> a;

  // What will this print?
  std::cout << std::endl << "CHEKPOINT 1" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;

  // Resize the vector
  a.resize(3);
  
  // What will this print?
  std::cout << std::endl << "CHEKPOINT 2" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }

  // Add number 20 at the end
  a.push_back(20);
  
  // What will this print?
  std::cout << std::endl << "CHEKPOINT 3" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }
  
  // Resize the vector
  a.resize(3);

  // What will this print?
  std::cout << std::endl << "CHEKPOINT 4" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }

  // Resize the vector
  a.resize(6);
  for (size_t i = 0; i < a.size(); i++) {
    a[i] = i*i;
  }

  // What will this print?
  std::cout << std::endl << "CHEKPOINT 5" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;
  std::cout << "Last element is " << a.back() << std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }

  // Deleting elements
  a.pop_back();
  a.pop_back();

  // What will this print?
  std::cout << std::endl << "CHEKPOINT 6" << std::endl;
  std::cout << "Size of vector a is " << a.size() << std::endl;
  std::cout << "Last element is " << a.back() << std::endl;
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << "a[" << i << "] = " << a[i] << std::endl;
  }

}
