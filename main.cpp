/*
  Neel Pandruvada
  12/3/24
  Math Problems
*/


#include <iostream>
#include <cmath>

int one();
double two();
int three();

int one() {
  return abs(10-12); // return absolute value of 10-12 because john lost his apples :(
}

double two() {
  return log(7); // return the natural log of 7 to find the exponent
}

int three() {
  return sqrt(25); // find square root of 25
}

int main() {
  std::cout << "John has 10 apples. He loses 12. What is the absolute value of his apples?\nJohn has " << one() << " apples" << std::endl;
  std::cout << "John is in math class. His test says that e^x=7. What is x?\nx = " << two() << std::endl;
  std::cout << "Atharva Tiggly Tafa gets his test back, but his score says it is the absolute value of the square root of 25. What percent did he get??????\n" << one() << "%" << std::endl;


  return 0;
}