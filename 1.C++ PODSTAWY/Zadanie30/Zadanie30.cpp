#include <iostream>

unsigned int countPower(int n)
{
    unsigned int silnia = 1;

    for (int i = 1; i <= n; i++)
    {
        silnia *= i;
    }
    return silnia;
}
int main()
{
    int n = 0;
    std::cout << "Podaj podstawe silni: ";
    std::cin >> n;
    std::cout << "Silnia z " << n << " wynosi " << countPower(n);
}
