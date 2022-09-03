#include "CaesarCipher.hpp"

std::string CaesarCipher::cypher(std::string text, int secretValue)
{
    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == 32)
        {
            ++i;
           
        }
       
        
            text[i] += secretValue;
        
        if (text[i] > (122))
        {
            text[i] -= 26;
        }
    }
    

    return text;
}

std::string CaesarCipher::decepher(std::string text, int secretValue)
{

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == 32)
        {
            ++i;

        }
        text[i] -= secretValue;
        if (text[i] <97)
        {
            text[i] += 26;
        }
    }


    return text;
}
