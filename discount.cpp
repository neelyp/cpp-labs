#include <iostream>
#include "discount.h"

// act code functions

void student(double &price) {
    price = price - (price * 0.10);
}
void teacher(double &price) {
    price = price - (price * 0.15);
}
void janitor(double &price) {
    price = price - (price * 0.25);
}