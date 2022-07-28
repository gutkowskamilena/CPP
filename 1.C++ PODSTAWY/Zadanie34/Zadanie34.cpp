#include <iostream>
int sumujLiczby(int n, int k, int liczba)
{
    int suma = liczba;
    int powtorzeniaPetli = 1;
    int kolejnaLiczba = 0;

    do
    {

        std::cin >> kolejnaLiczba;

        if (kolejnaLiczba%k != 0)
        {
            continue;
        }

        suma += kolejnaLiczba;
        powtorzeniaPetli++;
    } while (powtorzeniaPetli < n);

    return suma;
}

int main()
{
    int suma1 = 0;
    int liczba1 = 0;
    int n1 = 0;
    int k1 = 0;
    std::cout << "Podaj ilosc n liczb: " << std::endl;
    std::cin >> n1;
    std::cout << "Podaj dzielnik k: " << std::endl;
    std::cin >> k1;
    std::cout << "Podawaj liczby: " << std::endl;
    std::cin >> liczba1;
    suma1 = sumujLiczby(n1, k1, liczba1);
    std::cout << suma1 << std::endl;

}