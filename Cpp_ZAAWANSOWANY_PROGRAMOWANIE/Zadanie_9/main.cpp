#include <iostream>
#include "CaesarCipher.hpp"

int main()
{
    CaesarCipher myWord;
    std::cout << myWord.cypher("dzis jest dobry dzien", 2) << std::endl;
    std::cout << myWord.decepher("fbku lguv fqdta fbkgp", 2) << std::endl;


}
