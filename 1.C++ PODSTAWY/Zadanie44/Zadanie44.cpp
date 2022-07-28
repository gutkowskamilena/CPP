#include <iostream>

void funkcja(int number, const char lessThan1000[],const char divBy4[],const char negativeNumber[])
{
	if (number >= 1 && number <= 100)
	{
		std::cout << lessThan1000 << std::endl;
	}
	
	if (number % 4 == 0)
	{
		std::cout << divBy4 << std::endl;
	}

	if (number < 0)
	{
		std::cout << negativeNumber << std::endl;
	}
}

int main()
{
	int calkowita = 0;
	const char napis1_1000[] = "liczba z przedzialu 1-1000";
	const char napis4[] = "liczba podzielna przez 4";
	const char napis_ujemna[] = "liczba ujemna";

	std::cout << "podaj liczbe" << std::endl;
	std::cin >> calkowita;
	funkcja(calkowita, napis1_1000, napis4, napis_ujemna);
}
