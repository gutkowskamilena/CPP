#include <iostream>

template<>
void print(bool a)
{
    if (a)
        std::cout << "prawda";
    else
        std::cout << "falsz";
}

int main()
{
    std::cout << "Hello World!\n";
}