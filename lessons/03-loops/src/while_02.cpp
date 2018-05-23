#include <iostream>

int main(int argc, char** argv) {

  int a = 10; 
  int count = 0;
  
  while (a % 2 == 0) {
    count = count + 1;
  }

  std::cout << "The number " << a << " can be divided " << count
            << " times by 2\n";

  return 0;

}
