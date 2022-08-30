#include <iostream>
#include "StringConverter.hpp"
#include <cctype>
int main()
{
    StringConverter input;
    std::cout << input.toCamelCase("snake_case") << std::endl;
    std::cout << input.toCamelCase("hello_S_D_A") << std::endl;
    std::cout << input.toCamelCase("get_colour") << std::endl;
    std::cout << input.toCamelCase("is_this_first_entry") << std::endl;

    std::cout << input.toSnakeCase("camelCase") << std::endl;
    std::cout << input.toSnakeCase("helloSDA") << std::endl;
    std::cout << input.toSnakeCase("getColour") << std::endl;
    std::cout << input.toSnakeCase("isThisFirstEntry") << std::endl;

}

