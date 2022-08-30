#include "StringConverter.hpp"
#include <cctype>
std::string StringConverter::toCamelCase(std::string input)
{
    std::string temp = "";
    for (int i = 0; i < input.length(); ++i)
    {
        if ((input[i] > 96) && (input[i] < 123) || (input[i] > 64) && (input[i] < 91))
        {
            temp += input[i];
        }
        else
        {
            temp += toupper(input[i + 1]);
            i++;
            
        }
    }
    return temp;
}

std::string StringConverter::toSnakeCase(std::string input)
{
    std::string temp = "";
    for (int i = 0; i < input.length(); ++i)
    {
        if ((input[i] > 96) && (input[i] < 123))
        {
            temp += input[i];
        }
        else
        {
            temp += "_";
            temp+=tolower(input[i]);
        }
    }

    return temp;
}
