#pragma once
#include <string>
#include "EmployeeManagement.hpp"
#include "UniversityManagement.hpp"

class UniversityFileReader
{
	std::string filepath;
public:
	UniversityFileReader(std::string filepath);
	University read();
};
