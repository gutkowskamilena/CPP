#include <iostream>

class Euclid
{
public:
	int GreatestCommonDivisor(int a, int b)
	{
		while (a != b)
		{
			if (a < b)
				b = b - a;
			else
				a = a - b;
		}
		return a;
	}
};

int main()
{
	Euclid newObject;
	std::cout << newObject.GreatestCommonDivisor(12,18);

}
