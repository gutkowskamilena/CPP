#pragma once
#include<string>
#include <map>
class MorseCodeTranslator
{
    std::map<char, std::string> alphabet;
    std::map<std::string, char> alphabet2;
    void alphabetFiller();
    void alphabetFiller2();

public:
    MorseCodeTranslator();
    std::string toMorseCode(std::string input);
    std::string fromMorseCode(std::string input);
};