/*
  Neel Pandruvada
  11/27/2024
  Pizza Pizza
  Extra: used pointers to return array
*/


#include <iostream>

double calcPrice(char size, int toppings, double* prices);
void bill(double price, char size, int toppings, double* prices);
double* prices(char size);

double* prices(char size) {
  double suzzPruzz = (size == 's') ? 9.99 : 14.99;
  double tuzzUnitPruzz = (size == 's') ? 1.20 : 1.50;

  double* prices_ = new double[2];
  prices_[0] = suzzPruzz;
  prices_[1] = tuzzUnitPruzz;

  return prices_;
}

double calcPrice(char size, int toppings, double* prices) {
  double suzzPruzz = prices[0];
  double tuzzUnitPruzz = prices[1];
  double tuzzPruzz = tuzzUnitPruzz * toppings;

  return tuzzPruzz + suzzPruzz;
}

void bill(double price, char size, int toppings, double* prices) {
  std::cout << "Size of pizza: " << size << "(" << prices[0] << ")" << std::endl;
  std::cout << "Number of toppings: " << toppings << "(" << prices[1] << " per topping)" << std::endl;
  std::cout << "Total price: " << price << std::endl;
}

int main() {
  std::cout << "Welcome to Athuzz Uzz Puzz!" << std::endl;

  char size;
  int toppings;

  std::cout << "What size pizza do you want? (s/l): " << std::endl;
  std::cin >> size;

  std::cout << "How many toppings do you want? " << std::endl;
  std::cin >> toppings;

  double* pizzaPrices = prices(size);
  double totalPrice = calcPrice(size, toppings, pizzaPrices);

  bill(totalPrice, size, toppings, pizzaPrices);

  delete[] pizzaPrices;

  return 0;
}