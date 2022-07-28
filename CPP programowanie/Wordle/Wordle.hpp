#pragma once
#include <stdlib.h> 
#include <iostream>
#include <string>



class Wordle
{
	std::string secret;
	std::string guesses[6];
	std::string answers[6];
	int attempt = 0;
	bool findIfExists(char c);
public:
	Wordle(std::string secret);
	void test(std::string guess);
	void draw(); // wypisz obie tablice, jedna obok drugiej + na poczatku wyczyscic ekran
	bool isFinished(std::string guess); // sprawdzamy czy slowo to secret oraz porownac liczbe attempt
	//bool isFinished(std::string colours); // sprawdzamy czy slowo to "GGGGG"


};

// std::cout << '\t'
// wynik metody draw
//IRATE \t BBGBO
//CEASE \t BGGBB
//HEAVY \t BGGBB
//BEADY \t GGGGG
