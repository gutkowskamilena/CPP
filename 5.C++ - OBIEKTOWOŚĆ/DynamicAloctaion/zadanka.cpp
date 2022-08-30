//Podstawowe za³o¿enie : jeœli korzystacie ze wskaŸnika i operatora new, to nale¿y te¿ zadbaæ o posprz¹tanie pamiêci
//
//1. Utwórz dynamicznie tablicê n - elementowa, wypelnij elementami, sprawdz operatory wyluskania i adresu
//2. Stwórz metodê, która tworzy tablicê n elementow¹
//3. Stwórz metodê, która oblicza œredni¹ z liczb w tablicy
//
//przygotowanie : utwórz strukturê punkt z polami x i y(typu int)
//4. Utwórz obiekt.Utwórz drug¹ zmienn¹ tego samego typu i przypisz jej wartoœæ obiektu.Zmieñ wartoœæ x i sprawdŸ jak zmieni³ siê obiekt pocz¹tkowy.SprawdŸ adresy w pamiêci obu zmiennych.
//5. Zamiast drugiej zmiennej - utwórz zmienn¹ z referencj¹ do tego obiektu.Zmieñ wartoœæ x i sprawdŸ jak zmieni³ siê obiekt pocz¹tkowy.SprawdŸ adresy w pamiêci obu zmiennych.
//6. Utwórz metodê, która przyjmuje obiekt punkt.Zmieñ w metodzie wartoœæ x i zobacz jak siê zachowuje zmienna spoza metody
//7. Zmieñ metodê by przyjmowa³a referencjê
//8. Dodaj metodê, która przyjmuje const& .SprawdŸ do jakich operacji masz dostêp.Opisz - do czego stosujemy cost& ?
//9. Powtórz zadania #5, #6 przyjmuj¹c wskaŸnik zamiast referencji
//
//10. Zbuduj tablicê tablic(tablicê dwuwymiarow¹), gdzie pierwszy wiersz ma 5 elementów, drugi - 3, trzeci 1
//11. Zbuduj dwuwymiarow¹ tablicê kwadratow¹ n x n - elementów
//12. Przeiteruj po tablicy i poprzez referencje zmieñ wartoœæ ka¿dego elementu + 1
//
//13. (!) Stwórz metodê, która tworzy obiekt punkt i zwraca referencjê do niego
//13a.Utwórz destruktor obiektu punkt, zobacz kiedy siê wywo³uje i dlaczego nie powinniœmy zwracaæ referencji do zmiennej lokalnej
//14. Stwórz metodê, która tworzy obiekt punkt i zwraca wskaŸnik do niego.
//15. Stwórz metodê, która przyjmuje tablicê; tworzy tablicê d³u¿sz¹ o 1 element, wpisuje w nim jakas wartosc, zwraca tablice

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