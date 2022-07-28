
#include <iostream>

int main()
{
	char sign = 0;
	std::cout << "Podaj znak" << std::endl;
	std::cin >> sign;

	std::cout << "ASCII: " << static_cast<int>(sign) << std::endl;

}
