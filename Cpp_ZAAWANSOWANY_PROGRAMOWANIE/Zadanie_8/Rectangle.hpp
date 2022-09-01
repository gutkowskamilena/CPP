#pragma once
#include <vector>
#include <iostream>
class Rectangle
{
	int _a;
	int _b;
	int _area;
public:
	Rectangle();
	Rectangle(int a, int b);
	int getA() const;
	int getB() const;
	int getArea() const;
	bool isSquare();
	void calculateArea();

};



