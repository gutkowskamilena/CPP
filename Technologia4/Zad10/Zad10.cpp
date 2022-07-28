//Napisz funkcjê która zwróci wskaŸnik na wiêksz¹ z 2 liczb.

#include <iostream>



int* findBigger(int* first, int* second)
{
    if (*first > *second)  //s¹ gwiazdki wy³uskania wiec porównujemy wartosci
    {
        return first;      //ale zwracamy wskaŸniki
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
    int* bigger = nullptr; //tworzymy pusty wskaŸnik

    int* x_ptr = &x;
    int* y_ptr = &y;

    bigger = findBigger(&x, &y);   //przesuwamy pusty wskaŸnik na wynik dzia³ania funkcji findBigger
    //do funkcji findBigger przekazujemy adresy x i y (ampersantem & pobieramy adresy)

    std::cout <<"bigger is " << *bigger;    //wypisujemy wartosc na któr¹ wskazuje wskaznik (wy³uskanie)
}
