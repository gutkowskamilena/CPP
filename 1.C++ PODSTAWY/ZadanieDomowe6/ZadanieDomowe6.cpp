#include <iostream>

void checkPrimeNumber()
{
	int number = 0;
	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> number;
	for (int i = 2; i <= number; i++)
	{
		if (i == number)
		{
			std::cout << "Podana liczba jest liczba pierwsza" << std::endl;
			break;
		}
		if (number % i == 0)
		{
			std::cout << "Podana liczba nie jest liczba pierwsza" << std::endl;
			break;
		}
		else 
		{
			continue;
		}
		
	}


}

int main()
{
	checkPrimeNumber();
}
