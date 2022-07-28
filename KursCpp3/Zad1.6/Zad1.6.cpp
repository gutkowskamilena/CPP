#include <iostream>
#include <math.h>
void bankomat(float podana_suma)
{
    //wartosci dostepnych nominalow; dopisanie f oznacza ze podajemy liczbe typu float
    int podana_suma = 0;
    float tablica_nominalow[15] = { 500.0f,200.0f,100.0f,50.0f,20.0f,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01 };
    int tablica_wynikow[15];
    std::cin >> podana_suma;

    for (int i = 0; i < 15; i++)
    {
        tablica_wynikow[]
    }

    for (int i = 0; i < 15; i++)
    {
        if ((podana_suma / tablica_nominalow[i]) >= 1)
        {
            tablica_wynikow[i] = podana_suma/ tablica_nominalow[i];
            podana_suma = podana_suma % i;
            
        } 

    }

    for (int i = 0; i < 15; i++)
    {
        std::cout << tablica_wynikow[i];
    }

}

int main()
{        
    bankomat();
}

//komentarz test
