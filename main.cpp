// neel pandruvada
// 02/12/25
// extra: used header file to init functions

#include <iostream>
#include <iomanip>
#include "main.h"

int main()
{
    srand(time(0));
    matrix();
    sumnavg();
    grades();
    return 0;
}

void matrix()
{
    std::cout << "How many rows and colums? (1 <= num <= 5)" << std::endl;
    int rows, cols;
    std::cin >> rows >> cols;
    if ((rows >= 1 && rows <= 5) && (cols >= 1 && cols <= 5))
    {
        int matrix[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                // random number 1-50
                matrix[i][j] = rand() % 50 + 1;
            }
        }

        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                std::cout << std::setw(4);
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }

        // find biggest number
        int biggest = matrix[0][0];
        int pos[2];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] > biggest)
                {
                    biggest = matrix[i][j];
                    pos[0] = i;
                    pos[1] = j;
                }
            }
        }

        std::cout << "Biggest number: " << biggest << std::endl;
        std::cout << "Position: " << pos[0] << ", " << pos[1] << std::endl;
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
}

void sumnavg()
{
    std::cout << "Enter a number between 1 and 10 (inclusive)" << std::endl;
    int size_;
    std::cin >> size_;
    if (size_ >= 1 && size_ <= 10)
    {
        int arr[size_][size_];
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < size_; i++)
        {
            for (int j = 0; j < size_; j++)
            {
                arr[i][j] = rand() % 100 + 1;
                std::cout << std::setw(4) << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }

        // sum and avg of each row
        for (int i = 0; i < size_; i++)
        {
            int sum = 0;
            for (int j = 0; j < size_; j++)
            {
                sum += arr[i][j];
            }
            std::cout << "Sum of row " << i << ": " << sum << std::endl;
            std::cout << "Average of row " << i << ": " << std::fixed << std::setprecision(2) << static_cast<double>(sum) / size_ << "\n\n";
        }
    }
}

void grades()
{
    std::cout << "Enter the number of students (1-10): ";
    int students;
    std::cin >> students;

    if (students < 1 || students > 10)
    {
        std::cout << "invalid num" << std::endl;
        return;
    }

    int scores[students][3];

    for (int i = 0; i < students; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scores[i][j] = rand() % 51 + 50;
        }
    }

    std::cout << "Math\tEnglish\tScience" << std::endl;
    for (int i = 0; i < students; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << scores[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    double avgMath = 0, avgEnglish = 0, avgScience = 0;
    for (int i = 0; i < students; ++i)
    {
        avgMath += scores[i][0];
        avgEnglish += scores[i][1];
        avgScience += scores[i][2];
    }
    avgMath /= students;
    avgEnglish /= students;
    avgScience /= students;

    std::cout << "\nAverage Scores:" << std::endl;
    std::cout << "Math: " << std::fixed << std::setprecision(2) << avgMath << std::endl;
    std::cout << "English: " << std::fixed << std::setprecision(2) << avgEnglish << std::endl;
    std::cout << "Science: " << std::fixed << std::setprecision(2) << avgScience << std::endl;
}