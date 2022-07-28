#include <iostream>
#include <string>

int main()
{
    const int size = 5;
    std::string names[size] = {};

    for (int i = 0; i < size; i++)
    {
        std::cout << "Podaj imie " << i << " ";
        std::getline(std::cin >> std::ws, names[i]);
    }
    int idx = 0;
    for (int i = 1; i < size; i++)
    {
        if (names[idx].length() < names[i].length())
        {

            idx = i;
        }

       
    }
    std::cout << "najdluzsze: " << names[idx];
}
