#include <iostream>

int main()
{
    int l1 = 1, l2 = 2, l3 = 3;
    
    if (l1 > l2 && l1 > l3)
    {
        std::cout << "Najwieksza: " << l1;
    }
    else if(l2 > l1 && l2 > l3)
    {
        std::cout << "Najwieksza: " << l2;
    }
    else
    {
        std::cout << "Najwieksza: " << l3;
    }
    
    int l = 0;
    std::cin >> l;

    std::cout << (l > 5) ? 0 : 1 ; //przyk³ad u¿ycia operatora trojargumentowego (?)
}
