#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void lowerto(std::string &str);
void doublee(int &num);
int addRandom(int num);
void addInts(std::vector<int> &vec);

int main()
{
    std::srand(std::time(0));

    std::cout << "gimme a string: " << std::endl;
    std::string str;
    std::getline(std::cin, str);
    std::cout << str << " ";
    lowerto(str);
    std::cout << "lowercase: " << str << std::endl;

    std::cout << "gimme a number: " << std::endl;
    int num;
    std::cin >> num;
    std::cout << num << " ";
    doublee(num);
    std::cout << "doubled: " << num << std::endl;

    std::cout << "gimme number: " << std::endl;
    std::cin >> num;
    std::cout << num << " ";
    num = addRandom(num);
    std::cout << "random added: " << num << std::endl;

    std::cout << "gimme three numbers: " << std::endl;
    std::vector<int> vec;
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    vec.push_back(num1);
    vec.push_back(num2);
    vec.push_back(num3);
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;
    addInts(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void lowerto(std::string &str) // get reference of string
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]); // update each character in the string
    }
} // no need to return as the string is passed by reference so it is automatically updated

void doublee(int &num)
{
    num *= 2;
}

int addRandom(int num)
{
    return num += std::rand() % 11;
}

void addInts(std::vector<int> &vec)
{
    vec.push_back(1);
    vec.push_back(2);
}