#include <iostream>
unsigned int sumDigit(unsigned int number)
{
    unsigned int sumOfDigits = 0;

    do
    {

        sumOfDigits = sumOfDigits + (number % 10);
        number /= 10;

    } while (number != 0);

    return (sumOfDigits);

}
void sumDigit2()
{
    unsigned int number = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    while (number >= 10)
    {
        std::cout <<"Suma cyfr liczby " << number << " wynosi: " << sumDigit(number) << std::endl;
        number = sumDigit(number);
    }
     
}

int main()
{
    sumDigit2();
}