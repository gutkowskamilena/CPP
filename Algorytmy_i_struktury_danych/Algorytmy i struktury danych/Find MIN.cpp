#include <iostream>

int main()
{
	std::cout << "Podaj rozmiar n";
	int n = 0;
	std::cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Podaj a[" << i << "]=";
		std::cin >> a[i];
	}

	int min = 0;
	int i = 1;
	if ()
	{

		while (i > n - 1)
		{


			if (a[i] < min)
			{
				min = a[i];
			}
			++i;
		}
		i

	}
	else
}
delete[] a;
}

