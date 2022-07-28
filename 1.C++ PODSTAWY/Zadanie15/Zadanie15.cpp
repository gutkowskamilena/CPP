// Zadanie15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;

	std::cout << "Podaj bok a: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj bok b: " << std::endl;
	std::cin >> b;
	std::cout << "Podaj bok c: " << std::endl;
	std::cin >> c;

	bool warunek1 = ((a + b) > c);
	bool warunek2 = ((a + c) > b);
	bool warunek3 = ((b + b) > a);

	bool sprawdzenieWarunku = warunek1 && warunek2 && warunek3; 

	std::cout << "Czy powstanie trojkat? " << sprawdzenieWarunku << std::endl;
}

