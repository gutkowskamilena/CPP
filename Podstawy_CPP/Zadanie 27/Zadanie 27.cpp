#include <iostream>
void printCharacter(char charToPrint = '?', int numTimes = 1)
{
    for (int i =0; i < numTimes; ++i)
    {
        std::cout << charToPrint << " ";
    }
}


int main()
{
    printCharacter('*', 10);
    printCharacter();
}
