#include <iostream>

int sumFunction(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number = 0;
    std::cout << "Podaj liczbe n kolejnych liczb calkowitych ";
    std::cin >> number;
    int a = sumFunction(number);
    std::cout << "Suma n kolejnych liczb wynosi " << a << std::endl;

}
