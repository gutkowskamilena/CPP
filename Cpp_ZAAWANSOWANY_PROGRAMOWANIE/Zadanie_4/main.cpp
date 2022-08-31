#include <iostream>
#include <map>
#include "MorseCodeTranslator.hpp"
int main()
{
    MorseCodeTranslator myObject;
    std::cout << myObject.toMorseCode("ptak") << std::endl;                    //.--. - .- -.-
    std::cout << myObject.fromMorseCode(".--. - .- -.-") << std::endl;         //ptak
    std::cout << myObject.fromMorseCode(".--. .. . ...") << std::endl;         //pies
}

