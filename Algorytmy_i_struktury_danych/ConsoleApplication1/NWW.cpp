#include <iostream>

class NWW
{
public:
	int calculate(int a, int b)
	{
		int copya = a;
		int copyb = b;
		int t = 0;
		while (b != 0)
		{
			t = b;
			b = a % b;
			a = t;
		}
		return (copya * copyb) / a;
	}
};

int main()
{
	NWW newObject;
	std::cout << newObject.calculate(6, 8);

}
