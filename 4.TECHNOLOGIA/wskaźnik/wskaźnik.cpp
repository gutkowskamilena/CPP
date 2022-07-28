//9. Utwórz zmienne i wskaźniki do nich, a następnie wypisz ich wartości :
//*int
//* float
//* char
//* const int
//* tablice 100 int
//10.  Napisz funkcję która zwróci wskaźnik na większą z 2 liczb.
//11.  Napisz
//12.  Napisz funkcję która wczyta od użytkownika liczbe do podanej zmiennej(3 wersje->przez zwrcanie wartości, przez modyfikacje wskaźnika i przez modyfikacje referencji)
//13.  Napisz funckję która zwróci tablicę N liczb od 1 do N.N jest parametrem tej funkcji.
//

#include <iostream>
int main()
{
    int x = 100; //zmienna x
    int& x_ref = x; // referencja na zmienna x
    int* x_ptr = &x; // wskaźnik na x. poprzez &x pobieramy adres zmiennej x - "&" operator pobrania adresu
    std::cout << "x= " << x << std::endl;
    std::cout << "x_ref= " << x_ref << std::endl;
    std::cout << "x_ptr= " << x_ptr << std::endl; // ta linijka wypisze adres na ktory wskazuje wskaznik x_ptr
    std::cout << "*x_ptr= " << *x_ptr << std::endl; // tutaj odczytamy wartosc pod wskaźnikiem "*" - operator wyłuskania(dereferencji)
    //x_ptr = &x_ref; //sprawdzenie czy referencja i zmienna pokazuja to ten sam adres w pamieci
    //std::cout << "'x_ptr= " << x_ptr << std::endl;
}