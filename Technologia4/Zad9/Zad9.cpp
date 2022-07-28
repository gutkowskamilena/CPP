//9. Utw�rz zmienne i wska�niki do nich, a nast�pnie wypisz ich warto�ci :
//*int
//* float
//* char
//* const int
//* tablice 100 int

#include <iostream>

int main()
{
    int x = 100;
    int* x_ptr = nullptr;    //pusty wska�nik, wskazuje na nic
    x_ptr = &x;              //przestawiamy wska�nik �eby wskazywa� na adres zmiennej x

    //TAK NIE ROBIMY:   int* ptr2 = x;    //wska�nik na miejsce w pami�ci o adresie 100

    const int y = 123;
    const int* y_ptr = &y;
    int* const x_ptr2 = &x;   //sta�y wska�nik
    const int* const y_ptr2 = &y; //sta�y wska�nik na sta��

    int tab[100] = {1,2,3,4,5,6,7,8,9,10};
    int* tab_ptr = tab;         //nie podaj�c indeksu w [] tylko sam� nazwe tablicy wskazujemy na jej pierwszy element

    tab_ptr += 4;     //Przesuwamy wska�nik o 4 czyli 1+4 = 5 indeks 

    //tab[0], *tab, *tab_ptr robi� dok��dnie to samo
    std::cout << "tab= " << tab << std::endl;
    std::cout << "tab_ptr= " << tab_ptr << std::endl;
    std::cout << "tab[0]= " << tab[0] << std::endl;
    std::cout << "*tab= " << *tab << std::endl;
    std::cout << "*tab_ptr= " << *tab_ptr << std::endl;
    std::cout << "tab[1]= " << tab[1] << std::endl;
    std::cout << "*tab+1= " << *(tab+1) << std::endl;
    std::cout << "tab_ptr+1= " << *(tab_ptr+1) << std::endl;
}
