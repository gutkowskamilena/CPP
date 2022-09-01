#include <random>
#include <algorithm>
#include <numeric>
#include "RectangleGenerator.hpp"

RectangleGenerator::RectangleGenerator()
{
}

RectangleGenerator::RectangleGenerator(int sizeMin, int sizeMax)
{
	_sizeMin = sizeMin;
	_sizeMax = sizeMax;
}

Rectangle RectangleGenerator::generateRect()
{
	std::random_device randomDevice;
	std::default_random_engine randomEngine(randomDevice());
	std::uniform_int_distribution<int> dist(_sizeMin, _sizeMax);
	return Rectangle(dist(randomEngine), dist(randomEngine));
}
