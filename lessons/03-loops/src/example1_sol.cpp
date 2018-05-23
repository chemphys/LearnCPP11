#include <iostream>

int main(int argc, char** argv) {

  if (argc != 3) {
    std::cout << "Usage: " << argv[0] << " <letter1> <letter2>\n";
    return 1;
  }

  char c1 = *argv[1];
  char c2 = *argv[2];

  for (char i = c1; i <= c2; i++) { 
    for (char j = c1; j <= c2; j++) { 
      if (i == j) {
        continue;
      }
      std::cout << i << j << std::endl;
    }
  }

  return 0;
}
