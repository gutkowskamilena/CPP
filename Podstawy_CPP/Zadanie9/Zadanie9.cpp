
#include <iostream>

int main()
{
    int liczba1 = 0;
    int liczba2 = 0;
    int liczba3 = 0;

    std::cout << "Podaj trzy liczby calkowite: " << std::endl;
    
    std::cin >> liczba1;
    std::cin >> liczba2;
    std::cin >> liczba3;
    float s = (liczba1 + liczba2 + liczba3);
    float m = s / 3;

    std::cout << "Srednia arytmetyczna: " << m << std::endl;
}
