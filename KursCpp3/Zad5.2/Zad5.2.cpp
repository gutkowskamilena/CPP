#include <iostream>

int main()
{
    const int size = 10;

    double tab[size][size] = {};
    int value = 1;
    for (int i = 0; i < size; i++)
    {
        
        for (int j = 0; j < size; j++)
        {
            tab[i][j] = value++;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << "tab[" << i << "][" << j << "] = " << tab[i][j] << std::endl;
        }
    }
    
}

