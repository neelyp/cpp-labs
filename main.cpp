/*
  Neel Pandruvada
  Character Functions
  12/6/24
 */

#include <iostream>
#include <cctype>

int main() {
  std::string name;
  bool nums = false;
  std::string upper;

  std::cout << "¿Cómo te llamas? " << std::endl;
  std::cin >> name;

  for (char c : name) {
    if (!isalpha(c)) {
      nums = true;
      break;
    } else {
      upper += toupper(c);
    }
  }

  if (!nums) {
    std::cout << upper << std::endl;
  } else {
    std::cout << "That has numbers or special characters";
  }

  return 0;
}