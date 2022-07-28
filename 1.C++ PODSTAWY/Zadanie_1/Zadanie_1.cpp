#include <iostream>

int main()
{
    std::cout
        << "2.04.2022"
        << std::endl
        << "Milena Gutkowska"
        << std::endl
        << 2
        << std::endl;

    std::cout << "Specjalne znaczki // \\ \\ $ & %" << std::endl;

    int calkowita = 1313;
    float rzeczywista = 1223.5;
    char znak = 59;
    bool logiczna = false;
    std::string lancuch = "SDADA";

    std::cout
        << "calkowita=" << calkowita << std::endl
        << "rzeczywista=" << rzeczywista << std::endl
        << "znak=" << znak << std::endl
        << "logiczna=" << logiczna << std::endl
        << "lancuch=" << lancuch << std::endl;

    int krotka = 1;
    unsigned int dluga = 2147483648;

    std::cout
        << "wynik=" << krotka - 52768 << std::endl;

    krotka = krotka - 52768;
    
    std::cout
        << "krotka=" << krotka << std::endl
        << "dluga=" << dluga << std::endl;

    const int stala = 1829;                         // sta³a const - nie mo¿na jej zmieniæ - nadal trzeba okreœliæ jej typ
    std::cout
        << "stala=" << stala << std::endl;
    //stala = 99999;
    //std::cout
    //    << "zmieniona stala=" << stala << std::endl;

}

