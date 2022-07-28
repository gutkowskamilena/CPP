#include <iostream>

int main()
{
    int number = 0;

    std::cout << "Podaj liczbe calkowita." << std::endl;
    std::cin >> number;

    std::cout << "Wartosc bezwzgledana wynosi ";
    if (number >= 0)
    {
        std::cout <<  number << std::endl;
    }
    else
    {
       std::cout << -number << std::endl;
    }
}

