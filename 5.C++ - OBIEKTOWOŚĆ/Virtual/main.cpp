#include <iostream>
#include "Animals.hpp"
#include "Car.hpp"
#include "Dishes.hpp"

void foo(std::string name)
{
    Cat cat(name);
    std::cout << cat.getName() << std::endl;
}

int constructorChains()
{
    Dog dog;
    std::cout << dog.getName() << std::endl;
    foo("Kropka");

}

//int staticBinding()
//{
//    
//    Lion* lion = new Lion();
//    lion->feast();
//
//    Animal* animal = new Lion();
//    animal->sleep();
//
//	delete lion;
//	delete animal;
//
//    return 0;
//}


int tesla()
{
    Tesla t;
    t.drive();
    return 0;
}

int main() {

	std::cout << "co podac? 1-zupa, 2-glowne danie" << std::endl;
	int select;
	std::cin >> select;
	Dish* dish;

	if (select == 1)
	{
		dish = new Soup(200);
	}
	else
	{
		dish = new Main(500);
	}
}