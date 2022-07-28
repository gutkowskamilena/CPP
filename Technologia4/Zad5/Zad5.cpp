#include <iostream>
//Zad: Napisz funkcje ktora zrobi to co operator i++. nie uzywaj tego operatora w tej funkcji.

int postIncrement(int& input)
{
    
    return input + 1;
}

int main()
{
    int a = 5;
    int b = postIncrement(a);
    std::cout << b << a;
}
