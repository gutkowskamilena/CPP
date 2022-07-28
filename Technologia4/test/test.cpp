//napisz funckjê która zwróci tablicê N liczb od 1 do N.N jest parametrem tej funkcji.

#include <iostream>
#include <iostream>

int* generateNumbers(unsigned int N)
{
    int* tmp_tab_ptr = nullptr;
    tmp_tab_ptr = new int[N];
    for (unsigned int i = 0; i < N; ++i)
    {
        tmp_tab_ptr[i] = i;
    }
    return tmp_tab_ptr;
}

int main()
{

    int* tab = nullptr;
    unsigned int size = 10;

    tab = generateNumbers(size);

    for (unsigned int i = 0; i < size; ++i)
    {
        std::cout << tab[i] << " ";
    }
    delete[] tab;
    tab = nullptr;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
