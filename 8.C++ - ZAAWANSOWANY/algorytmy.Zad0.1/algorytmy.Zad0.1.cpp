//Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)

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

	[]() {std::cout << "Hello World!2\n"; }();        //ostatnia para nawiasów oznacza wywo³anie lambdy w miejscu jej zapisu

	//b)
	std::cout << "SUMA1: " << add(1, 2) << std::endl;

	//LAMBDA:                                           //typ_zwracany nazwa_lambdy = [capture_list] (parametry) {cialo_funkcji};
	auto addTwoNumbers = [](int a, int b)
	{
		return a + b;
	};
	std::cout << "SUMA2: " << addTwoNumbers(3, 4) << std::endl;


	//wskaŸnik na funkcje

	auto HelloFunc = Hello;
	HelloFunc();
	void (*PtrName)() = Hello;
	PtrName();

	int (*addPtrFunc)(int, int) = add;                     // typ_zwracany(*nazwa_wskaznika)(parametry) = funkcja;
	std::cout << "SUMA1: " << addPtrFunc(5, 6) << std::endl;

	return 0;
}

