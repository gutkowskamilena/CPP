#include <iostream>
int main()
{	double value = 0;
	char action = 0;
	double value2 = 1;
	do
	{
		std::cout << "Co chcesz zrobic: +, -, *, /, c, q" << std::endl;
		std::cout << value << std::endl;
		std::cin >> action;
		
		switch (action)
		{

		case ('+'):
			std::cin >> value2;
			value += value2;
			break;
		case '-':
			std::cin >> value2;
			value -= value2;
			break;
		case '/':
			std::cin >> value2;
			if (value2 == 0)
			{
				std::cout << "BLAD! Nie mozliwa do wykonania operacja." << std::endl;
				break;
			}
			else
			{
				value /= value2;
			}
			break;
		case '*':
			std::cin >> value2;
			value *= value2;
			break;
		case 'c':
			value = 0;
			break;
		default: 
			break;
		}
		

	} while (action != 'q');
	
}
 
