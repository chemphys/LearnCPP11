#include <iostream>

int main(int argc, char** argv) {
  
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <num1> <num2>" << std::endl;
    return 0;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  bool isMagic = true; // modify this line

  if (isMagic) {
    std::cout << "Numbers " << a << " and " << b << " are not a magic pair"
              << std::endl;
  } else {
    std::cout << "Numbers " << a << " and " << b << " are a magic pair because:"
              << std::endl;
    std::cout << b << " is even" << std::endl;
    std::cout << b << " is lower than " << a << std::endl;
    std::cout << a << " is not a multiple of " << b << std::endl;
  }                   
  
  return 0;
}
