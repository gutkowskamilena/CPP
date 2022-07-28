#include <iostream>

int main(int argc, char* argv[])
{
	//argc zawsze bedzie miec wartosc >=1 bo zawsze jako pierwszy argument podawana jest nazwa programu!!!!!!!!!!!!
	std::cout << "You have entered " << argc << " arguments:" << "\n";

	 for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << "\n";
	
}