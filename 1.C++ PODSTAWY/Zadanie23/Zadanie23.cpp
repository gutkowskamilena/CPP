#include <iostream>

int main()
{
    float num1 = 0;
    float num2 = 0;
    char operationSign = 0;

    std::cout << "Podaj pierwsza liczbe" << std::endl;
    std::cin >> num1;
    std::cout << "Podaj znak operacji do wykonania (do wyboru: +, -, *, /)" << std::endl;
    std::cin >> operationSign;
    std::cout << "Podaj druga liczbe" << std::endl;
    std::cin >> num2;
    std::cout << "=";

    float suma = num1 + num2;
    float roznica = num1 - num2;
    float iloczyn = num1 * num2;
    float iloraz = num1 / num2;
    

    
    if (num2 == 0)
    {
        std::cout << "Blad. Dzielenie przez zero niedozwolone." << std::endl;
    }
    else if (operationSign == '+')
    {
        std::cout << suma << std::endl;
    }
    else if (operationSign == '-')
    {
        std::cout << roznica << std::endl;
    }
    else if (operationSign == '*')
    {
        std::cout << iloczyn << std::endl;
    }
    else if (operationSign == '/')
    {
        std::cout << iloraz << std::endl;
    }
    else
    {
        std::cout << "Blad." << std::endl;
    }

}

