#include <iostream>

int main()
{
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;
    std::cout << "Podaj dzieñ" << std::endl;
    std::cin >> day;
    std::cout << "Podaj miesi¹c" << std::endl;
    std::cin >> month;
    std::cout << "Podaj rok" << std::endl;
    std::cin >> year;


    if (year > 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 0 && day <= 31)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieoprawna data" << std::endl;
            }
            break;
        case 2:
            if (day > 0 && day <= 28)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieoprawna data" << std::endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 0 && day <= 30)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieoprawna data" << std::endl;
            }
            break;

        }
    }
}
