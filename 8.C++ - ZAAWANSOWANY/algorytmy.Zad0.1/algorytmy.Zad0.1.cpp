//Zad 0.1 Lambda
//Napisz zwyk�� funkcj� oraz lambd�(przypisz j� do zmiennej) Nast�pnie je wywo�aj :
//a) funkcj� wypisuj�ca �Hello World�
//b) Funkcja dodaj�ca dwie liczby do siebie(i zwracaj�ca j�)

#include <iostream>

void Hello()
{
	std::cout << "Hello World!\n";
}

int add(int a, int b)
{
	return a + b;
}

int main()
{
	//a)
	Hello();

	auto helloWorld = []() 
	{
		std::cout << "Hello World!\n"; 
	};
	helloWorld();

	//b)
	std::cout << "SUMA1: " << add(1, 2) << std::endl;

	auto addTwoNumbers = [](int a, int b)
	{
		return a + b;
	};
	std::cout << "SUMA2: " << addTwoNumbers(3, 4) << std::endl;



	auto HelloFunc = Hello;
	HelloFunc();
	void (*PtrName)() = Hello;
	PtrName();
	int (*addPtrFunc)(int, int) = add;
	std::cout << "SUMA1: " << addPtrFunc(5, 6) << std::endl;

	return 0;
}

