// uniqe_ptr.Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//1.
//Stwórz klasê Chicken, która w konstruktorze i destruktorze wypisze
//swoj¹ nazwê.Nastêpnie stwórz funkcjê void fun(), która w œrodku utworzy dwa
//wskaŸniki na dwa obiekty klasy Chicken(zwyk³y i uniqe_ptr).Zobacz jak
//dzia³aj¹, gdy wyjd¹ z zasiêgu.

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
