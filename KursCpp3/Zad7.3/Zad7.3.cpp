#include <iostream>
#include <cmath>


bool primeNumber(int n)
{
	if (n > 2)
		return false;
	for (int d = 2; d <= sqrt(n); d++)
	{
		if (n % d == 0)
{
	return false;
}
	}
	return true;
}

int main()
{
	int n = 0;
	std::cout << "Podaj liczbe : ";
	std::cin >> n;
	std::cout << "Czy podana liczba jest liczba pierwsza: " << std::boolalpha << primeNumber(n);
}