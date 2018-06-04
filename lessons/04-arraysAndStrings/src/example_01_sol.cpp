#include <iostream>
#include <vector>

int main() {

  std::vector<int> a = {1, 9, 3, 4, 0, 7};

  // This will be the inverted vector
  std::vector<int> b;

  //////////////////////////
  // Write your code here //
  
  for (size_t i = a.size(); i > 0 ; i--) {
     b.push_back(a[i - 1]);
  }
  
  //////////////////////////

  for (size_t i = 0; i < b.size(); i++) {
    std::cout << "b[" << i << "] = " << b[i] << std::endl;
  }

  return 0;
}
