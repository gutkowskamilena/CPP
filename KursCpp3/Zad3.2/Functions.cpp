#include "Functions.h"
#include <math.h>

int power(int a, int b)
{
	if (b < 0)
	{
		return -1;
	}
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a;
	}

	int r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}

//tutaj przeciazamy funkcje power

float power(float a, float b)
{
	return	static_cast<float>(pow(a, b));
}