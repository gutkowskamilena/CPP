#include <iostream>
#include <string>

int main()
{
    std::string imie_i_nazwisko;
    std::string miejsce_zamieszkania;
    std::getline(std::cin >> std::ws, imie_i_nazwisko);
    std::getline(std::cin >> std::ws, miejsce_zamieszkania);

    std::cout << imie_i_nazwisko << std::endl << miejsce_zamieszkania;

    //std::string imie = { "Milena"};
    //std::cout << imie.length();
}

