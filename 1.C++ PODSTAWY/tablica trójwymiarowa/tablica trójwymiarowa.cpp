#include <iostream>

int main()
{
    const int sizeZ = 5;
    const int sizeK = 10;
    const int sizeI = 15;
    int tab[sizeZ][sizeK][sizeI] = {};

    for (int z = 0; z < sizeZ; z++)
    {
        for (int k = 0; k < sizeK; k++)
        {
            for (int i = 0; i < sizeI; i++)
            {
                tab[z][k][i] = z * k * i * 100;
            }
        }
    }
   
}
