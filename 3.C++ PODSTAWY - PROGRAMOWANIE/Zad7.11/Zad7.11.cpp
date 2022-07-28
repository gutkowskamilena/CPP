#include <iostream>
char oX[3][3] = { {' ',' ',' '},{' ',' ',' '}, {' ',' ',' '} };
bool b = false;
int a = 3;
void displayOX()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << oX[i][j];
            if (j < 2)
                std::cout << '|';
        }
        if (i < 2)
        {
            std::cout << std::endl;
            std::cout << "-----";
        }
        std::cout << std::endl;
    }
}
void inputAnalyzer()
{
    int input;
    do
    {
        std::cin >> input;
    } while (oX[input / 10 - 1][input % 10 - 1] != ' ');
    //zakladamy ze uzytkownik wprowadza tylko w zakresie 11;12;13;21...33
    if (b)
    {
        oX[input / 10 - 1][input % 10 - 1] = 'o';
    }
    else
    {
        oX[input / 10 - 1][input % 10 - 1] = 'x';
    }
    b = !b;
}
bool analyzeIsWinner()
{
    for (int i = 0; i < 3; i++)
    {
        if (oX[i][0] == oX[i][1] && oX[i][1] == oX[i][2] && oX[i][0] != ' ')
        {
            std::cout << "Winner is: " << oX[i][0] << std::endl;
            std::cout << "Coordinates of winning line: " << std::endl;
            for (int j = 0; j < 3; j++)
            {
                std::cout << i << "; " << j << std::endl;
            }
            return true;
        }
        if (oX[0][i] == oX[1][i] && oX[1][i] == oX[2][i] && oX[0][i] != ' ')
        {
            std::cout << "Winner is: " << oX[0][i] << std::endl;
            std::cout << "Coordinates of winning line: " << std::endl;
            for (int j = 0; j < 3; j++)
            {
                std::cout << j << "; " << i << std::endl;
            }
            return true;
        }
    }
    if (oX[0][0] == oX[1][1] && oX[1][1] == oX[2][2] && oX[0][0] != ' ')
    {
        std::cout << "Winner is: " << oX[1][1] << std::endl;
        std::cout << "Coordinates of winning line: " << std::endl;
        for (int j = 0; j < 3; j++)
        {
            std::cout << j << "; " << j << std::endl;
        }
        return true;
    }
    if (oX[0][2] == oX[1][1] && oX[1][1] == oX[2][0] && oX[2][0] != ' ')
    {
        std::cout << "Winner is: " << oX[1][1] << std::endl;
        std::cout << "Coordinates of winning line: " << std::endl;
        for (int j = 0; j < 3; j++)
        {
            std::cout << j << "; " << 2 - j << std::endl;
        }
        return true;
    }
    return false;
}
int main()
{
    bool isWinner = false;
    do
    {
        inputAnalyzer();
        system("cls");
        displayOX();
        isWinner = analyzeIsWinner();
    } while (!isWinner);
}









