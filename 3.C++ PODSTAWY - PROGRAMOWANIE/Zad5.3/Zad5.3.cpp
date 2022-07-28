#include <iostream>
void transpose3x3Array(int tab[][3])
{
    int res[3][3];

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = tab[j][i];
            std::cout <<  res[i][j] << "; " ;
        }
        std::cout << std::endl;
    }
}


int main()
{
    int tab[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    transpose3x3Array(tab);
}

