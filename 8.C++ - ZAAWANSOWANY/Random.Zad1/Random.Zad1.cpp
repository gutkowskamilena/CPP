//Utwórz wektor 100 losowych liczb z przedziału 0 10, następnie:
//a) wypisz ten wektor
//b) zlicz ilość wystąpień liczby 5
//c) Wylicz średnia wartość
//d) Zrób to samo dla innego rozkładu wartości


#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    std::random_device r; //urz�dzenie do generowania entropii (zalezne od systemu operacyjnego)
    std::default_random_engine defEngine(r()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca� nam losowe liczby
    std::uniform_int_distribution<int> intDistro(0, 10); // ubiermy ten nasz silnik w klase zapewniaj�c� nam odpowiedni rozk�ad liczb
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(intDistro(defEngine)); //pobiernie kolejnych liczb losowych
    }

    //a)
    for (const int n : numbers)
    {
        std::cout << n << " ";
    }

    //b)
    std::cout << std::endl;
    int sum = std::count_if(numbers.begin(), numbers.end(), [&numbers](int i) {return i == 5; });

    std::cout << sum << std::endl;
}
