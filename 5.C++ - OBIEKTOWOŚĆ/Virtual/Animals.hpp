#pragma once
#include <string>
class Animal
{
	std::string name;
public:
	
	Animal(std::string _name):name(_name)
	{std::cout << "Animal class condtructor" << std::endl;}
	~Animal(){std::cout << "Animal class destructor" << std::endl;}
	std::string getName() { return name; }
	void roar() { std::cout << "Animal roars!" << std::endl; };
	void sleep() { std::cout << "Animal sleeps" << std::endl; };

};

class Lion : public Animal
{
public:
	
	void roar(){std::cout << "Lion roars" << std::endl;};
	void feast() { std::cout << "Lion feasts" << std::endl; };
};

class Mammal : public Animal
{
public:
	Mammal(std::string _name) :Animal(_name){std::cout << "Mammal class condtructor" << std::endl;}
	~Mammal(){std::cout << "Mammal class destructor" << std::endl;}
};

class Dog : public Mammal
{
public:
	Dog(std::string _name = "Reksio") :Mammal(_name) { std::cout << "Dog class condtructor" << std::endl; }
	~Dog() { std::cout << "Dog class destructor" << std::endl; }
	
};

class Cat : public Mammal
{
public:
	Cat(std::string _name) :Mammal(_name) { std::cout << "Cat class condtructor" << std::endl; }
	~Cat() { std::cout << "Cat class destructor" << std::endl; }
	
};