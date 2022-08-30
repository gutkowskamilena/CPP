#include <iostream>
#include <string>

std::string reverseString(std::string input)
{
    std::string temp="";
    for (int i = input.length(); i >= 0; --i)
    {
        temp+=input[i];
    }
    return temp;
}

int main()
{
    std::string myString = "";

    std::cout << "Podaj string" << std::endl;
    std::cin >> myString;
    std::cout << reverseString(myString);
}
