#include <iostream>

int readNumber(int messageNumber)   //wczytujemy od uzytkownika liczby
{
    int number = 0;                 //zmienna pomocnicza = to co na wyjœciu = to co deklaruje przed nazwa funkcji = to co jest w returnie 
    std::cout << "Podaj " << messageNumber << " liczbe: ";
    std::cin >> number;
    return number;
}

void printBoolAsText(bool value)     //odpowiedzi zero-jedynkowe konwertujemy na true-false
{
    if (value)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
}

void printBoolAsText(bool value, bool newLine)    //po ka¿dej odpowiedzi dodajemy now¹ linie
{
    printBoolAsText(value);
    if (newLine)
    {
        std::cout << std::endl;
    }
}
void checkTwoBools(int a, int b, char operation)   //w zale¿noœci od podanego symbolu porównania wykonujemy dzia³anie
{
    if (operation == '=')
    {
        std::cout << "Czy rowne: ";
        printBoolAsText(a == b), true;
    }
    else if (operation == '!')
    {
        std::cout << "Czy rozne ";
        printBoolAsText(a != b), true;
    }
    else if (operation == '>')
    {
        std::cout << "Czy pierwsza wieksza?";
        printBoolAsText(a > b), true;
    }
    else
    {
        std::cout << "Czy pierwsza mniejsza?";
        printBoolAsText(a < b), true;
    }
}

int main()
{
    float a = readNumber(1);
    float b = readNumber(2);

    checkTwoBools(a, b, '=');
    checkTwoBools(a, b, '!');
    checkTwoBools(a, b, '>');
    checkTwoBools(a, b, '<');

}

