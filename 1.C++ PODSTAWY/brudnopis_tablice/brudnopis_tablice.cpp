#include <iostream>

int main()
{
	char tabZnakow[] = "Wlazl kotek na plotek i mruga";
	int sum = 0;

	for (int i = 0; tabZnakow[i] != 0; i++)
	{
		sum++;
		std::cout << tabZnakow[i] << " ";
	}
	std::cout << std::endl << "tablica miala: " << sum+1 << " znakow" << std::endl;

	int idx = 0;
	while (tabZnakow[idx] != 0)
	{
		std::cout << tabZnakow[idx] << "+";
		idx++;
	}
	std::cout << std::endl << "tablica miala: " << idx + 1 << " znakow";
}

