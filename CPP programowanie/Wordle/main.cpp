#include "Wordle.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	Wordle game("BEADY");
	std::string word;
	do
	{
		
		std::cin >> word;
		game.test(word);
		//std::cout << colours << std::endl;
		game.draw();
	} while (!game.isFinished(word));

	return 0;
}
