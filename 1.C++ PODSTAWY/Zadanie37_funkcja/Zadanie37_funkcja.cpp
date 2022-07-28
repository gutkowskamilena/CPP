#include <iostream>

bool checkDay(unsigned int day, unsigned int maxDay)
{
    
    if (day > 0 && day <= maxDay)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkDate(unsigned int day, unsigned int month, unsigned int year)
{
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
            return checkDay(day, 31);
            break;
        case 2:
            return checkDay(day, 28);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return checkDay(day, 30);
            break;
        default:
            return false;
            
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;
    std::cout << "Podaj dzien" << std::endl;
    std::cin >> day;
    std::cout << "Podaj miesiac" << std::endl;
    std::cin >> month;
    std::cout << "Podaj rok" << std::endl;
    std::cin >> year;


    std::cout << checkDate(day, month, year);

}
