#include <iostream>

int main()
{
    int a = 0;

    std::cout << "Podaj liczbe calkowita:" << std::endl;
    std::cin >> a;
    a += 10;
    std::cout << "Po dodaniu 10: " << a << std::endl;
    a *= 24;
    std::cout << "Po pomnozeniu przez 24: " << a << std::endl;
    a -= 100;
    std::cout << "Po odjeciu 100: " << a << std::endl;
    a /= 2;
    std::cout << "Po podzieleniu przez 2: " << a << std::endl;
}
