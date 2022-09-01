#include <iostream>
#include <vector>
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include "RectangleManager.hpp"

int main()
{

	RectangleManager myObject(100);
	myObject.printRectangles();
	std::cout << "o polu wiekszym niz 50 jest "<< myObject.countRectangleBiggerThan(50) << " prostokatow" << std::endl;
	std::cout << "kwadraty:" << std::endl;
	myObject.copyRectangles();
	myObject.sortAreaDescending();
	std::cout << "po usunieciu zerowych: " << std::endl;
	myObject.deleteInvalid();
}
