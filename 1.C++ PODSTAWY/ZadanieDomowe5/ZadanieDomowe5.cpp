#include <iostream>

int sumOddNumbers()
{
	int x = 0;
	int y = 0;
	std::cout << "Podaj pierwsza (najmniejsza) liczbe z przedzialu" << std::endl;
	std::cin >> x;
	std::cout << "Podaj ostatnia (najwieksza) liczbe z przedzialu" << std::endl;
	std::cin >> y;
	int sum = 0;
	int i = x;
	while (i <= y)
	{
		if ((i % 2) != 0)
		{
			sum += i;
		}
		i++;
	}
	return sum;

}

int main()
{
	int a = sumOddNumbers();
	std::cout << "suma liczb nieparzystych z tego przecialu wynosi " << a << std::endl;
}

