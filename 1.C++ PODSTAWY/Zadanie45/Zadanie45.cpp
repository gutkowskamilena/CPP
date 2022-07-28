#include <iostream>

int main()
{
	//char tab[] = "teksT DO zmiAnY";

	//for (int i = 0; tab[i] != 0; i++)
	//{
	//	if (tab[i] < 91)
	//	{
	//		continue;
	//	}
	//	tab[i] -= 32;


	//}
	//std::cout << tab << std::endl;

	char literki[] = "aLa Ma kotA";
	

	for (int i = 0; literki[i] != 0; i++)
	{
		if (literki[i] >= 'a' && literki[i] <= 'z')
		{
			literki[i] -= 32;
		}
		else if (literki[i] >= 'A' && literki[i] <= 'Z')
		{
			literki[i] += 32;
		}

	}
	std::cout << literki << std::endl;


}
