#include <iostream>

int main()
{
	int number = 0;
	const int size = 10;
	int tab[size] = {};
	int individualNumber = 0;
	std::cout << "Podaj liczbe calkowita" << std::endl;
	std::cin >> number;

	do
	{
		individualNumber = number % 10;
		number /= 10;
		switch(individualNumber)
		{
              case 0:
				  tab[0] += 1;
				  break;
			  case 1:
				  tab[1] += 1;
				  break;
			  case 2:
				  tab[2] += 1;
				  break;
			  case 3:
				  tab[3] += 1;
				  break;
			  case 4:
				  tab[4] += 1;
				  break;
			  case 5:
				  tab[5] += 1;
				  break;
			  case 6:
				  tab[6] += 1;
				  break;
			  case 7:
				  tab[7] += 1;
				  break;
			  case 8:
				  tab[8] += 1;
				  break;
			  case 9:
				  tab[9] += 1;
				  break;
			  default:
				  std::cout << "ERROR!" << std::endl;
				  break;
		}


	} while (number != 0);
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " - " << tab[i] << std::endl;
	}
}

