#include "TicTacToe.hpp"

int main()
{
	std::cout << "Czy gracz pierwszy to AI: ";
	std::string choice;
	std::cin >> choice;
	if (choice == "tak")
	{

	}
	else
	{
		Player* p1;
		p1 = new Player(CheckerState::X);
	}
	
	Player* p2;
		p2= new Player(CheckerState::O);
	Game g(p1, p2);
	g.start();

	delete p1;
	delete p2;

	return 0;
}
