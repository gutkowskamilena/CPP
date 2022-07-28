#include <iostream>

int main()
{
    const int sizeX = 2;
    const int sizeY = 3;
    int tab[sizeX][sizeY];

    for (int i = 0; i < sizeX; i++)
    {
        for (int k = 0; k < sizeY; k++)
        {
            std::cout << "Podaj tab[" << i << "][" << k << "]=";
            std::cin >> tab[i][k];

        }
    }

    for (int i = 0; i < sizeX; i++)
    {
        for (int k = 0; k < sizeY; k++)
        {
            std::cout << "tab[" << i << "][" << k << "]=" << tab[i][k] << std::endl;

        }
    }
}

