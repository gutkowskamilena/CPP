#include <iostream>

class Fibonacci
{
public:
	int generate(int n)
	{
		int a = 0;
		int b = 1;
		int sum = 0;

		for (int i = 0; i <= n - 2; i++)
		{
			sum = a + b;
			a = b;
			b = sum;

		}
		return sum;
	}
};

int main()
{
	Fibonacci fib;
	std::cout << fib.generate(8);

}

