#pragma once
#include <string>
#include <set>
#include <iostream>

class StringCensor
{
	std::set <char> censoredList;
public:
	void addCensoredLetter(char c);
	std::string censor(std::string sentence);
};