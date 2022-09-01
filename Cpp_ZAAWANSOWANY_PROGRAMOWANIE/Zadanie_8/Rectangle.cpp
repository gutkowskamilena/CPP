#include "Rectangle.hpp"
#include <random>
#include <algorithm>
#include <numeric>
#include "RectangleManager.hpp"
Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b)
{
	_a = a;
	_b = b;
	calculateArea();
}

int Rectangle::getA() const
{
	return _a;
}

int Rectangle::getB() const
{
	return _b;
}

int Rectangle::getArea() const
{
	return _area;
}

bool Rectangle::isSquare()
{	
	return (_a == _b);
}

void Rectangle::calculateArea()
{
	_area = _a * _b;
}






