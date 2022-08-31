#include "StringCensor.hpp"
#include <string>
#include <set>
#include <iostream>

void StringCensor::addCensoredLetter(char c)
{
	censoredList.insert(c);
}

std::string StringCensor::censor(std::string sentence)
{
	std::string censoredString = "";

	for (int i = 0; i < sentence.length(); ++i)
	{
		if (censoredList.count(sentence[i]) > 0)
		{
			censoredString += "*";
		}
		else
		{
			censoredString += sentence[i];
		}
	}

	return censoredString;
}
