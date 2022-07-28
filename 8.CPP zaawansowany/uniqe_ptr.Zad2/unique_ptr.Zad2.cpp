//2.
//Zadanie: Stwórz klasê Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U¿ywaj¹c make_uniqe stwórz i przypisz do
//uniqe_ptr :
//    Obiekt u¿ywaj¹c konstruktora domyœlnego
//    Obiekt u¿ywaj¹c konstruktora z 2 parametrami
//    Tablicê 4 Produktów

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

