#pragma once
struct Point
{
	int x, y;
};
class Rectangle 
{
	int a = 0, b = 0;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(Point ur, Point ll);      //ur - upper right, ll - lower left
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};

class Circle
{
	int r = 0;
public:
	void setDimension(int x);
	int getField();
	double getCircuit();
};