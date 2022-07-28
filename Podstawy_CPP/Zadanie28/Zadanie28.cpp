#include <iostream>
void printWord(int numTimes)
{
    for (int i = 0; i < numTimes; ++i)
    {
        std::cout <<"Ku ";
    }
}
int main()
{
    int numTimes1 = 0;

    std::cout << "ile razy wypisac?" << std::endl;
    std::cin >> numTimes1;

    printWord(numTimes1);
    
}

