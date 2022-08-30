#pragma once
#include <string>
#include <cctype>

class StringConverter
{
public:
	static std::string toCamelCase(std::string input);
	static std::string toSnakeCase(std::string input);
};