//Zad 0.2
//Stw�rz wektor 100 kolejnych liczb ca�kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 0 (for_each + funktor)
//c) Nast�pnie policz ile jest liczb wi�kszych ni� 4 (count_if + predykat)
//d) Zr�b to samo dla a, b i c, ale wykorzystaj lambd�
//e) W zale�no�ci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//    f) Zlicz sum� wszystkich liczb parzystych i zapisz j� do zmiennej lokalnej int sum;

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void printInt(const int value)
{
    std::cout << value << "; " << std::endl;
}

class PrintLessThan
{
public:

};

int main()
{
    std::vector < int > numbers;
    numbers.reserve(100);

    std::iota(numbers.begin(), numbers.end(), 1);

    std::for_each(numbers.rbegin(), numbers.rend(), [](const int i) {std::cout << i << "-"; });
    std::cout << std::endl;
    std::for_each(numbers.begin(), numbers.end(), printInt);

    //f)Zlicz sum� wszystkich liczb parzystych i zapisz j� do zmiennej lokalnej int sum;

    //int sum = 0;
    //std::for_each(numbers.cbegin(), numbers.cend(), [&sum](int i) {
    //    if (b % 2 == 0)
    //    return a + b; });

    //auto sumOdd = [](int a, int b) {
    //    if (a % 2 == 0 && b % 2 == 0)
    //    a+=b; };
    //int result = std::accumulate(numbers.cbegin(), numbers.cend(), 0, sumOdd);

}
