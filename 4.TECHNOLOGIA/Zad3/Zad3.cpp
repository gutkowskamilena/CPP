
#include <iostream>
//Zad:napisz funkcje która zmieni ze sob¹ wartosci dwóch zmiennych
void swap(int& a, int& b)
{
    int c = 0;
    //c = a;
    a += b;
    b = a - b;
    a = a - b;
}


int main()
{
    int num1 = 5;
    int num2 = 7;
    swap(num1, num2);
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
   
}
