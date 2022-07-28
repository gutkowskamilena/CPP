#include <iostream>
void swapOrder(char tab[4][4])
{
	const int size = 4;
	char tab1[4][4] = {};
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			tab1[i][j] = tab[i][j];
		}
	}
	int k, m, l, n;
	for (k = size - 1, m = 0; k >= 0 && m < size; k--, m++)
	{

		for (l = size - 1, n = 0; l >= 0 && n < size; l--, n++)
		{
			tab[k][l] = tab1[m][n];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}
}

int main()
{
	const int size2 = 3;
	char tab2[size2][size2] =
	{ {'a', 'b', 'c'},
	  {'d', 'e', 'f'},
	  {'*', '#', '$'} };
	const int size = 4;
	char tab[size][size] = { {'a', 'b', 'c','d'},{'e', 'f','g', 'h'},{'i','j', 'k', 'l'},{'m','n','o','p'} };
	std::cout << "Tablica poczatkowa: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "Tablica - odwocona kolenosc: " << std::endl;
	swapOrder(tab);
}

