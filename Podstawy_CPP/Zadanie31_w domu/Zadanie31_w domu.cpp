#include <iostream>

void echoqQ()
{
    char i;
    do
    {
        std::cin >> i;
        std::cout << "Podano " << i << std::endl;
        
    } while ((i != 'q') && (i != 'Q'));
}
int main()
{
    echoqQ();
}

