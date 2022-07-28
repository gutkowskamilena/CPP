//2.
//Zadanie: Stw�rz klas� Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U�ywaj�c make_uniqe stw�rz i przypisz do
//uniqe_ptr :
//    Obiekt u�ywaj�c konstruktora domy�lnego
//    Obiekt u�ywaj�c konstruktora z 2 parametrami
//    Tablic� 4 Produkt�w

#include <iostream>

class Product
{ public:

    Product() 
    {
        std::cout << "c-tor domyslny" << std::endl;
    }
    Product(float price, std::string name)
    {
        _price = price;
        _name = name;
        std::cout << "c-tor param" << std::endl;
    }
    ~Product()
    {
        std::cout << "destruktor" << std::endl;
    }
private:
    float _price;
    std::string _name;
};

int main()
{

    std::unique_ptr<Product> ptr1 = std::make_unique<Product>();
    std::unique_ptr<Product> ptr2 = std::make_unique<Product>(6.66, "nazwa");

   // std::unique_ptr<Product* []> ptr3 = std::make_unique<Product*[]>();

    std::cout << "Hello World!\n";
}

