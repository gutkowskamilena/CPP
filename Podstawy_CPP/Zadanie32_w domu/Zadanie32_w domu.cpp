#include <iostream>

int main()
{
    int number = 0;
    int countIterations = 1;
    std::cout << "Podaj liczbe" << std::endl;
    std::cin >> number;
    
    while (number >= 10)
    {
        countIterations++;
        number /= 10;
        
        //std::cout << number << std::endl;
        
    }
    std::cout << "Podana liczba sklada sie z " << countIterations << " cyfr" << std::endl;
}

