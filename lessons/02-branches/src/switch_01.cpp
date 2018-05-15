#include <iostream>

int main() {

  char num = '1'; // Note that a character is in between single quotes

  // Example 1: No actions for any case except the default
  std::cout << "Running example 1: No actions for any case except default\n";
  std::cout << "Current char = " << num << std::endl;
  switch (num) {
    case '1':
    case '2':
    case '8':
    case '9':
    default:
      std::cout << "Char " << num << " not found!\n";
      break;
  }

  // Example 2: Actions for all cases, but no breaks 
  std::cout << "\nRunning example 1: Actions for all cases but no breaks\n";
  std::cout << "Current char = " << num << std::endl;
  switch (num) {
    case '1':
      std::cout << "One\n";
    case '2':
      std::cout << "Two\n";
    case '8':
      std::cout << "Eight\n";
    case '9':
      std::cout << "NINENINENINE!\n";
    default:
      std::cout << "Char " << num << " not found!\n";
      break;
  }

  // Example 3: Actions for all cases, with breaks 
  std::cout << "\nRunning example 1: Actions for all cases with breaks\n";
  std::cout << "Current char = " << num << std::endl;
  switch (num) {
    case '1':
      std::cout << "One\n";
      break;
    case '2':
      std::cout << "Two\n";
      break;
    case '8':
      std::cout << "Eight\n";
      break;
    case '9':
      std::cout << "NINENINENINE!\n";
      break;
    default:
      std::cout << "Char " << num << " not found!\n";
      break;
  }


  return 0;
}
