//Napisz funkcj� kt�ra zwr�ci wska�nik na wi�ksz� z 2 liczb.

#include <iostream>



int* findBigger(int* first, int* second)
{
    if (*first > *second)  //s� gwiazdki wy�uskania wiec por�wnujemy wartosci
    {
        return first;      //ale zwracamy wska�niki
    }   
    else
    {
        return second;
    }
}

int main()
{
    int x = 1000;
    int y = 300000;
    int* bigger = nullptr; //tworzymy pusty wska�nik

    int* x_ptr = &x;
    int* y_ptr = &y;

    bigger = findBigger(&x, &y);   //przesuwamy pusty wska�nik na wynik dzia�ania funkcji findBigger
    //do funkcji findBigger przekazujemy adresy x i y (ampersantem & pobieramy adresy)

    std::cout <<"bigger is " << *bigger;    //wypisujemy wartosc na kt�r� wskazuje wskaznik (wy�uskanie)
}
