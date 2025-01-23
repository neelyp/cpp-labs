// neel pandruvada
// 1/23/25
// vector

#include <iostream>
#include <vector>

void userIntVector();
void vectorPractice();
void colorVector();
void names();

int main()
{
    vectorPractice();
    userIntVector();
    colorVector();
    names();
}

void vectorPractice()
{
    std::vector<int> nums(10);
    for (int i = 0; i < 10; i++)
        nums[i] = i;
    std::cout << nums[2] << std::endl;
    nums.pop_back();
    for (int num : nums)
        std::cout << num << " ";
    std::cout << std::endl;
}

void userIntVector()
{
    std::vector<int> nums;

    while (true)
    {
        int choice;
        std::cout << "Do you want to:\n1) add a number to the vector\n2) Display the numbers\n3) Display Vector size\n4) Exit\n>" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            int num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            nums.push_back(num);
            break;
        case 2:
            std::cout << "{";
            for (int i = 0; i < nums.size(); i++)
            {
                if (i == nums.size() - 1)
                    std::cout << nums[i];
                else
                    std::cout << nums[i] << ", ";
            }
            std::cout << "}" << std::endl;
            break;
        case 3:
            std::cout << "Vector size: " << nums.size() << std::endl;
            break;
        default:
            return;
        }
    }
}

void colorVector()
{
    std::vector<std::string> favColors;
    std::cout << "Enter your favorite color: " << std::endl;
    std::string col;
    std::cin >> col;
    favColors.push_back(col);

    char choice;
    do
    {
        std::cout << "Would you like to add another color? (y/n)" << std::endl;
        std::cin >> choice;

        if (tolower(choice) == 'y')
        {
            std::string color;
            std::cout << "Enter your favorite color: " << std::endl;
            std::cin >> color;
            favColors.push_back(color);
        }
    } while (tolower(choice) == 'y');

    std::cout << "Your favorite colors are: ";
    for (int i = 0; i < favColors.size(); i++)
    {
        if (i == favColors.size() - 1 && favColors.size() > 1)
        {
            std::cout << "and " << favColors[i];
        }
        else if (i == favColors.size() - 2)
        {
            std::cout << favColors[i] << " ";
        }
        else
        {
            std::cout << favColors[i] << ", ";
        }
    }
    std::cout << std::endl;
}

void names()
{
    std::cout << "how many names do you have? " << std::endl;
    int names;
    std::cin >> names;
    std::vector<std::string> names_(names);

    for (int i = 0; i < names; i++)
    {
        std::string name;
        std::cout << "Enter a name: " << std::endl;
        std::cin >> names_[i];
    }

    auto greeting = [](std::vector<std::string> names)
    {
        std::cout << "greetings and salutations ";
        for (int i = 0; i < names.size(); ++i)
        {
            std::cout << names[i];
            if (i != names.size() - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << "! " << std::endl;
    };

    greeting(names_);
}
