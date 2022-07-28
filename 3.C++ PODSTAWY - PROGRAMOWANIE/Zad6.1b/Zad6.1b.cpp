#include <iostream>

int main(int argc, char* argv[])
{
	//argc zawsze bedzie miec wartosc >=1 bo zawsze jako pierwszy argument podawana jest nazwa programu!!!!!!!!!!!!
	std::cout << "You have entered " << argc << " arguments:" << "\n";

	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << "\n";


	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		//argv[i] -> i-ty argument u¿ytk. jest to tablica char
		//argv[i][0] -> dostajemy siê do pierwszego znaku i-tego argumentu
		std::cout << argv[i][0]-'0'<< "; ";

		sum += argv[i][0] - '0';
	}
	std::cout << std::endl << sum;
}