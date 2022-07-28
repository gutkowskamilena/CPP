#include <iostream>

int main()
{
    ////ZADANIE 8
    //int a = 0;
    //int b = 0;

    //std::cout << "Podaj dwie liczby calkowite: ";
    //std::cin >> a;
    //std::cin >> b;
    //int m = a;                //m to zmienna pomocnicza, zapisuje w niej wartosc a, któr¹ w nastêpnej linijce trace
    //a = b;
    //b = m;

    //std::cout << "Wartosc a: " << a << std::endl;
    //std::cout << "Wartosc b: " << b << std::endl;


    // ZADANIE 8 WERSJA II
    int a = 0;
    int b = 0;

    std::cout << "Podaj dwie liczby calkowite: ";
    std::cin >> a;
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Wartosc a: " << a << std::endl;
    std::cout << "Wartosc b: " << b << std::endl;

}
