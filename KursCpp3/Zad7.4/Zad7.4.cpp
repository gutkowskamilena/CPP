#include <iostream>
#include <cmath>


bool isPrimeNumber(int n)
{
	if (n < 2)
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
	int n = 7;
	int l = 0;

	for (int i = 0; i < n; )
	{
		if (isPrimeNumber(l))
		{
			i++;
			std::cout << l << std::endl;
		}
		l++;
	}
}