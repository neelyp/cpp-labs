#include "coms.h"

std::string greeting(std::string name) {
    return "Hello, " + name + "!\nWelcome to Comquest!\n";
}

void streetNameCaps(std::string &streetName) {
    for (int i = 0; i < streetName.length(); i++) {
        streetName[i] = toupper(streetName[i]);
    }
}

std::string closer(std::string productName) {
    return "Thank you for your interest in " + productName + ".\nWe hope to see you at Comquest again soon!\n";
}