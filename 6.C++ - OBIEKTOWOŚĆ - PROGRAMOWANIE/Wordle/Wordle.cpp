#include "Wordle.hpp"
#include <stdlib.h> 
#include <iostream>
#include <string>

char Wordle::findIfExists(char c)
{
	for (int m = 0; m < 5; m++)
	{
		if (c = secret[m])
		{
			return 'O';
		}
		else
		{
			return 'B';
		}


	}

}

Wordle::Wordle(std::string secret)
{

	this->secret = secret;
}

void Wordle::test(std::string guess)
{
	
	guesses[attempt] = guess;
	std::string answer(5,'B');
	for (int i = 0; i < 5; i++)
	{
		if (guess[i] == secret[i])
			answer[i] = 'G';
		else
		{
			answer[i] = findIfExists(guess[i]);

		}
		answers[attempt] = answer;
	}
	attempt++;
}

void Wordle::draw()
{
	system("cls");
	for (int i = 0; i < 6; i++)
	{

		std::cout << guesses[i] << '\t' << answers[i] << std::endl;

	}
}

bool Wordle::isFinished(std::string guess)
{
	if (attempt == 0)
		return false;

	if (answers[attempt-1] == "GGGGG" || attempt == 6)
		return true;
	else
		return false;

}
