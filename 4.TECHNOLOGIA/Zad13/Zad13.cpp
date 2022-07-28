//13.  Napisz funckjê która zwróci tablicê N liczb od 1 do N.    N jest parametrem tej funkcji.

#include <iostream>

int* generateNumbers(unsigned int N)
{
    int* tablica = nullptr;
 
    tablica = new int[N];
    for (int i = 0; i < N; i++)
    {
        tablica[i] = i + 1;
    }
    return tablica;
}

int main()
{
    int* tab = nullptr;
    unsigned int size = 1000;

    tab = generateNumbers(size);

    for (unsigned int i = 0; i < size; ++i)
    {
        std::cout << tab[i] << " ";

        if (i % 30 == 0)
        {
            std::cout << std::endl;
        }
    }
 
    delete[] tab;
    tab = nullptr;

}
