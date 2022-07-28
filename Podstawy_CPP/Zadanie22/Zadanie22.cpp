
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cout << "Podaj pierwsza liczbe calkowita: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj druga liczbe calkowita: " << std::endl;
	std::cin >> b;
	std::cout << "Podaj trzecia liczbe calkowita: " << std::endl;
	std::cin >> c;

	if (a > b && a > c)
	{
		std::cout << std::endl << "Najwieksza jest liczba " << a << std::endl;
	}
	else if (b > c)
	{
		std::cout << std::endl << "Najwieksza jest liczba " << b << std::endl;
	}
	else
	{
		std::cout << "Najwieksza jest liczba " << c << std::endl;
	}
}




