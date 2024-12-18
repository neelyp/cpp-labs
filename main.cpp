#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {
    double num = 3.141592653;
    double rounded = std::round(num * 100) / 100;
    std::cout << rounded << std::endl;

    std::srand(time(0));
    std::cout << std::rand() % 11 << std::endl; // we need time for random numbers because in order to get different numbers everytime, it needs to get seeded using time.

    return 0;
}