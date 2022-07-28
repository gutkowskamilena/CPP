#include <iostream>
#include <string>

std::string mergeStrings(std::string str1, std::string str2, char sign)
{
    std::string finalString = str1;
    finalString += sign + str2;

    return finalString;
}

int main()
{
    std::string example = mergeStrings("raz", "dwa", '-');
    std::cout << example;

}

