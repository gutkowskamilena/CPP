#include <iostream>
#include "MyString.hpp"
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    MyString empty;
    empty.print();

    MyString alaMaKota((char*)"Ala ma kota");               //OBIEKT PRZYJMUJE TABLICE ZNAK�W STATYCZNIE; (char*) konwertuje napisa "Ala ma kota" na wska�nik do tablicy znak�w
    alaMaKota.print();
    MyString alaMaKotaAKotMa = alaMaKota.append((char*)",a kot ma ");           //tworzymy nowy obiekt alaMaKotaAKotMa do kt�rego wpisujemy nowy napis bo append zwraca obiekt
    alaMaKota.print();
    alaMaKotaAKotMa.print();

    char* arr = new char[] {"A, L, E"};     
    MyString ale(arr);                                      //OBIEKT PRZYJMUJE TABLICE ZNAK�W DYNAMICZNIE
    delete[] arr;
    ale.print();
    MyString full = alaMaKotaAKotMa.append(ale);
    full.print();
}
