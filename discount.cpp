#include <iostream>
#include "discount.h"

// act code functions

void student(int &price) {
    price = price - (price * 0.10);
}
void teacher(int &price) {
    price = price - (price * 0.15);
}
void janitor(int &price) {
    price = price - (price * 0.25);
}