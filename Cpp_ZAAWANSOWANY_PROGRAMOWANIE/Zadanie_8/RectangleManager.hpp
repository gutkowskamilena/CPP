#pragma once
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include <vector>

class RectangleManager 
{
	std::vector <Rectangle> vectorOfRectangles;
public:
	RectangleManager(int amountOfRectangles);
	void printRectangles();
	size_t countRectangleBiggerThan(int area);
	std::vector <Rectangle> copyRectangles();
	void sortAreaDescending();
	void deleteInvalid();
};

