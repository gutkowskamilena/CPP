#include <iostream>

int main()
{
	int tab[6];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 2;
	tab[4] = 1;
	tab[5] = 2;

	std::cout << (tab[0]) + tab[5]) << std::endl;

	int i = tab[2]; //3
	int z = tab[i]; //4
	int y = tab[tab[4]];  //6

	const int size = 100;
	int numbers[size];

	for (int i = 0; i < size; i++)
	{
		numbers[i] = i + 1;
	}

	for (int i = 0; i < size; i++)



}

