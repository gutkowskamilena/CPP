//Zad 1.
//Wczytaj od uzytkownika liczby do wektora.Zakoñcz wczytywanie gdy u¿ytkownik poda 0.
//Wypisz sumê wszystkich elementów.
//Posortuj ten wektor(bubble sort) i go wypisz.
#include <iostream>
#include <vector>

template<typename T>
void bubbleSort(std::vector<T>& vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        for (size_t j = 0; j < vec.size() - 1; ++j)
        {
            if (vet.at(j) > vec.at(j+1)
            {
                std::swap(vet.at(j), vec.at(j + 1));
            }
        }
    } 
}

int main()
{
    int input;
    int sumOfElements = 0;
    std::vector<int> ints;

    do
    {
        std::cin >> input;
        ints.push_back(input);

    }while(input != 0);
    
    for (int i = 0; i < ints.size(); i++)
    {
        sumOfElements += ints[i];
    }
    std::cout << "sum of elements" << sumOfElements;


   bubbleSort(ints);

    for (int i = 0; i < ints.size(); i++)
    {
        std::cout << ints[i] << std::endl;
    }
   
}
