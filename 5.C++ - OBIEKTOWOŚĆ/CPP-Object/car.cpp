#include "Car.hpp"
#include <iostream>

int Car::Engine::count = 0;
const std::string Car::Engine::localization = "PL";
std::string Car::Engine::year = "2022";
Car::Engine::Engine()
{
	count++;
}



std::string Car::Engine::generateVIN(Engine engine)
{
	std::string result = "";
	if (engine.engineType == EngineType::diesel)
	{
		result += "1";
	}
	else
	{
		result += "2";
	}
	result += localization;

	int sizeIn = static_cast<int>(engine.size * 10);
	std::string sizeString = std::to_string(sizeIn);

	result += engine.getYear();

	result += std::to_string(engine.getCount());

	return result;
}

void Car::Engine::changeOil()
{
	std::cout << "Wymiana oleju w silniku" << std::endl;
}

void Car::Engine::setEngineType(EngineType engineType)
{
	this->engineType = engineType;
}

void Car::Engine::setSize(double size)
{
	this->size = size;
}

int Car::Engine::getCount()
{
	return count;
}

std::string Car::Engine::getYear() const
{
	return year;
}



std::string Car::Engine::getLocatlization() const
{
	return localization;
}



Car::Car(EngineType myType, double size)
{
	engine.setEngineType(myType);          //wykorzystujemy metode klasy wewnetrznej Engine
	engine.setSize(size);
	vin = Car::Engine::generateVIN(engine);
}



void Car::annualService()
{
	engine.changeOil();
}

std::string Car::getVIN()
{
	return vin;
}
