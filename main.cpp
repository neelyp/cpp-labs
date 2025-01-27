// neel pandruvada
// 1/21/25
// array lab
// extra: print sum of numbers in first array

#include <ctime>
#include <iostream>
#include <cmath>
#include <iomanip>

float avg(float *ar, int size);

int main()
{
    // 1
    int rands[10];
    int sum = 0;
    int evens = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        rands[i] = 1 + (rand() % 10);
    }

    for (int num : rands)
    {
        std::cout << num << " ";
        sum += num;
        if (num % 2 == 0)
            evens++;
    }
    std::cout << std::endl;

    for (int i = 9; i >= 0; i--)
    {
        std::cout << rands[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Evens: " << evens << std::endl;

    std::cout << "Sum: " << sum << std::endl;

    // 2
    float sales[7] = {100.50, 200.75, 150.25, 175.00, 220.50, 180.00, 190.25};
    while (true)
    {
        std::cout << "Do you want to view the sales for a day? (y/n): " << std::endl;
        char choice;
        std::cin >> choice;
        if (choice == 'n')
            break;
        else
        {
            std::cout << "Enter the day number (1 for Monday... 7 for Sunday) " << std::endl;
            int day;
            std::cin >> day;

            if (day < 1 || day > 7)
            {
                std::cout << "not a day" << std::endl;
            }
            else
            {
                std::cout << "Sales for day: $" << std::fixed << std::setprecision(2) << sales[day - 1] << std::endl;
            }
        }
    }

    // 3
    int ages[20];
    int over15 = 0;
    for (int i = 0; i < 20; i++)
    {
        std::cout << "Enter the age for person " << i + 1 << std::endl;
        std::cin >> ages[i];
    }

    for (int num : ages)
    {
        std::cout << num << " ";
        over15 += num > 15;
    }
    std::cout << std::endl;

    std::cout << "There are " << over15 << " people over 15" << std::endl;

    // 4
    float finalGrades[6] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    for (float num : finalGrades)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Average: " << avg(finalGrades, 6) << std::endl;

    return 0;
}

float avg(float *ar, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
    }

    return std::round((sum / size) * 10) / 10;
}
