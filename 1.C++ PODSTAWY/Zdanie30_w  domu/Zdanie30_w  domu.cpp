#include <iostream>

int power(int n)
{
    int result = 1;
    for (int i = n; i != 0; i--)
    {
        result *= i;
    }
    return result;
}

int powerRecursion(int n)
{
    if (n <= 1)           //warunek stopu rekurencji
    {
        return 1;
    }

    return n * powerRecursion(n - 1);             //wywo³anie rekurencyjne
}

int main()
{
    std::cout << powerRecursion(5);
}

