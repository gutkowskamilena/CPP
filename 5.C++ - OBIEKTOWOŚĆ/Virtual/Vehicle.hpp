#pragma once
class Vehicle
{
	int* lastDrives;
public:
	Vehicle(); //uzupelnic
	virtual void drive() = 0;
};
class Bus : public Vehicle
{
public:
	void drive()override;
};
class Bicycle : public Vehicle
{
public:
	void drive() override;
};