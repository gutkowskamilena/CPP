
#include <iostream>

int max(int num1, int num2, int num3)
{

	if (num1 > num2 && num1 > num3)
	{
		return num1;

	}
	else if (num2 > num3 && num2 > num1)
	{
		return num2;
	}
	else
	{
		return num3;
	}

}

int main()
{
	int a = max(5, 2, -5);
	std::cout << a << std::endl;
	int b = max(100, 2, 3);
	std::cout << b << std::endl;
	int c = max(50, -50, 0);
	std::cout << c << std::endl;
	

	
}

