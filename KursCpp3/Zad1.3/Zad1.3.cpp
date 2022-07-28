#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;

    if (number == 0)
    {
        std::cout << "Liczba rowna zero";
    }
    else if(number > 0)
    {
        std::cout << "Liczba wieksza od zera";
    }
    else
    {
        std::cout << "Liczba mniejsza od zera";
    }
    
}
