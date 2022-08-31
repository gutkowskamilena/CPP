#include "MorseCodeTranslator.hpp"
#include <map>
#include <iostream>

void MorseCodeTranslator::alphabetFiller()
{
    alphabet.emplace('a', ".-");
    alphabet.emplace('b', "-...");
    alphabet.emplace('c', "-.-.");
    alphabet.emplace('d', "-..");
    alphabet.emplace('e', ".");
    alphabet.emplace('f', "..-.");
    alphabet.emplace('g', "--.");
    alphabet.emplace('h', "....");
    alphabet.emplace('i', "..");
    alphabet.emplace('j', ".---");
    alphabet.emplace('k', "-.-");
    alphabet.emplace('l', ".-..");
    alphabet.emplace('m', "--");
    alphabet.emplace('n', "-.");
    alphabet.emplace('o', "---");
    alphabet.emplace('p', ".--.");
    alphabet.emplace('q', "--.-");
    alphabet.emplace('r', ".-.");
    alphabet.emplace('s', "...");
    alphabet.emplace('t', "-");
    alphabet.emplace('u', "..-");
    alphabet.emplace('v', "...-");
    alphabet.emplace('w', ".--");
    alphabet.emplace('x', "-..-");
    alphabet.emplace('y', "-.--");
    alphabet.emplace('z', "--..");

    
}

void MorseCodeTranslator::alphabetFiller2()
{
    alphabet2.emplace(".-", 'a');
    alphabet2.emplace("-...", 'b');
    alphabet2.emplace("-.-.", 'c');
    alphabet2.emplace("-..", 'd');
    alphabet2.emplace(".", 'e');
    alphabet2.emplace("..-.", 'f');
    alphabet2.emplace("--.", 'g');
    alphabet2.emplace("....", 'h');
    alphabet2.emplace("..", 'i');
    alphabet2.emplace(".---", 'j');
    alphabet2.emplace("-.-", 'k');
    alphabet2.emplace(".-..", 'l');
    alphabet2.emplace("--", 'm');
    alphabet2.emplace("-.", 'n');
    alphabet2.emplace("---", 'o');
    alphabet2.emplace(".--.", 'p');
    alphabet2.emplace("--.-", 'q');
    alphabet2.emplace(".-.", 'r');
    alphabet2.emplace("...", 's');
    alphabet2.emplace("-", 't');
    alphabet2.emplace("..-", 'u');
    alphabet2.emplace("...-", 'v');
    alphabet2.emplace(".--", 'w');
    alphabet2.emplace("-..-", 'x');
    alphabet2.emplace("-.--", 'y');
    alphabet2.emplace("--..", 'z');
}

MorseCodeTranslator::MorseCodeTranslator()
{
    alphabetFiller();
    alphabetFiller2();
}

std::string MorseCodeTranslator::toMorseCode(std::string input)
{
    std::string temp = "";
    for (int i = 0; i < input.length(); ++i)
    {
        temp += alphabet.find(input[i])->second;
        temp += " ";
    }
    return temp;
}

std::string MorseCodeTranslator::fromMorseCode(std::string input)
{
    std::string letter = "";
    std::string word = "";
    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] != ' ')
        {
            letter += input[i];
        }
        else
        {
                word += alphabet2.find(letter)->second;
                letter = "";
        }
    }
    word += alphabet2.find(letter)->second;
    return word;
}
