#include <iostream>
void checkPrimeAndFindNext()
{	
	bool prime = 0;
	int number = 0;
	std::cout << "Podaj liczbe" << std::endl;
	std::cin >> number;
	for (int i = 2; i <= number; i++)
	{
		if (i == number)
		{
			std::cout << "Podana liczba jest liczba pierwsza" << std::endl;
			prime = 1;
			break;
		}
		else if (number % i == 0)
		{
			std::cout << "Podana liczba nie jest liczba pierwsza" << std::endl;
			prime = 0;
			break;
		}
		else
		{
			continue;
		}
	}
	
	if (prime == 0)
	{
		for (int i = number; i <= INT_MAX; i++)
		{
			for (int k = 2; k <= i; k++)
			{
				if (k == i)
				{
					std::cout << "najblizsza wieksza liczba pierwsza od podanej to " << i << std::endl;
					prime = 1;
					break;

				}
				else if (i % k == 0)
				{
					prime = 0;
					break;

				}
				else
				{
					continue;
				}

			}
			if (prime == 1)
			{
				break;
			}
		}

	}


}

int main()
{
	checkPrimeAndFindNext();
}
