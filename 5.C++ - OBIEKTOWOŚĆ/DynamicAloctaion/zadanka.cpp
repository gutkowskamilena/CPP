//Podstawowe za�o�enie : je�li korzystacie ze wska�nika i operatora new, to nale�y te� zadba� o posprz�tanie pami�ci
//
//1. Utw�rz dynamicznie tablic� n - elementowa, wypelnij elementami, sprawdz operatory wyluskania i adresu
//2. Stw�rz metod�, kt�ra tworzy tablic� n elementow�
//3. Stw�rz metod�, kt�ra oblicza �redni� z liczb w tablicy
//
//przygotowanie : utw�rz struktur� punkt z polami x i y(typu int)
//4. Utw�rz obiekt.Utw�rz drug� zmienn� tego samego typu i przypisz jej warto�� obiektu.Zmie� warto�� x i sprawd� jak zmieni� si� obiekt pocz�tkowy.Sprawd� adresy w pami�ci obu zmiennych.
//5. Zamiast drugiej zmiennej - utw�rz zmienn� z referencj� do tego obiektu.Zmie� warto�� x i sprawd� jak zmieni� si� obiekt pocz�tkowy.Sprawd� adresy w pami�ci obu zmiennych.
//6. Utw�rz metod�, kt�ra przyjmuje obiekt punkt.Zmie� w metodzie warto�� x i zobacz jak si� zachowuje zmienna spoza metody
//7. Zmie� metod� by przyjmowa�a referencj�
//8. Dodaj metod�, kt�ra przyjmuje const& .Sprawd� do jakich operacji masz dost�p.Opisz - do czego stosujemy cost& ?
//9. Powt�rz zadania #5, #6 przyjmuj�c wska�nik zamiast referencji
//
//10. Zbuduj tablic� tablic(tablic� dwuwymiarow�), gdzie pierwszy wiersz ma 5 element�w, drugi - 3, trzeci 1
//11. Zbuduj dwuwymiarow� tablic� kwadratow� n x n - element�w
//12. Przeiteruj po tablicy i poprzez referencje zmie� warto�� ka�dego elementu + 1
//
//13. (!) Stw�rz metod�, kt�ra tworzy obiekt punkt i zwraca referencj� do niego
//13a.Utw�rz destruktor obiektu punkt, zobacz kiedy si� wywo�uje i dlaczego nie powinni�my zwraca� referencji do zmiennej lokalnej
//14. Stw�rz metod�, kt�ra tworzy obiekt punkt i zwraca wska�nik do niego.
//15. Stw�rz metod�, kt�ra przyjmuje tablic�; tworzy tablic� d�u�sz� o 1 element, wpisuje w nim jakas wartosc, zwraca tablice

#include <iostream>
struct Point
{
	int x, y;
	//Point(int _y, int _x) : x(_x), y(_y) {}
	Point(int _x) : x(_x) {}
	~Point() { std::cout << "destruktor " << x << std::endl; }
};

int* createArrayy(int n)
{
	//jak stworzyc tablice dynamiczna/ -> new
	//jak ja zwrocic? -> return
	return nullptr;
}

void zad2()
{
	//jak wywolac metode? jak przechwycic jej wynik
	//jak zmienic cos w tablicy
}

int main()
{
	int tab1[5];
	std::cout << sizeof(tab1) / sizeof(int) << std::endl;
	int* tab2 = new int[5];
	int* x;
	std::cout << sizeof(x);

	//Point* p = new Point(1);
	//Point* p2 = new Point(2);
	//delete p, p2;
	//zad1();
}