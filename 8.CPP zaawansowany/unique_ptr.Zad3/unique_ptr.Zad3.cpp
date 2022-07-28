//3.
//a) Stwórz shared_ptr na Kurczaka na dwa sposoby : za pomoc¹ new i
//make_shared.
//b) Stwórz vector<shared_ptr<Kurczak>> i umieœæ w nim kilka razy ten sam
//obiekt klasy Kurczak.SprawdŸ liczbê referencji.Wywo³aj metodê reset na
//pierwszym wskaŸniku(pkt a)
//c) Wyczyœæ wektor i ponownie sprawdŸ liczbê referencji

#include <iostream>

class Chicken
{
public:

    Chicken()
    {
        std::cout << "Chicken";
    }
    ~Chicken()
    {
        std::cout << "~Chicken";
    }

};

void funA(std::shared_ptr <Chicken> sharedtPtr)
{

}

int main()
{
    std::shared_ptr<Chicken> ptr1(new Chicken());

    std::shared_ptr<Chicken> ptr2 = std::make_shared<Chicken>(); //1 blok pamieci(szybciej), zapewnia exception safety

    funA(new Chicken());

    funA(std::make_shared<Chicken>());


    std::cout << "Hello World!\n";
}
