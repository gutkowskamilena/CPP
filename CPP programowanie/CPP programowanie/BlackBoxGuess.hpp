# pragma once

class BlackBoxGuess
{
	int hiddenNumber;
public:
	BlackBoxGuess(int range); //zakres losowania = <0, range>
	int is (int guess);			//kt�ra zwraca 1 je�li szukana liczba jest wi�ksza, 0, je�li to ta liczba, 1 je�li szukana liczba jest mniejsza.

};