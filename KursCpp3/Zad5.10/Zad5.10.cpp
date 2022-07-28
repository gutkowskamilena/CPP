#include <iostream>

void sumArrays(double tab1[3], double tab2[3])
{
	double tab3[3] = {};
	std::cout << "tab1[] + tab2[] = " << std::endl;
	for (int i = 0; i < 3; i++)
	{		    
			tab3[i] = tab1[i] + tab2[i];
	}
	std::cout << "[";
	for (int i = 0; i < 3; i++)
	{
		std::cout << tab3[i] << "  ";
	}
	std::cout << "]";
}

int main()
{
	double tab1[3] = { 1.5, 2, 3.1 };
	double tab2[3] = { 4, 5.2, 6 };
	sumArrays(tab1, tab2);

}

