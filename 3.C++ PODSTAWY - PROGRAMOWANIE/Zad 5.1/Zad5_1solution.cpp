#include "Zad5_1solution.h"
#include <iostream>

void taskA(int num[], int size)
{
	std::cout << "A: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskB(int num[], int size)
{
	std::cout << "B: " << std::endl;

	for (int i = size-1; i >= 0; i--)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskC(int num[], int size)
{
	std::cout << "C: " << std::endl;

	for (int i = 1; i < size; i += 2)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskD(int num[], int size)
{
	std::cout << "D: " << std::endl;

	for (int i = 0; i < size; i += 3)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskE(int num[], int size)
{
	int sumAll = 0;
	std::cout << "E: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		sumAll += num[i];
	}
	std::cout << sumAll << std::endl;
	
}

void taskG(int num[], int size)
{
	int sumAll = 0;
	std::cout << "G: " << std::endl;

	
		int i = 0;
		do
		{
			sumAll += num[i];
			i++;
		} while (sumAll <= 10);
	
	std::cout << i << std::endl;

}

void taskH(int num[], int size, int n)
{
	std::cout << "H: " << std::endl;

	for (int i = 0; i < size; i += n)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskI(int num[], int size, int m)
{
	std::cout << "I: " << std::endl;

	for (int i = 0; i < size; i ++)
	{
		if (num[i] % m == 0) 
		{
			std::cout << num[i] << "; ";
		}
	}
	std::cout << std::endl;
}
