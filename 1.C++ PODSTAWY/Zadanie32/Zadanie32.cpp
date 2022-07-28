#include <iostream>

unsigned int numDigit(int number)
{
    unsigned int numDigit = 0;
   
    do 
    {
        numDigit++;
        number /= 10;
               
    } while (number != 0);

    return (numDigit);

}


int main()
{

    int number = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    std::cout << "Liczba ma " << numDigit(number) << " cyfr";
}