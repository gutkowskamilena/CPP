#include <iostream>

int main()
{
	unsigned short age = 0;
	const unsigned short MIN_age = 4;
	const unsigned short MAX_age = 104;

	std::cout << "Ile masz lat?" << std::endl;
	std::cin >> age;

	if ((age >= MIN_age) && (age <= MAX_age))
	{
		std::cout << "Mozesz grac w gre." << std::endl;
	}
	else
	{
		std::cout << "Nie mozesz grac w gre." << std::endl;
	}
}

