/*`
    Neel Pandruvada
    Company Consistency lab
    5/16/2025
    Extra: adds tax using new jersey's real sales tax rate of 6.625% onto the final discounted price
*/

#include <iostream>
#include <iomanip>
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

    std::cout << "Choose product: \n1. book\n2. pen\n3. pencil\n4. eraser\n";
    int productChoice;
    std::cin >> productChoice;

    switch (productChoice) {
        case 1: productName = "book"; break;
        case 2: productName = "pen"; break;
        case 3: productName = "pencil"; break;
        case 4: productName = "eraser"; break;
        default:
            std::cout << "Invalid choice.\n";
            return -1;
    }

    double prices[] = {
     10, // book
     2,  // pen
     1,  // pencil
     1 // eraser
    };

    double price = prices[productChoice - 1];

    std::cout << "Original price: $" << price << "\n";

    std::cout << "Are you a student, teacher, janitor, or none? (1/2/3/4): ";
    int choice;
    std::cin >> choice;
    
    std::cout << std::fixed << std::setprecision(2);

    switch (choice) {
        case 1:
            student(price);
            std::cout << "Discounted price for student: (10% off) $" << price << "\n";
            break;
        case 2:
            teacher(price);
            std::cout << "Discounted price for teacher: (15% off) $" << price << "\n";
            break;
        case 3:
            janitor(price);
            std::cout << "Discounted price for janitor: (20% off) $" << price << "\n";
            break;
        case 4: break; // no discount so no change

        default:
            std::cout << "Invalid choice.\n";
            return -1;
    }

    std::cout << "Final Price with tax: $" << std::round((price + (price * 0.06625)) * 100) / 100 << std::endl;
    std::cout << closer(productName);

    return 0;
}
