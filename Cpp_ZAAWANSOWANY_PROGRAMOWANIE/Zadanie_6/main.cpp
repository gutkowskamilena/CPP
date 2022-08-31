#include <iostream>
#include <list>
int main()
{
	std::list <int> lista;
	for (int i = 1; i < 1001; ++i)
	{
		lista.push_back(i);
	}

	std::list <int> liczbyPierwsze;
	std::list <int> nieLiczbyPierwsze;

	for (std::list<int>::iterator i = lista.begin(); i != lista.end(); ++i)
	{

		for (int j = 2; j <= *i; ++j)
		{
			if (j == *i)
			{
				liczbyPierwsze.push_back(*i);
				break;
			}
			else if (((*i) % j) == 0)
			{
				nieLiczbyPierwsze.push_back(*i);
				break;
			}
			else
				continue;
		}
	}

	std::cout << "Liczby pierwsze:" << std::endl;
	for (std::list<int>::iterator i = liczbyPierwsze.begin(); i != liczbyPierwsze.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl << "Liczby pozostale:" << std::endl;
	for (std::list<int>::iterator i = nieLiczbyPierwsze.begin(); i != nieLiczbyPierwsze.end(); ++i)
	{
		std::cout << *i << " ";
	}
}
