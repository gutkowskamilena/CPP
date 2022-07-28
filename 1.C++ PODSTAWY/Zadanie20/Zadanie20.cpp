#include <iostream>

int main()
{
    char sign = 0;

    std::cout << "Podaj znak" << std::endl;
    std::cin >> sign;

    if (sign == 'k' || sign == 'K')
    {
        std::cout << std::endl << "Ku ku Ku ku!" << std::endl;
    }
    else if (sign == 's' || sign == 'S')
    {
        std::cout << std::endl << "Sssssssssss!" << std::endl;
    }
    else if (sign == 'm' || sign == 'M')
    {
        std::cout << std::endl << "Muuu!" << std::endl;
    }

    else
    {
        std::cout << std::endl << "Akuku!" << std::endl;
    }
}

