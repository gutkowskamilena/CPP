// Zadanie14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	bool p = false;
	bool q = false;
	bool r = false;

	std::cout << "Podaj liczbe p: " << std::endl;
	std::cin >> p;
	std::cout << "Podaj liczbe q: " << std::endl;
	std::cin >> q;
	std::cout << "Podaj liczbe r: " << std::endl;
	std::cin >> r;

	std::cout << std::endl << "prawo rozdzielnosci wzgledem alternatywy" << std::endl;

	bool lewa = (p && (q || r));
	bool prawa = (p && q) || (p && r);

	std::cout << lewa << "<==>" << prawa << std::endl;
	
	std::cout << "II prawo de Morgana" << std::endl;

	lewa = (!(p || q));
	prawa = ((!p) && (!q));

	std::cout << lewa << " <==> " << prawa << std::endl;



}

