#include <iostream>
#include <list>
#include <random>
#include <algorithm>
#include <numeric>
int main()
{
	std::list <int> liczbyLosowe(50);
	std::random_device randomDevice;
	std::default_random_engine randomEngine(randomDevice());
	std::uniform_int_distribution<int> dist(0, 10);

	for (auto it = liczbyLosowe.begin(); it != liczbyLosowe.end(); it++)
	{
		*it = dist(randomEngine);
	}

	std::for_each(liczbyLosowe.begin(), liczbyLosowe.end(), [](const int i) { std::cout << i << "  "; });

	std::list <int> liczbyParzyste;
	std::list <int> LiczbyNieParzyste;

	for (std::list<int>::iterator i = liczbyLosowe.begin(); i != liczbyLosowe.end(); ++i)
	{
		if (*i == 0)
		{
			LiczbyNieParzyste.push_back(*i);
		}
		else if ((*i) % 2 == 0)
		{
			liczbyParzyste.push_back(*i);
		}
		else
		{
			LiczbyNieParzyste.push_back(*i);
		}
	}
	liczbyParzyste.sort();
	LiczbyNieParzyste.sort();
	LiczbyNieParzyste.reverse();
	liczbyLosowe.clear();
	for (auto it = liczbyParzyste.begin(); it != liczbyParzyste.end(); it++)
	{
		liczbyLosowe.push_back(*it);
	}
	for (auto it = LiczbyNieParzyste.begin(); it != LiczbyNieParzyste.end(); it++)
	{
		liczbyLosowe.push_back(*it);
	}
	std::cout << std::endl << std::endl;
	std::for_each(liczbyLosowe.begin(), liczbyLosowe.end(), [](const int i) { std::cout << i << "  "; });
}
