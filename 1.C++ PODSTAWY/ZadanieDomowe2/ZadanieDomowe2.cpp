#include <iostream>

void returnMonth(int iterations = 3)
{
	unsigned int number = 1;

		for (int i = 0; i < iterations; i++)
		{
			std::cout << "Podaj numer miesiaca" << std::endl;
			std::cin >> number;

			if (((number % 1) == 0) && (number < 13) && (number > 0))
			{

				std::cout << "Podano miesiac numer " << number << std::endl;
				break;


			}
			else
			{
				std::cout << "Podano niepoprawny numer miesiaca." << std::endl;
			}
		}
}


int main()
{
	returnMonth(6);
	







	//unsigned int number = 1;

	//for (int i = 0; i < 3; i++)
	//{
	//	std::cout << "Podaj numer miesiaca" << std::endl;
	//	std::cin >> number;

	//	if (((number % 1) == 0) && (number < 13) && (number > 0))
	//	{

	//		std::cout << "Podano miesiac numer " << number << std::endl;
	//		break;


	//	}
	//	else
	//	{
	//		std::cout << "Podano niepoprawny numer miesiaca." << std::endl;
	//	}
	//}
	;
}
