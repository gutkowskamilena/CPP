#pragma once
#include <string>

class CaesarCipher
{
public:

	std::string cypher(std::string text, int secretValue);
	std::string decepher(std::string text, int secretValue);
};