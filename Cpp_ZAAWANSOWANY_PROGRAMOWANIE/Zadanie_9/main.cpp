#include <iostream>
#include "CaesarCipher.hpp"

int main()
{
    CaesarCipher myWord;
    std::cout << myWord.cypher("kotz", 2) << std::endl;
    std::cout << myWord.decepher("mqvb", 2) << std::endl;


}
