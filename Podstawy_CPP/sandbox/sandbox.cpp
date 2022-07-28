#include <iostream>

void helloWorld()
{
    std::cout << "Hello World!" << std::endl;
}
void printWithNewLine(int number)
{
    std::cout << number << std::endl;
}
double getNumFromUser()
{
    double numUser = 0;
    std::cout << "Podaj liczbe " << std::endl;
    std::cin >> numUser;
    return numUser;
}
int testFunction()
{
    int parametr = 0;
    std::cout << "Podaj liczbe calkowita " << std::endl;
    std::cin >> parametr;
    if (parametr > 0)
    {
        if (parametr % 2 == 0)
        {
            return 2 * parametr;
        }
        else
        {
            return -parametr;
        }
    }
    else if (parametr < 0)
    {
        return parametr;
    }
    else
    {
        return 0;
    }
}



int main()
{
    //helloWorld();
    //printWithNewLine(123);
    //double a = getNumFromUser();
    //std::cout << "a = " << a << std::endl;
    //int b = testFunction();
    //std::cout << b << std::endl;

    int number = 0;
    int countEven = 0;
    std::cout << "Podaj dziesiec liczb" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> number;
        if((number%2) == 0)
        {
            countEven += 1;
        }

    }
    std::cout << countEven << std::endl;
    ;
}
