#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <number>\n";
    return 1;
  }

  int nmax = atoi(argv[1]);

  int sum_num = 0;
  for (int i = 3; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum_num += i;
    }
  }

  std::cout << "Result: " << sum_num << std::endl;

  return 0;
}
