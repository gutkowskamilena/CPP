#include <iostream>

int main()
{
    const int sizeX = 3;
    const int sizeY = 5;
    int tab[sizeX][sizeY];
    int number = 1;
    for (int i = 0; i < sizeX; i++)
    {
        for (int k = 0; k < sizeY; k++)
        {
            tab[i][k] = number;
            number++;
        }
    }

    for (int i = 0; i < sizeX; i++)
    {
        for (int k = 0; k < sizeY; k++)
        {
            std::cout <<   tab[i][k] << " ";

        }
        std::cout << std::endl;
    }
}
