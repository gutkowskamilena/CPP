#include <iostream>

class Euclid
{
public:
	int GreatestCommonDivisor(int a, int b)
	{
		int t = 0;
		while (b!=0)
		{
			t = b;
			b = a % b;
			a = t;
		}
		return a;
	}
};

int main()
{
	Euclid newObject;
	std::cout << newObject.GreatestCommonDivisor(12, 18);

}
