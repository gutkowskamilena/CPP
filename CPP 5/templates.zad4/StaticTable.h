#pragma once

template<typename T, unsigned int N>
class StaticTable
{
public:
	T& operator[](const unsigned int i)
	{
		//TO DO wyjątek 
		return tab[i];
	}

	template<typename T2>
	void print(T2 separatpr)
	{
		//wypisuje cala tablice uzywajac zmiennej T2 separator jako znaku rozdzielającego wartosci
	}

private:
	T tab[N];


};


template<unsigned int N>
class StaticTable<bool, N>
{
	bool& operator[](const unsigned int i)
	{
		//TO DO wyjątek 
		return tab[i];
	}

private:
	bool tab[N];
}

template<typename T, unsigned int N>
class StaticTable
{
public:
	T& operator[](const unsigned int i)
	{
		//TO DO wyjątek 
		return tab[i];
	}

	template<typename T2>
	void print(T2 separatpr)
	{
		//wypisuje cala tablice uzywajac zmiennej T2 separator jako znaku rozdzielającego wartosci
	}

private:
	T tab[N];


};