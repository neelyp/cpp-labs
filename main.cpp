/**
 * Neel Pandruvada
 * 9/12/2024
 * Calculator program
 * extra: used functions for calculations
 */

#include <iostream>

float x, y;
char op;

float add(float x, float y)
{
  return x + y;
}

float sub(float x, float y)
{
  return x - y;
}

float mult(float x, float y)
{
  return x * y;
}

float div(float x, float y)
{
  return x / y;
}

int main()
{
  std::cout << "Enter the first number: " << std::endl;
  std::cin >> x;

  std::cout << "Enter the operation: " << std::endl;
  std::cin >> op;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> y;

  switch (op)
  {
  case '+':
    std::cout << add(x, y) << std::endl;
    break;
  case '-':
    std::cout << sub(x, y) << std::endl;
    break;
  case '/':
    std::cout << div(x, y) << std::endl;
    break;
  case '*':
    std::cout << mult(x, y) << std::endl;
    break;
  default:
    std::cout << "Your operation is invalid" << std::endl;
    break;
  }

  std::cout << x << " incremented is " << ++x << " and " << y << " incremented is " << ++y << std::endl;
  return 0;
}
