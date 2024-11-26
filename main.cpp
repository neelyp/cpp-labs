// Top x
// 10/30/24
// Neel Pandruvada

#include <iostream>
#include <string>

int main()
{
  int amnt;
  std::cout << "How long is your top shows list? " << std::endl;
  std::cin >> amnt;
  std::cin.ignore();
  std::string shows[amnt];

  for (int i = 0; i < amnt; i++) {
    std::cout << "enter show name: " << std::endl;
    std::getline(std::cin, shows[i]);
  }

  std::cout << "Your Top " << amnt << " Shows: " << std::endl;
  for (int i = 0; i < amnt; i++) {
    std::cout << (i+1) << ": " << shows[i] << std::endl;
  }
  return 0;
}
