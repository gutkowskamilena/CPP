
#include <iostream>

double divide(double a, double b)
{
    if (b == 0)
    {
        throw std::string ("nie dziel przez zero");

    }
    return a / b;
}

int main()
{
    int a = 0;
    int b = 0;
    while (true)
    {
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> a;
        std::cout << "Podaj drugaa liczbe: ";
        std::cin >> b;

        double wynik = divide(a, b);

        std::cout << "Wynik dzielenia: " << wynik << std::endl;
    }

  
}
