#include <iostream>

void dramText()
{
    char charArray[3][8][8] = { {
        { ' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' ' },
        { ' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' ' },
        { ' ','$',' ' ,' ' ,' ' ,' ' ,' ' ,' ' },
        { ' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' ' },
        { ' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' ' },
        { ' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' ' },
        { ' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' ' },
        { ' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' ' }
    } ,  {
{ ' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
{ ' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' ' }
    } , {
    { ' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,'$' ,'$' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' },
    { ' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' ' }
    } };


    for (int i = 0; i < 8; i++) //jedna petla do iteracji po wierszach
    {
        for (int l = 0; l < 3; l++) //tutaj iterujemy po kolejnych literach
        {
            for (int j = 0; j < 8; j++)   //nastepnie wyswietlamy znaki dla danej litery w danym wierszu
            {
                std::cout << charArray[l][i][j];
            }
        }
           
        std::cout << std::endl;
    };
}

int main()
{
    dramText();
}
