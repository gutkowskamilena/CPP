#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Podaj pierwsza liczbe: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj druga liczbe: " << std::endl;
	std::cin >> b;
	
	if (a > b)
	{
		std::cout << std::endl << "Wieksza jest liczba " << a << std::endl;
	}
	else if (a < b)
	{
		std::cout << std::endl << "Wieksza jest liczba " << b << std::endl;
	}
	else
	{
		std::cout << "Liczby sa rowne." << std::endl;
	}
}

