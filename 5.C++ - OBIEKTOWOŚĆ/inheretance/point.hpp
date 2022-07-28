#pragma once
class Point2D
{
public:
	int x, y;
	Point2D(int i, int j);
	int setCoordinates(int x, int y);
	int getCoordinateX();
	int getCoordinateY();
	int calculateDistance();


};

class Point3D : protected Point2D
{
	int z;
public:
	Point3D(int i, int j, int k);

	int setCoordinate(int z);
	int getCoordinateZ();

};
