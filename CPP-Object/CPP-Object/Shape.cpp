#include "Shape.hpp"
#include <cmath>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
    this->a = a;
    this->b = b;
}

Rectangle::Rectangle(Point ur, Point ll)
{
    int width = abs(ur.x-ll.x);
    int height = abs(ur.y - ll.y);
    this->a = width;
    this->b = height;
}

void Rectangle::setDimensions(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return 2*a + 2*b;
}

void Circle::setDimension(int x)
{
    r = x;
}

int Circle::getField()
{
    return 3.14*r*r;
}

double Circle::getCircuit()
{
    return 2*3.14*r;
}
