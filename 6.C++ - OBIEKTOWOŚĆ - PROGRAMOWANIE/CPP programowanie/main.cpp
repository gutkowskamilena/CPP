#include <iostream>
#include "BlackBoxGuess.hpp"

int main()
{
	std::cout << "Podaj zakres liczb: ";
	int range;
	std::cin >> range;
	BlackBoxGuess box(range);
	int result = 0;
	do
	{
		std::cout << "Podaj liczbe: ";
		int chosenNumber;
		std::cin >> chosenNumber;
		result = box.is(chosenNumber);
		if (result < 0)
		{
			std::cout << "Moja sekeretna liczba jest mniejsza" << std::endl;
		}
		else if (result == 0)
		{
			std::cout << "Gratulacje! Zgadles" << std::endl;
		}
		else
		{
			std::cout << "Moja sekeretna liczba jest wieksza" << std::endl;
		}
	} while (result != 0);

	return 0;
}