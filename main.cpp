// Looping Lab
// 10/30/24
// Neel Pandruvada
// extra: Print energy and suppplies at the end

#include <iostream>
#include <string>

int main()
{
    // // journal
    std::string quotes[7];
    for (int i = 0; i < 7; i++)
    {
        std::string quote;
        std::cout << "Enter a quote: " << std::endl;
        std::getline(std::cin, quotes[i]);
    }

    for (int i = 0; i < 7; i++) // write out all the quotes with day number
    {
        std::cout << i + 1 << ": " << quotes[i] << std::endl;
    }

    // zombie survival
    std::cout << "----------------" << std::endl;
    int energy = 5;
    int supplies = 0;

    while (energy > 0 && supplies < 10) // run until ending requirements
    {
        std::cout << energy << " " << supplies << std::endl;
        int choice;
        std::cout << "1: search for supplies\n2: rest";
        std::cin >> choice;

        if (choice == 1)
        {
            energy -= 1;
            supplies++;
        }
        else
        {
            energy += 2;
        }
        std::cout << energy << " " << supplies << std::endl;
    }

    printf("Energy: %d\nSupplies %d", energy, supplies);

    if (supplies > 10)
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "You ran out of energy." << std::endl;
    }

    std::cout << "----------------" << std::endl;

    // lock
    int lock = 548;
    int guess = 0;

    do
    {
        std::cout << "Guess the code: " << std::endl;
        std::cin >> guess;
    } while (guess != lock); // run once and then keep going again until code is guessed.
}