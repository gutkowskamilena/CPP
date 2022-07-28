#include <iostream>
//Zadanie: stwórz funkcje która zwiekszy wartosc podanej liczby o 10 
void add10(int& ref_var)
{
    ref_var += 10;

}

int main()
{
    int var = 0;

    add10(var);
    std::cout << "var = " << var << std::endl;
}
