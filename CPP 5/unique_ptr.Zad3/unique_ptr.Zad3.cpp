//3.
//a) Stw�rz shared_ptr na Kurczaka na dwa sposoby : za pomoc� new i
//make_shared.
//b) Stw�rz vector<shared_ptr<Kurczak>> i umie�� w nim kilka razy ten sam
//obiekt klasy Kurczak.Sprawd� liczb� referencji.Wywo�aj metod� reset na
//pierwszym wska�niku(pkt a)
//c) Wyczy�� wektor i ponownie sprawd� liczb� referencji

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
