#include <iostream>

unsigned int sumujLiczby(int liczba)
{
    int suma = liczba;
    int powtorzeniaPetli = 1;
    int kolejnaLiczba = 0;
    
    while (powtorzeniaPetli < 10)
    {
        std::cin >> kolejnaLiczba;

        if (kolejnaLiczba < 0)
        {
            break;
        }

        suma += kolejnaLiczba;
       
        powtorzeniaPetli++;

    } 
    return suma;
}

int main()
{
    int suma1 = 0;
    int liczba1 = 0;
    std::cout << "Podawaj liczby: "  << std::endl;
    std::cin >> liczba1;
    suma1 = sumujLiczby(liczba1);
    std::cout << suma1 << std::endl;

}