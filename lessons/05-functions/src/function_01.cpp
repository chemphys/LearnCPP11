#include <iostream>

// This is the subroutine description
/*
 *  Subroutine SayHello()
 *  Prints "Hello"
 */
// subroutine declaration and definition
// This is a subroutine. It does not return anything
// Tha's why is called `void`
void SayHello() {
  // Instructions that are part of the subroutine
  std::cout << "Hello\n";
  // The return is optional, but it is always nice to have it.
  return;
}

// Main is a function that returns an integer!
int main() {
  // Subroutine call to SayHello
  SayHello();
  return 0;
}
