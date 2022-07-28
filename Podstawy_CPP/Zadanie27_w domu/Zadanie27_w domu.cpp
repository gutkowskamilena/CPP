#include <iostream>

void printSign(int counting = 1, char sign = '?')
{
    for (int i = 0; i < counting; i++)
    {
        std::cout << sign << " ";
    }
}

int main()
{
    printSign(5, '*');
}

