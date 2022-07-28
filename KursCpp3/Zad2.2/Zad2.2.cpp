
#include <iostream>

int random1_10()
{
    return rand() % 10 + 1;
}
int main()
{
    int a = 0, b = 1, c = 2;
    a = random1_10();
    std::cout << a << std::endl;
    b = random1_10();
    std::cout << b << std::endl;
    c = random1_10();
    std::cout << c << std::endl;

}
