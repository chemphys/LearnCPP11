#include <iostream>
#include <vector>
#include <cstdlib>

int main (int argc, char** argv) {

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <N>\n";
    return 1;
  }

  // get n from command line
  int n = atoi(argv[1]);
  // vector where we will put the special numbers
  std::vector<int> special;

  // Generating random seed
  srand(1234567);

  // Creating the initial_vector with 5*n 
  std::vector<int> initial_vector(n);
  for (size_t i = 0; i < n; i++) {
    initial_vector[i] = rand() % (5*n) + 2; 
    std::cout << "initial_vector[" << i << "] = " 
              << initial_vector[i] << std::endl;
  }

  ///////////////////////////////////////////////////
  // Write your code here

  
  
  ///////////////////////////////////////////////////
  
  std::cout << "Special numbers: ";
  for (size_t i = 0; i < special.size(); i++) {
    std::cout << special[i] << " ";
  }
  
  std::cout << std::endl; 

  return 0;
}
