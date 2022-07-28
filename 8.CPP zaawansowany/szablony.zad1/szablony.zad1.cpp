#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

template<typename T>
T max(T a, T b)
{
    T result;
    if (a > b)
        result = a;
    else
        result = b;

    return result;
    //return a>b? a:b; (ternamry)
}

template<typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}


template<>
char* max(char* a, char* b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }
    else
        return b;
}

template<typename T>
T max(T* data, const unsigned int size)
{
    T tmpMax = data[0];
    for (int i = 0; i < n - 1; i++)
    {

    }
}



int main()
{
    int num1 = 100;
    int num2 = 10;
    std::cout << "wieksza int: " << max(num1, num2);

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << "Wiekszy ptr: " << *max(ptr1, ptr2);

    std::cout << "Wiekszy lancuch: " << max("AAAAAAAAAAAAAAA", "bbbb") << std::cout;

    const unsigned int size = 10;
    int tab[size] = { 0, 412, 50, 12, 2, 3 , 6 , 7 , 8 ,9 };
}