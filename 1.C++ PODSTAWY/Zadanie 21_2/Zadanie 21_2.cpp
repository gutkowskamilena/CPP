#include <iostream>

int main()
{
    unsigned int year = 0;

    std::cout << "Podaj Rok" << std::endl;
    std::cin >> year;


    int warunek1 = year % 400;
    int warunek2 = year % 100;
    int warunek3 = year % 4;

    if (warunek3 == 0)
    {
        if (warunek2 == 0)
        {
            if(warunek1 == 0)
            {
                std::cout << "Rok jest rokiem przestepnym (ma 366 dni)" << std::endl;
            }
            else
            {
                std::cout << "Rok nie jest rokiem przestepnym (ma 365 dni)" << std::endl;
            }
            

        }
        else
        {
            std::cout << "Rok jest rokiem przestepnym (ma 366 dni)" << std::endl;
        }
    }
    else
    {
        std::cout << " Rok nie jest rokiem przestepnym (ma 365 dni)" << std::endl;
    }

}

