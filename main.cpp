// neel pandruvada
// 1/28/25
// vector lab 2
// extra - print elements that are longer than 6 characters.

#include <iostream>
#include <vector>

void printVector(std::vector<std::string> nicknames);

int main()
{
    std::vector<std::string> nicknames{"Tafa", "Uncle Ji", "Tiggly", "Thar Thar", "Usturgy"};
    printVector(nicknames);

    nicknames.insert(nicknames.begin() + nicknames.size() / 2, "Dark Chocolate");
    printVector(nicknames);

    std::cout << "Nicknames longer than 6 character: " << std::endl;
    for (auto i = nicknames.begin(); i != nicknames.end(); ++i)
    {
        if (i->size() > 6)
        {
            std::cout << *i << " ";
        }
    }
    std::cout << std::endl;
    nicknames.erase(nicknames.end() - 3);
    printVector(nicknames);
}

void printVector(std::vector<std::string> nicknames)
{
    std::cout << "{ ";
    for (auto i = nicknames.begin(); i != nicknames.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << "}" << std::endl;
}
