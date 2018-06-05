#include <iostream>
#include <string>

/*
 *  Subroutine SayHello(std::string name)
 *  Prints "Hello" followed by the name
 *  Input:
 *    - name: string with the name
 */
void SayHello(std::string name) {
  std::cout << "Hello, " << name << std::endl;
  return;
}

int main() {
  // Declaring a name
  std::string username = "Marc";

  // Subroutine call with the argument
  SayHello(username);
  return 0;
}
