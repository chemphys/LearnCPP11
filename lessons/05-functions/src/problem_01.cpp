#include <iostream>
#include <string>
#include <cassert>

int RemoveLetters(std::string c, std::string s) {
  return 0;
}

////////////////////////////////////////////
// Do not modify the code below this line //
////////////////////////////////////////////

void TestRemoveLetters() {
  std::string s1 = "";
  std::string s2 = "a";
  std::string s3 = "abcabc";
  std::string s4 = "This is an entire sentence";
  std::string s5 = "Simple ? No.";

  std::string tmp;

  assert(RemoveLetters("a", s1) == 0);
  assert(s1 == "");

  assert(RemoveLetters("a", s2) == 1);
  assert(s2 == "");

  assert(RemoveLetters("a", s3) == 2);
  assert(s3 == "bcbc");

  assert(RemoveLetters("en", s4) == 3);
  assert(s4 == "This is an tire stce");

  assert(RemoveLetters(" ?", s5) == 1);
  assert(s5 == "Simple No.");

  std::cout << "All assertions passed.\n";
}

int main() {

  TestRemoveLetters();

  return 0;
}
