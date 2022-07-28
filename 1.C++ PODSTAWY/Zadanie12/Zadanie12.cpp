// Zadanie12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float a = 0;
    float b = 0;

    std::cout << "Podaj dwie liczby: ";
    std::cin >> a;
    std::cin >> b;

    std::cout << "Czy rowne?" << std::endl << (a == b) << std::endl;
    std::cout << "Czy rozne?" << std::endl << (a != b) << std::endl;
    std::cout << "Czy pierwsza wieksza?" << (a > b) << std::endl;
    std::cout << "Czy pierwsza mniejsza?" << (a < b) << std::endl;

}

