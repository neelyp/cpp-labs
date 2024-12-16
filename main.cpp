/*
  Neel Pandruvada
  Time
  12/12/24
 */

#include <iostream>
#include <ctime>

int main() {
  std::time_t now = std::time(nullptr);
  std::cout << "Current time: " << std::ctime(&now);

  // #2
  std::time_t now_ = std::time(nullptr);
  int offset;
  std::cout << "Enter an ofset" << std::endl;
  std::cin >> offset;
  now += offset * 3600;
  std::tm* timeZoneTime = std::gmtime(&now);
  std::cout << std::asctime(timeZoneTime);

  // #3
  int ans;
  std::time_t start = std::time(nullptr);
  std::cout << "What is 1+1? " << std::endl;
  std::cin >> ans;
  std::time_t end = std::time(nullptr);

  double duration = std::difftime(end, start);
  std::cout << duration << " seconds";

  return 0;
}