#include <iostream>
#include "CaesarCipher.hpp"

int main()
{
    CaesarCipher myWord;
    std::cout << myWord.cypher("dzis jest dobry dzien", 18) << std::endl;
    std::cout << myWord.decepher("jfoy pkyz juhxe jfokt", 6) << std::endl;


}
