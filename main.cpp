#include <iostream>
#include "coms.h"
#include "discount.h"

int main() {
    std::string name;
    std::string streetName;
    std::string productName;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << greeting(name);

    std::cout << "Enter your street name: ";
    std::getline(std::cin, streetName);
    streetNameCaps(streetName);
    std::cout << "Formatted street name: " << streetName << "\n";

    std::cout << "Enter the product name: ";
    std::getline(std::cin, productName);

    std::cout << "Are you a student, teacher, or janitor? (1/2/3): ";
    int choice;
    std::cin >> choice;
    int price = 100;

    std::cout << "Original price: " << price << "\n";
    
    switch (choice) {
        case 1:
            student(price);
            std::cout << "Discounted price for student: " << price << "\n";
            break;
        case 2:
            teacher(price);
            std::cout << "Discounted price for teacher: " << price << "\n";
            break;
        case 3:
            janitor(price);
            std::cout << "Discounted price for janitor: " << price << "\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
    }

    std::cout << closer(productName);

    return 0;
}
