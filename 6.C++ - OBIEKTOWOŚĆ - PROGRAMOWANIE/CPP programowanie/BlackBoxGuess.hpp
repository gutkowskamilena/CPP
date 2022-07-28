# pragma once

class BlackBoxGuess
{
	int hiddenNumber;
public:
	BlackBoxGuess(int range); //zakres losowania = <0, range>
	int is (int guess);			//która zwraca 1 jeœli szukana liczba jest wiêksza, 0, jeœli to ta liczba, 1 jeœli szukana liczba jest mniejsza.

};