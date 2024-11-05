#include <iostream>
#include <string>

int main() {
    std::string pass;
    std::string conf;
    std::cout << "enter a password: " << std::endl;
    std::cin >> pass;

    do {
        std::cout << "Re-enter the password: " << std::endl;
        std::cin >> conf;
    } while (!(conf == pass));
    
    return 0;
}