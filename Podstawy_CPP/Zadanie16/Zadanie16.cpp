#include <iostream>

int main()
{
	int liczbaDniOdUzytkownika = 0;
	int dniWRoku = 365;
	int dniWMiesiacu = 30;

	std::cout << "Podaj dowolna liczbe dni: " << std::endl;
	std::cin >> liczbaDniOdUzytkownika;

	int lata = liczbaDniOdUzytkownika / dniWRoku;
	int miesiace = (liczbaDniOdUzytkownika - (lata * dniWRoku)) / dniWMiesiacu;
	int dni = (liczbaDniOdUzytkownika - (lata * dniWRoku)) % dniWMiesiacu;

	std::cout 
		<< "Podana liczba dni to: " << std::endl
		<< "Lata: " << lata << std::endl
		<< "Miesiace: " << miesiace << std::endl
		<< "Dni: " << dni << std::endl;

}

