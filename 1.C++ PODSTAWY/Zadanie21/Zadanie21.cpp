#include <iostream>

int main()
{
    unsigned int year = 0;

    std::cout << "Podaj Rok" << std::endl;
    std::cin >> year;

    std::cout << "Ten rok jest ";

    int warunek1 = year % 400;
    int warunek2 = year % 100;
    int warunek3 = year % 4;

    if (warunek3 == 0) 
    {
        if (warunek2 != 0)
        {
            std::cout << " przestepny." << std::endl;
        }
    }
   

    else if (warunek1 == 0)
    {
           std::cout << " przestepny." << std::endl;
    }
    
    else
    {
        std::cout << " nieprzestepny." << std::endl;
    }
    ;
}

