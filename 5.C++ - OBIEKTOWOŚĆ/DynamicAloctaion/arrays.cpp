#include <iostream>

int oneElement()
{
	int* pa = nullptr;
	pa = new int(16); // 16 na stercie
	int x = 16; // 16 na stosie
//char* c = new char('a');
//int* pa = new int(16); - tez zadziala
	std::cout << "adres pa " << &pa << std::endl; // adres pod ktorym jest nasz wskaznik - raczej ciekawostka - malo przydatne
	std::cout << "pa: " << pa << std::endl; // wartosc naszego wskaznika czyli adres pamieci
	std::cout << "wartosc pa: " << *pa << std::endl; // dynamicznie zaalokowany int o wartosci 16 - jest pod adresem ktorego wartosc ma nasz wskaznik
	delete pa;
	return 0;
}
// Each resource should be managed by a dedicated object

int arrays()
{
	int n = 15; //wczytaj to od uzytkownika
	//int tab2[n]; //i stworz tablice dlugosci n
	//nie zadziala bo kompilator musi wiedziec jaka bedzie dlugosc tablicy zeby zarezerwowac ja na stosie

	int* tab = new int[n]; // dynamiczna tablica dlugosci n (wartosc n jest niejasna do momentu uruchomienia programu)
	tab[0] = 5;
	tab[1] = 6;
	std::cout << tab << " " << tab + 1 << std::endl;       //same taby wypisuj¹ adresy  (tab = idex 0)
	std::cout << tab[1] << " " << tab[2] << std::endl;     //taby z podanym indeksem wypisuj¹ wartoœci spod tych indeksów w tablicy
	*(tab + 2) = 16;                                       //gwiazdka podwoduje dereferencje - teraz dzia³amy na wartoœci spod adresu tab+2
	std::cout << tab[1] << " " << tab[2] << std::endl;
	delete[] tab;
	return 0;
}

void addone(int* pointer) // ta metoda dodaje 1 do wartosci inta pod danym adresem
{
	(*pointer)++;
}

int arrayFunctionParam()
{
	int* arr = new int[15];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	std::cout << arr[0] << " " << *(arr + 1) << " " << arr[2] << std::endl;  //wypisanie trzech pierwszych elementów tablicy
	addone(arr);                         //inkrementacja wartosci pierwszego elemtu tablicy
	std::cout << arr[0] << " " << *(arr + 1) << " " << arr[2] << std::endl;
	addone(arr + 1);                     //inkrementacja wartosci drugiego elemtu tablicy
	std::cout << arr[0] << " " << *(arr + 1) << " " << arr[2] << std::endl;
	//addone(arr[2]);                    //arr[2] jest typu int; metoda przyjmuje int*
	addone(&arr[2]);                     //pobranie adresu trzeciego elementu w tablicy
	//addone(&(arr[2])) tez zadziala
	std::cout << arr[0] << " " << *(arr + 1) << " " << arr[2] << std::endl;
	delete[] arr;
	return 0;
}

int* createArray(int i)
{
	int* newArr = new int[i];
	//delete[] newArr; spowoduje blad w linijce 68
	return newArr;
}

int arrayFunctionReturn()
{
	int* arr = createArray(15);
	arr[0] = 0;
	*(arr + 1) = 1;
	std::cout << arr[0] << " " << *(arr + 1) << std::endl;
	delete[] arr;
	arr = nullptr;

	//arr[0] = 0; // sypnie bledem
	return 0;
}

int arrayTwoD()
{
	//tablica dwuwymiarowa dynamiczna, podwojne zagniezdzenie wskaznika
	int** twoDArray = nullptr;       //pusty wskaŸnik o podwójnym zagniezdzeniu
	twoDArray = new int* [3];        //rezerwacja pamieci dla tablicy "nadrzednej" która bedzie zawierala w sobie wskazniki na tablice (dlatego typ int*)
	int r1 = 10, r2 = 2, r3 = 6;
	twoDArray[0] = new int[r1];      //rezrwacja pamieci dla pierwszej tablicy w tablicy nadrzednej
	twoDArray[1] = new int[r2];      //...dla drugiej
	twoDArray[2] = new int[r3];      //...dla trzeciej. w tablicy twoDArray pod indeksem 2 znajduje sie wskaznik na tablice intow o rozmiarze r3=6

	//stringi to tak naprawde tablice charow
	//pamietajmy o tym, ze laczenie stringow to dosc kosztowna operacja
	std::string elementarz = "Ala ma kota";
	elementarz += ", a kot ma Ale"; // zeby wykonac te linijke, musimy utworzyc nowa tablice, przekopiowac poprzednia, i dopisac druga czesc zdania
	std::string word = "foo";
	for (int i = 0; i < 10; i++)
	{
		word += "bar";
	}
	return 0;
}
//trojwymiarowa tablica
// 	int*** twoDArray = nullptr;
//twoDArray = new int** [3];
//int r1 = 10, r2 = 2, r3 = 6;
//twoDArray[0] = new int* [r1];
//twoDArray[0][0] = new int[r1];
//int a;
//a = 16;
//<->rownowazne
//int a = 16;

//to nie dziala tylko jesli probujemy z referencja
//int& ra;
//ra = a; - nie zadziala bo nie mozna tworzyc niezainicjalizowanej referencji