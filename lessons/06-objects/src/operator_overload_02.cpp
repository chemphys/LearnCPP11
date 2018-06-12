#include <iostream>
#include <cassert>

// Class declaration
class FtIn {
  public:
    FtIn();
    FtIn(double ft, double in);

    ~FtIn();

    void SetFeet(double ft);
    void SetInch(double in);

    // Operator definition
    // We will overload the operator `+`
    // When we do a + b, a is going to be the class itself, 
    // and b is going to be my_FtIn 
    // The operator returns a variable of the class FtIn with the result
    FtIn operator+(FtIn my_FtIn);

    double GetInch();
    double GetFeet();
    void Print();

  private:
    double in_;
    double ft_;
};

//Class Definitions
FtIn::FtIn() {
  ft_ = 0.0;
  in_ = 0.0;
}

FtIn::FtIn(double ft, double in) {
  ft_ = ft;
  in_ = in;
}

FtIn::~FtIn(){ }

void FtIn::SetFeet(double ft) {
  ft_ = ft;
}

void FtIn::SetInch(double in) {
  in_ = in;
}

double FtIn::GetInch() {
  return in_;
}

double FtIn::GetFeet(){
  return ft_;
}

void FtIn::Print() {
  std::cout << ft_ << " ft, " << in_ << " in" << std::endl;
}

// Operator + overload:
FtIn FtIn::operator+(FtIn my_FtIn) {
  FtIn result;
  
  result.ft_ = ft_ + my_FtIn.ft_;
  result.in_ = in_ + my_FtIn.in_;

  return result;
}

int main() {

  FtIn a(1.0,2.0);
  FtIn b(3.0,1.1);
  FtIn c(3.0,1.1);

  std::cout << "Printing a:\n";
  a.Print();
  
  std::cout << "Printing b:\n";
  b.Print();

  std::cout << "Printing c:\n";
  c.Print();

  std::cout << "Add them and print result\n";
  FtIn result = a + b; 
  result.Print();
  
  std::cout << "Starting assertions...\n";
  assert(a > b == false);
  assert(a < b == true);
  assert(b > c == false);
  assert(b < c == false);

  std::cout << "All assertions passed!\n";
  return 0;
}

