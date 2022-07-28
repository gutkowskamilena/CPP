
#include <iostream>

int findMax(int tab[], const int size)
{
	int maxValue = tab[0];
	for (int i = 1; i < size; i++)
	{
		if (tab[i] > maxValue)
		{
			maxValue = tab[i];
		}
			
	}
	return maxValue;
}

int findMaxIndex(int tab[], const int size)
{
	int maxValue = tab[0];
	int maxIndex = 0;
	for (int i = 1; i < size; i++)
	{
		if (tab[i] > maxValue)
		{
			maxValue = tab[i];
			maxIndex = i;
		}
		
	}
	
	return maxIndex;
}

int main()
{
	const int size = 4;
	int tab[size];

	for (int i = 0; i < size; i++)
	{
		std::cin >> tab[i];
	}
	std::cout << std::endl;

int idx = findMaxIndex(tab, size);


std::cout << "Najwiekszy element w tej tablicy to: tab[" << idx << "] = " << tab[idx];
	
}

