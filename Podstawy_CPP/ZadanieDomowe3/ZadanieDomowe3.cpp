#include <iostream>

unsigned int sumDigit(unsigned int number)
{
    unsigned int sumOfDigits = 0;

    do
    {

        sumOfDigits = sumOfDigits + (number%10);
        number /= 10;

    } while (number != 0);

    return (sumOfDigits);

}


int main()
{

    unsigned int number = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    std::cout << "Suma cyfr wynosi " << sumDigit(number) << std::endl;
}