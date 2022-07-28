#include <iostream>

void checkMateA(int size = 8)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			
				if ((i + j) % 2 == 0)
				{
					std::cout << "#";
				}
				else
					std::cout << "o";
			

		}
		std::cout << std::endl;
	}
}

void checkMate2x2(int a = 8) 
{
	for (int i = 0; i < a; i++) 
	{
		for (int m = 0; m < 2; m++)
		{
			for (int j = 0; j < a; j++) {
				for (int k = 0; k < 2; k++)
				{
					if ((i + j) % 2 == 0) {
						std::cout << "#";
					}
					else {
						std::cout << "o";
					}
				}
			}
			std::cout << std::endl;
		}
	}
}

int main()
{
	checkMateA();
	//checkMate2x2();
}
