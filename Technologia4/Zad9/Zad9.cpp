//9. UtwÛrz zmienne i wskaüniki do nich, a nastÍpnie wypisz ich wartoúci :
//*int
//* float
//* char
//* const int
//* tablice 100 int

#include <iostream>

int main()
{
    int x = 100;
    int* x_ptr = nullptr;    //pusty wskaønik, wskazuje na nic
    x_ptr = &x;              //przestawiamy wskaünik øeby wskazywa≥ na adres zmiennej x

    //TAK NIE ROBIMY:   int* ptr2 = x;    //wskaønik na miejsce w pamiÍci o adresie 100

    const int y = 123;
    const int* y_ptr = &y;
    int* const x_ptr2 = &x;   //sta≥y wskaønik
    const int* const y_ptr2 = &y; //sta≥y wskaünik na sta≥π

    int tab[100] = {1,2,3,4,5,6,7,8,9,10};
    int* tab_ptr = tab;         //nie podajπc indeksu w [] tylko samπ nazwe tablicy wskazujemy na jej pierwszy element

    tab_ptr += 4;     //Przesuwamy wskaünik o 4 czyli 1+4 = 5 indeks 

    //tab[0], *tab, *tab_ptr robiπ dok≥πdnie to samo
    std::cout << "tab= " << tab << std::endl;
    std::cout << "tab_ptr= " << tab_ptr << std::endl;
    std::cout << "tab[0]= " << tab[0] << std::endl;
    std::cout << "*tab= " << *tab << std::endl;
    std::cout << "*tab_ptr= " << *tab_ptr << std::endl;
    std::cout << "tab[1]= " << tab[1] << std::endl;
    std::cout << "*tab+1= " << *(tab+1) << std::endl;
    std::cout << "tab_ptr+1= " << *(tab_ptr+1) << std::endl;
}
