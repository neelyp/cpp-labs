#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    char initial;
    float gradeAverage;

    printf("Enter your name, age, first name initial, and grade average: ");
    scanf("%s %d %c %f", &name, &age, &initial, &gradeAverage);
    printf("Name: %s, Age: %d, Initial: %c, Grade Average: %.2f", name, age, initial, gradeAverage)
}