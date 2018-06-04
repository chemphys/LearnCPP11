#include <iostream>
#include <vector>

int main() {

  // Declare and initialize an array with 2D
  int a[][2] = { {1,2},
                 {5,8},
                 {3,1} };

  // Declare and initialize a 2D vector
  std::vector<std::vector<int> > b = { {1,2},
                                       {5,8},
                                       {3,1} };

  // b has length 3:
  std::cout << "Length of b is: " << b.size() << std::endl;

  // And each component of b has length 2:
  std::cout << "Length of b[0] is: " << b[0].size() << std::endl
            << "Length of b[1] is: " << b[1].size() << std::endl 
            << "Length of b[2] is: " << b[2].size() << std::endl;

  return 0;
}
