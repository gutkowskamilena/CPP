#include <iostream>
#include <iomanip>
#include<math.h>

void printDoubleNumber(double d)
{

    if (d < 0.0) 
    {
        std::cout << '-';
        d *= -1.0;
    }
    int a = static_cast<int>(d);  //pod a amamy czesc calkowita z double'a
    double b = d - a;  //czesc po przecinku
    int n1 = 1;  //liczba cyfr czesci calkowitej
    int n2 = 1;  //liczba cyfr po przecinku

    while (a > 9)
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d); //odswiezamy te wartosc

    for (int i = 0; i < n1; i++)
    {
        //tutaj wyciagamy kolejne cyfry z czesci calkowitej ode lewej do prawej
        //123
        //123/100 ->
        
        int p = static_cast<int>( pow(10, n1 - i - 1)) ;
        int c = a / p;
        a -= c * p;
        std::cout << c;
    }
    std::cout << '.';
    do
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << c;
        b-= c;
    } while (b>0.0);
}

int main()
{
    printDoubleNumber(123.456);
}
