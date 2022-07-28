#include <iostream>

bool checkValue(int tab[], const int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (tab[i] == value)
		{
			return true;
		}
	}
	return false;
}

bool checkValue2(int tab[], const int size, int value)
{
	bool contains = false;
	for (int i = 0; i < size; i++)
	{
		if (tab[i] == value)
		{
			contains = true;
		}
	}
	return contains;
}

int checkHowMany(int tab[], const int size, int value)
{
	int counting = 0;
	for (int i = 0; i < size; i++)
	{
		if (tab[i] == value)
		{
			counting += 1;
			
		}
		else
		{
			continue;
		}
	}
	return counting;
}

int main()
{
    int tab[20] = { 10, 11, 12, 13, 442, 123, 53, 1236, 866, 431, 1235, 754, 123, 642, 8866, 975, 123, 412, 123, 122 };

	int a = checkHowMany(tab, 20, 123);
	std::cout << "odpowiedz: " << a;
  
}
