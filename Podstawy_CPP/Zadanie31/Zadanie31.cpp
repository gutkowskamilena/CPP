#include <iostream>

void echo()
{
    char znak = '0';
    std::cin >> znak;
    while (znak != 'q')
    {
        std::cout << znak << std::endl;
        std::cin >> znak;
    }
}

void echoDoWhile()
{
    char znak = '0';
    do
    {
        std::cout << znak << std::endl;
        std::cin >> znak;

    } while (znak != 'q');
    
}

int main()
{

    echoDoWhile();

}