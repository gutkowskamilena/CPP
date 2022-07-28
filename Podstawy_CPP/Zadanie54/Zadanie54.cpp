#include <iostream>
#include <string>



int main()
{
	const int size1 = 3;
	const int size2 = 3;
	std::string colors[size1] = {};
	std::string animals[size2] = {};
	std::string colorsXanimals[size1][size2] = {};

	for (int i = 0; i < size1; i++)
	{
		std::cout << "Podaj kolor" << std::endl;
		std::cin >> colors[i];
	}
	for (int i = 0; i < size1; i++)
	{
		std::cout << "Podaj zwierze" << std::endl;
		std::cin >> animals[i];
	}

	for (int z = 0; z < size1; z++)
	{
		for (int k = 0; k < size2; k++)
		{
			colorsXanimals[z][k] = colors[k] + " " + animals[z];
		}
	}
	for (int j = 0; j < size1; j++)
	{
		for (int i = 0; i < size2; i++)
		{
			std::cout << " tab[" << i << "][" << j << "] = " << colorsXanimals[i][j] << std::endl;
		}
	}
}

