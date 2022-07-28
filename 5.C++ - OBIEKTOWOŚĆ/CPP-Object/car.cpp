#include "Car.hpp"
#include <iostream>

void Car::Engine::changeOil()
{
	std::cout << "Wymiana oleju w silniku";
}

void Car::Engine::setEngineType(EngineType engineType)
{
	this->engineType = engineType;
}

Car::Car(EngineType myType)
{
	engine.setEngineType(myType);          //wykorzystujemy metode klasy wewnetrznej Engine
}

void Car::annualService()
{
	engine.changeOil();
}
