#include <iostream>
#include <vector>
#include <chrono> // for timing, need c++11

/*  double GetVectorSum(std::vector<double> v)
 *  Adds all the elements of a vector
 *  Return: sum of all the elements of a vector
 *  Inputs:
 *    - v: double vector which elements will be added
 */
// Copy 1 of the function where v is passed by value
double GetVectorSumByVal(std::vector<double> v) {
  double sum = 0.0;
  // Adding elements
  for (size_t i = 0; i < v.size(); i++) {
    sum += v[i];
  }

  return sum;

}

double GetVectorSumByRef(std::vector<double> &v) {
  double sum = 0.0;
  // Adding elements
  for (size_t i = 0; i < v.size(); i++) {
    sum += v[i];
  }

  return sum;

}

int main() {

  // Defining vector definitions
  size_t N = 10;
  double x = 1.0;

  // Declaring vector
  std::vector<double> v(N,x);

  // Timing the calls

  //////////////////// N=10, By Value /////////////////////////////////////////

  long long int t1 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  double sum = GetVectorSumByVal(v);

  long long int t2 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  std::cout << "Sum of elements of v (by val, N=10) = " << sum << std::endl;
  std::cout << "Total time: " << t2 -t1 << " us\n";

  //////////////////// N=10, By Refererence ////////////////////////////////////

  t1 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  sum = GetVectorSumByRef(v);

  t2 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  std::cout << "Sum of elements of v (by ref, N=10) = " << sum << std::endl;
  std::cout << "Total time: " << t2 -t1 << " us\n";

  // Change size of v
  N = 10000000;
  
  // Declaring vector
  std::vector<double> v2(N,x);

  //////////////////// N=1E+07, By Value ///////////////////////////////////////

  t1 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  sum = GetVectorSumByVal(v2);

  t2 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  std::cout << "Sum of elements of v2 (by val, N=1E+07) = " << sum << std::endl;
  std::cout << "Total time: " << t2 -t1 << " us\n";

  //////////////////// N=1E+07, By Reference ///////////////////////////////////

  t1 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  sum = GetVectorSumByRef(v2);

  t2 = std::chrono::duration_cast<std::chrono::microseconds>(
    std::chrono::system_clock::now().time_since_epoch()).count();

  std::cout << "Sum of elements of v2 (by ref, N=1E+07) = " << sum << std::endl;
  std::cout << "Total time: " << t2 -t1 << " us\n";

  return 0;
}
