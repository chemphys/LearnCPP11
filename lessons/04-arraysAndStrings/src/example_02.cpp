#include <iostream>
#include <vector>
#include <iomanip>

int main() {

  size_t N = 5;
  // Declare and initialize a 2D vector
  std::vector<std::vector<int> > b = { {1,2,4,5,3},
                                       {5,8,1,3,9},
                                       {5,2,1,2,3},
                                       {5,1,0,1,0},
                                       {3,1,1,0,3} };

  // Print initial matrix:
  std::cout << "Initial Matrix:\n";
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      std::cout << std::setw(3) << b[i][j];
    }
    std::cout << std::endl;
  }

  //////////////////////////////////////////
  // Write your code here


  //////////////////////////////////////////

  // Print tranposed matrix
  std::cout << std::endl << "Transposed Matrix:\n";
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      std::cout << std::setw(3) << b[i][j];
    }
    std::cout << std::endl;
  }
  
  return 0;
}
