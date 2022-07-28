#include <iostream>

int sumElements(int tab[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += tab[i];
	}
	return sum;
}

int main()
{
	const int size = 10;
	int tab[size];

	for (int i = 0; i < size; i++)
	{
		std::cin >> tab[i];
	}
	std::cout << std::endl;

	std::cout << "suma: " << sumElements(tab, size);



}
