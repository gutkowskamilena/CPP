#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle()
{
	lastDrives = new int[4];
}

void Bus::drive()
{
	std::cout << "Autobus jedzie" << std::endl;
}

void Bicycle::drive()
{
	std::cout << "Rower jedzie" << std::endl;
}

int main()
{
	Vehicle* v = new Bus();
	v->drive();
	delete v;
}
