#include <iostream>
#include <string>
#include <set>
#include <iostream>
#include "StringCensor.hpp"

int main()
{
    StringCensor myObject;
    myObject.addCensoredLetter('a');
    myObject.addCensoredLetter('e');
    myObject.addCensoredLetter('i');

    std::cout << myObject.censor("wlazl kotek na plotek i mruga");;
}
