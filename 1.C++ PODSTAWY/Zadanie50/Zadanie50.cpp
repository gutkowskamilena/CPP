#include <iostream>

int main()
{
	int number = 0;
	const int size = 10;
	double tab[size] = {};
	for (int i = 0; i < size; i++)
	{
		std::cout << "Podaj liczbe calkowita" << std::endl;
		std::cin >> number;
		tab[i] = static_cast<float>(number);
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << " tab[" << i << "] = " << tab[i] << std::endl;
	}
}
