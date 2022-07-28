#include <iostream>

double obliczPoleProstokata(const double bok1, const double bok2)
{
    return bok1 * bok2;
}

double obliczObwodProstokata(const double bok1, const double bok2)
{
    return 2 * bok1 + 2 * bok2;
}


int main()
{
    double a = 5;
    double b = 2;

    std::cout << "Pole prostokata wynosi: " << obliczPoleProstokata(a,b) << std::endl;
    std::cout << "Obwod prostokata wynosi: " << obliczObwodProstokata(a, b) << std::endl;

}

