#include <iostream>

double squareArea(double side)
{
	double area = 0;
	if (side > 0)
	{
		std::cout << "Pole powierzchni wynosi ";
		area = side * side;
		return area;
	}
	else
	{
		std::cout << "Error" << std::endl;
		return 0;
	}
}

int main()
{
	double P1 = squareArea(-3);
	std::cout << P1 << std::endl;
}

