#include <iostream>

int main()
{

	float a = 0;
	float b = 0;
	float c = 0;

	std::cout << "Podaj przyprostokatna a: " << std::endl;
	std::cin >> a;
	std::cout << "Podaj przyprostokatna b: " << std::endl;
	std::cin >> b;
	std::cout << "Podaj przeciwprostokatna c: " << std::endl;
	std::cin >> c;

	bool czyProstokatny = (((a * a) + (b * b)) == (c * c));
	std::cout << "Czy prostokatny?" << std::endl << czyProstokatny << std::endl;




}

