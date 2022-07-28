#include <iostream>
#include "SimpleSmartPointer.h"

struct Foo
{
    Foo(int in) : a(in) {}
    void print() const
    {
        std::cout << "a = " << a << '\n';
    }
    int a;
};

int main()
{
    int* x = new int(7);

    SimpleSmartPointer<int> ptr1(x);
    {
        SimpleSmartPointer<int> ptr2(x);
        std::cout << "Wartosc pod wskaznikiem 1: " << *ptr1;
        std::cout << "Wartosc pod wskaznikiem 2: " << *ptr2;
    }
    
    (*ptr1) = 10;
    std::cout << "Wartosc pod wskaznikiem1 : " << *ptr1;

    //SimpleSmartPointer<Foo> ptrFoo(new Foo(666));
    //ptrFoo->print();
    //(*ptrFoo).print();


}