// uniqe_ptr.Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//1.
//Stw�rz klas� Chicken, kt�ra w konstruktorze i destruktorze wypisze
//swoj� nazw�.Nast�pnie stw�rz funkcj� void fun(), kt�ra w �rodku utworzy dwa
//wska�niki na dwa obiekty klasy Chicken(zwyk�y i uniqe_ptr).Zobacz jak
//dzia�aj�, gdy wyjd� z zasi�gu.

#include <iostream>

class Chicken
{
public:

    Chicken()
    {
       std::cout<< "Chicken";
    }
    ~Chicken()
    {
        std::cout << "~Chicken";
    }

};

void fun()
{
    Chicken* rawPtr = new Chicken();
    std::shared_ptr<Chicken> smartPtr(new Chicken());

    delete rawPtr;
}

int main()
{
    fun();
    std::cout << "Hello World!\n";
}
