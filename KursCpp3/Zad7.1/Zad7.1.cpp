#include <iostream>

int nWD(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        if (a % b == 0)
            return b;
    }
    else
    {
        if (b % a == 0)
        {
            return a;
        }
    }
    int nwd = 1;
    if (a > b)
    {
        for (int i = 2; i <= b / 2; i++)
        {
            if (a % i == 0 && b%i == 0)
            {
                nwd = i;
            }
        }
    }
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                nwd = i;
            }
        }
    }
    return nwd;
 }

int nWW(int a, int b)
{
    int result = (a * b) / nWD(a, b);
    return result;
}

int main()
{
    std::cout << nWD(10, 24) << std::endl;
    std::cout << nWD(12, 24) << std::endl;
    std::cout << nWD(24, 24) << std::endl;
    std::cout << nWD(56, 36) << std::endl;

    std::cout << "NWW" << std::endl;
    std::cout << nWW(10, 24) << std::endl;
    std::cout << nWW(12, 24) << std::endl;
    std::cout << nWW(24, 24) << std::endl;
    std::cout << nWW(56, 36) << std::endl;

}
