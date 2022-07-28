// Zad12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//12.  Napisz funkcjÍ ktÛra wczyta od uøytkownika liczbe do podanej zmiennej(3 wersje->przez zwrcanie wartoúci, przez modyfikacje wskaünika i przez modyfikacje referencji)

#include <iostream>
char readchar()
{
    char tmp = 0;
    std::cout << "podaj znak: ";
    std::cin >> tmp;
    return tmp;
}
void readchar(char& znak)
{
    std::cout << "podaj znak";
    std::cin >> znak;
}
void readchar(char* znak_ptr)
{
    std::cout << "podaj znak: ";
    std::cin >> *znak_ptr;
}
int main()
{   char x1 = 0;
    char x2 = 0;
    char x3 = 0;
    char x4 = 0;
    x1 = readchar();
    readchar(x2); //przez ref
    readchar(&x3); //przez ptr
    std::cout << "x1= " << x1 << std::endl;
    std::cout << "x2= " << x2 << std::endl;
    std::cout << "x3= " << x3 << std::endl;

}
