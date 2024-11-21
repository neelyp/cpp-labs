/*
    Neel Pandruvada
    FUNction Lab
    11/21/24
*/

#include <iostream>

void countdown()
{
    for (int i = 10; i > 0; i--) // counts down from 10 to 1
    {
        std::cout << i << std::endl;
    }
    std::cout << "Liftoff!" << std::endl;
}

void customGreet(std::string name, int times)
{
    for (int i = 0; i < times; i++) // repeats name based on times inputted
    {
        std::cout << "Hello, " << name << std::endl;
    }
}

int getFavoriteNum() // always returns 7o8l;p'
{
    return 7;
}

float calcAvg(int a, int b, int c)
{
    return (a + b + c) / 3; // returns average of the three numbers
}

int main()
{
    countdown();

    std::cout << "Enter your name: " << std::endl;
    std::string name;
    int times;
    std::cin >> name;
    std::cout << "Enter a number of times: " << std::endl;
    std::cin >> times;
    customGreet(name, times);

    int fav = getFavoriteNum();
    std::cout << "Your favorite number is: " << fav << std::endl;

    int a, b, c;
    std::cout << "Enter three integers: " << std::endl;
    std::cin >> a >> b >> c;
    float avg = calcAvg(a, b, c);
    std::cout << avg << std::endl;

    return 0;
}