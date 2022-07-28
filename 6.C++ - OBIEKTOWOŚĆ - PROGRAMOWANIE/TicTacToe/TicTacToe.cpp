#include "TicTacToe.hpp"

std::ostream& operator<<(std::ostream& s, const Board& board)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			s << board.check(i, j);
			s << " ";
		}
		s << std::endl;
	}
	return s;
}
//Board board
//std::cout << board;

std::ostream& operator<<(std::ostream& s, const CheckerState& cs)
{
	// zamieniamy wszystkie std::cout na s
	if (cs == CheckerState::EMPTY)
		s << "-";
	else if (cs == CheckerState::X)
		s << "X";
	else if (cs == CheckerState::O)
		s << "O";

	return s;
}
//powyzsze przeciazenie pozwala np na:
//CheckerState cs12 = board.get(1, 2);
//std::cout << cs12;

CheckerState Board::check(int x, int y) const
{
	//moze warto sie zabezpieczyc przed dziwnymi x, y?
	return table[x][y];
}

bool Board::set(CheckerState cs, int x, int y)
{
	table[x][y] = cs;
}

bool Player::makeTurn(Board* board)
{
	return false;
}
