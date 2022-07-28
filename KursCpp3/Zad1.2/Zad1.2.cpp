#include <iostream>

int main()
{
    int l;
    std::cin >> l;

    if (l % 2) //gdy istnieje reszta z dzielenia na ife pojawia sie jedynka // gdy reszta = 0 w ifie mamy fa³sz wiec pomiajmy pierwszy blok i idziemy do kolejnego elsa
    {
        std::cout << "liczba jest nieparzysta";
    }
    else 
    {
        std::cout << "liczba jest parzysta";
    }
   
}
