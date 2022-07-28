

#include <iostream>

void drawFigureA(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

}
void drawFigureB(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            
            if (j < i)
            {
                std::cout << ' ';
            }
            else if (i == j)
            {
                std::cout << '*';
            }
            else
            {
                continue;
            }
            
        }
        std::cout << std::endl;
    }

}

void drawFigureC(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {

            if (i == 0 || j == 0 || i == l-1 || j == l-1)
            {
                std::cout << '*';
            }
            else 
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

}

void drawFigureD(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {

            if ((i == j) || (i == (l-j-1)))
            {
                std::cout << '*';
            }
            else 
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

}

int main()
{
    drawFigureA(3);

   // drawFigureB(6);

    //drawFigureC(6);

    //drawFigureD(6);

}
