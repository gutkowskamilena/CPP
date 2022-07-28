#include "point.hpp"

Point2D::Point2D(int i, int j) : x(i), y(j)
{

}

Point3D::Point3D(int i, int j, int k) :Point2D(i, j), z(k)
{
};

int Point2D::setCoordinates(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point2D::getCoordinateX()
{
	return x;
}

int Point2D::getCoordinateY()
{
	return y;
}

int Point2D::calculateDistance()
{
	return 0;
}

int Point3D::setCoordinate(int z)
{
	this -> z = z;
}

int Point3D::getCoordinateZ()
{
	return z;
}
