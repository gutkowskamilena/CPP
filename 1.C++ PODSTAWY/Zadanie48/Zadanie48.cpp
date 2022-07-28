
#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
   
    std::cout << "Podaj liczbe 1 " << std::endl;
    std::cin >> num1;
    std::cout << "Podaj liczbe 2 "  << std::endl;
    std::cin >> num2;
    float result = static_cast<float>(num1) / num2;
    
    std::cout << "ich iloraz wynosi " << result << std::endl;
}

