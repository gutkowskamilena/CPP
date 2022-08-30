#include <iostream>
#include <string>


int findCommon(std::string input1, std::string input2)
{
    int counter = 0;
    for (int i = 0; i < input1.length(); ++i)
    {
        for (int j = 0; j < input2.length(); ++j)
        {
            if (input2[j] == input1[i])
            {
                counter++;
            }
            
        }
    }
    return counter;
}



int main()
{
    std::string first = "check if the string contains";
    std::string second = "abc";

    std::cout << findCommon(first, second);
}
