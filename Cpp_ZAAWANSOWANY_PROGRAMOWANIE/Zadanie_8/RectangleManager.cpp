#include <random>
#include <algorithm>
#include <numeric>
#include "RectangleManager.hpp"
#include "RectangleGenerator.hpp"
#include <vector>


void printRectange(Rectangle rect)
{
	std::cout << "bok a = " << rect.getA() << "; bok b = " << rect.getB() << std::endl;
}
void printArea(Rectangle rect)
{
	std::cout << "pole: " << rect.getArea() << std::endl;
}

RectangleManager::RectangleManager(int amountOfRectangles)
{
	for (int i = 0; i <= amountOfRectangles; ++i )
	{
		RectangleGenerator tempObj(0, 10);
		vectorOfRectangles.push_back(tempObj.generateRect());
	}
}

void RectangleManager::printRectangles()
{
	std::for_each(vectorOfRectangles.begin(), vectorOfRectangles.end(), printRectange);
}

size_t RectangleManager::countRectangleBiggerThan(int area)
{
	auto isBiggerThan = [area](Rectangle rect) { return rect.getArea() > area; };

	size_t counter = count_if(vectorOfRectangles.begin(), vectorOfRectangles.end(), isBiggerThan);
	return counter;
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
	std::vector <Rectangle> newVector;
	auto copyIf = [](Rectangle rect) {return rect.isSquare(); };
	std::copy_if(vectorOfRectangles.begin(), vectorOfRectangles.end(), std::back_inserter(newVector),copyIf);
	std::for_each(newVector.begin(), newVector.end(), printRectange);
	return newVector;
}

bool descSort(Rectangle i, Rectangle j) { return i.getArea() > j.getArea(); }
void RectangleManager::sortAreaDescending()
{
	std::sort(vectorOfRectangles.begin(),vectorOfRectangles.end(), descSort);
	std::for_each(vectorOfRectangles.begin(), vectorOfRectangles.end(), printArea);

}
bool invalidFunction(const Rectangle& rect)
{
	return (rect.getA() == 0) || (rect.getB() == 0);
}
void RectangleManager::deleteInvalid()
{
	vectorOfRectangles.erase(std::remove_if(vectorOfRectangles.begin(), vectorOfRectangles.end(), invalidFunction), vectorOfRectangles.end());

}
