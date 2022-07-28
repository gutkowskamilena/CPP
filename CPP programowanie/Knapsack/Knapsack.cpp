#include "Knapsack.hpp"
#include <random>

Shop::Shop()
{
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 15); // define the range


	for (int i=0; i < 10; i++)
	{
		items[i].weight = distr(gen);
		items[i].value = distr(gen);
	}
}

Item Shop::steal(int index)
{
	Item result;
	result.value = items[index].value;
	result.weight = items[index].weight;
		items[index].weight = 0;
		items[index].value = 0;

	return result;
}

Item Shop::peek(int index)
{
	return Item();
}

Robber::Robber(int _capacity) : 
{
}

void Robber::robWhatever(Shop& shop)
{
}

int Robber::getValue()
{
	return 0;
}

Backpack::Backpack(int capacity)
{
}

int Backpack::calculateCurrentValue()
{
	return 0;
}
