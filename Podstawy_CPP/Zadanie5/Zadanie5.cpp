#include <iostream>
int main()
{ // main
    int i = 100;                   //i oraz j s� deklarowane poza naszymi blokami wi�c kazde operacje na nich np ++ s� brane pod uwage
    int j = 200;
    {// blok1
        int k = i + j;               //ta zmienna �yje tylko w blok1
        std::cout << "blok1 k =" << k << std::endl;
        i++;
        j++;
        { // blok2
            k = i + j;
            std::cout << "blok2 block k =" << k << std::endl;
            i++;
            j++;
        }// blok2
    }// blok1 end
     //k = i + j;
    int k = i + j;                  //ta zmienna k jest inn� ni� w blok1 
    std::cout << "main k =" << k << std::endl;
    return 0;
}// main end
