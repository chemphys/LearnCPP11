#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <number>\n";
    return 1;
  }

  int a = atoi(argv[1]); 
  int count = 0;
  
  while (a % 2 == 0) {
    count = count + 1;
    a = a / 2;
  }

  std::cout << "The number " << a << " can be divided " << count
            << " times by 2\n";

  return 0;

}
