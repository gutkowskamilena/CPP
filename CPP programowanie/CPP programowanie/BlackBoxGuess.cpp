#include "BlackBoxGuess.hpp"
#include <random>
#include <iostream>
BlackBoxGuess::BlackBoxGuess(int range)
{
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> distrib(0, range);

	hiddenNumber = distrib(gen);
	
}

int BlackBoxGuess::is(int guess)
{
	if (guess == hiddenNumber)
		return 0;

	else if (guess > hiddenNumber)
		return 1;

	else
		return -1;

	
}
