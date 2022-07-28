#include <iostream>

void printSquare()
{
    unsigned int size = 0;
    std::cout << "Podaj wymiar boku kwadratu" << std::endl;
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "K";
        }
        std::cout << std::endl;
    }
}

int main()
{
    printSquare();
}

