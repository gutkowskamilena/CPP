#pragma once
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include "RectangleManager.hpp"

class RectangleGenerator 
{
	int _sizeMin;
	int _sizeMax;
public:
	RectangleGenerator();
	RectangleGenerator(int sizeMin, int sizeMax);
	Rectangle generateRect();

};



