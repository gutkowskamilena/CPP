#include <iostream>

void sumArrays(double tab1[3][3], double tab2[3][3])
{
	double tab3[3][3] = {};
	std::cout << "tab1[] + tab2[] = " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tab3[i][j] = tab1[i][j] + tab2[i][j];
			std::cout << tab3[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	double tab1[3][3] = { {1.5, 2, 3.1},{1, 2, 3.6}, {1 , 2, 3 } };
	double tab2[3][3] = { {4, 5.2, 6}, {2.1, 2.1, 2.1}, {1.1, 2.2, 3.3} };
	sumArrays(tab1, tab2);

}

