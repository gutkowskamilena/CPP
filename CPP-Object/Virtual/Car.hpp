#pragma once
#include <iostream>
class Car
{
public:
	Car() { std::cout << "Car constructor" << std::endl; }
	~Car() { std::cout << "Car desctructor" << std::endl; }
	void drive() { std::cout << "Car drives"; }
};
class ElectricCar : public virtual Car
{

};
class AutoTransmissioCar : public virtual Car
{

};

class Tesla : public AutoTransmissioCar, public ElectricCar
{

};