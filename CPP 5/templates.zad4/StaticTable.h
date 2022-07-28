#pragma once

template<typename T, unsigned int N>
class StaticTable
{
public:
	T& operator[](const unsigned int i)
	{
		//TO DO wyj¹tek 
		return tab[i];
	}

	template<typename T2>
	void print(T2 separatpr)
	{
		//wypisuje cala tablice uzywajac zmiennej T2 separator jako znaku rozdzielaj¹cego wartosci
	}

private:
	T tab[N];


};


template<unsigned int N>
class StaticTable<bool, N>
{
	bool& operator[](const unsigned int i)
	{
		//TO DO wyj¹tek 
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
		//TO DO wyj¹tek 
		return tab[i];
	}

	template<typename T2>
	void print(T2 separatpr)
	{
		//wypisuje cala tablice uzywajac zmiennej T2 separator jako znaku rozdzielaj¹cego wartosci
	}

private:
	T tab[N];


};