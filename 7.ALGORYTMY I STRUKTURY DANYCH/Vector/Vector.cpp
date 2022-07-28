#include "Vector.hpp"

Vector::Vector()
	: _size(0)
	, _capacity(0)
	, _data(nullptr)
{

}

Vector::Vector(unsigned int capacity)
	: _size(0)
	, _capacity(capacity)
{
	_data = new int[_capacity];
}

Vector::Vector(const Vector& old)
{
	_capacity = old._capacity;
	_size = old._size;

	_data = new int[_capacity]; //utworz nowa pamiec dla naszego wektora
	for (unsigned int i = 0; i < old._size; ++i) //i skopiuj do niej wszystko z drugiego wektora
	{
		_data[i] = old._data[i];
	}
}

Vector::~Vector()
{
	if (_data != nullptr) // usuni�cie nullptr jest calkowicie legalne, ale uczymy sie i zapamietujemy ze mimio wszystko jakikolwiek dostep do wskaznika powinien byc poprzedzony sprawdzeniem czy wskazuje na cokolwiek
	{
		delete[] _data; // usuwamy tablice na ktora wskazuje wskaznik _data
		_data = nullptr; // po usunieciu wskaznika (zwolnieniu pamieci) ustawimy zawsze nulltpr aby dwa razy nie usunac tej pamieci, albo zeby niechcacy nie probowac sie do niej dobrac
	}
}

unsigned int Vector::capacity() const
{
	return _capacity;
}

unsigned int Vector::size() const
{
	return _size;
}

bool Vector::empty() const
{
	return _size == 0;
}

void Vector::push_back(const int& value)
{
	if (_size >= _capacity) //jesli potrzeba to zwi�ksz pami��
	{
		reserve((_capacity + 1) * 2);
	}

	_data[_size++] = value;
}

void Vector::reserve(unsigned int capacity)
{
	//todo: exception if cap=0
	int* data = new int[capacity]; //nowa tablica na elementy
	for (unsigned int i = 0; i < _size; ++i) //skopiuj wszystko do niej
	{
		data[i] = _data[i];
	}
	_capacity = capacity;
	delete[] _data; //zwolnij stara pamiec 
	_data = data; //nadpisz wskzanik tak zeby wektor przechowywa� ju� nowa wi�ksza pami��
}

void Vector::clear()
{
	_size = 0;
}

int& Vector::operator[](unsigned int position)
{
	if (position > _size)
	{
		//todo: exception
	}

	return _data[position];
}

Vector& Vector::operator=(const Vector& other)
{
	//przy wolaniu delete nie trzeba sprawdzac czy wskaznik jest nullptr
	delete[] _data; // usuwamy tablice na ktora wskazuje wskaznik _data

	_capacity = other._capacity;
	_size = other._size;

	_data = new int[_capacity]; //utworz nowa pamiec dla naszego wektora
	for (unsigned int i = 0; i < other._size; ++i) //i skopiuj do niej wszystko z drugiego wektora
	{
		_data[i] = other._data[i];
	}

	return *this;
}

void Vector::copyTo(Vector& other, unsigned int index)
{	
	//if (index > _size)
	//{
	//	//todo: wyjatek
	//}

	if ((_size +  other._size) >= _capacity) //upewnic sie ze mamy miejsce na przesuwanie
	{
		reserve((_capacity + 1) * 2);
	}

	for (unsigned int i = (_size + other.size() - 1); i > (index - other.size()) ; --i) //petla robiaca miejsce na wstawiany wektor
	{
		_data[i] = _data[i  - other.size()];
	}
	unsigned int m = 0;

	for (unsigned int i = index,m = 0 ; i < _capacity || m < other._size; ++i, ++m)
	{
		_data[index] = other._data[m]; // wpisujemy now� warto��
	}
	
	_size+= other.size(); //zwiekszamy rozmiar o other.size()
}

void Vector::remove(unsigned int from, unsigned int to)
{
}

void Vector::pop_back()
{
}

void Vector::bubbleSort()
{
}

void Vector::insert(int value, unsigned int index)
{
	if (index > _size)
	{
		//todo: wyjatek
	}

	if (_size >= _capacity) //upewnic sie ze mamy miejsce na przesuwanie
	{
		reserve((_capacity + 1) * 2);
	}

	for (unsigned int i = _size; i > index; --i) //petla robiaca miejsce na wstawiany element
	{
		_data[i] = _data[i - 1];
	}

	_data[index] = value; // wpisujemy now� warto��
	++_size; //zwiekszamy rozmiar o 1
}

void Vector::remove(unsigned int index)
{
	if (index > _size)
	{
		//todo: wyjatek
	}

	for (unsigned int i = index; i < _size; ++i)
	{
		_data[i] = _data[i + 1];
	}

	--_size;
}