#include <iostream>

unsigned int countNumbers (int n)
{
    unsigned int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n = 0;
    std::cout << "Ile liczb zsumowac? ";
    std::cin >> n;
    std::cout << "Suma " << n << "kolejnych liczb wynosi" << countNumbers(n);
}
