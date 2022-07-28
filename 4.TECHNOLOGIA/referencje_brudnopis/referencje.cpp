#include <iostream>
void say(const std::string& text)//Ta funkcja moze przyjac dowolnego stringa, 
//na ka�dego stringa kt�ry wchodzi jest robiona referencja wi�c w ciele funkcji mozemy edytowa� oryginalne wystapienie tego stringa(nie jest to kopia jak zazwyczaj tylko orygina�)
{
    std::cout << text << std::endl;
}

int& reff()
{
    int x = 100;
    return x;
}

int main()
{
    int a = 0;
    int& a_ref = a;
    a += 10;
    std::cout << "a= " << a << "a_ref= " << a_ref << std::endl;
    
    std::string PanTadeusz = "Litwo ojczyzno moja...........";
    std::string Hello = "Heloo";
    say(PanTadeusz);
    say(Hello);

    //float b = 1.222f;
    //float& b_ref = b;

    //char c = 'Q';
    //char& c_ref = c;

    //std::string d = "text";
    //std::string& d_ref = d;

    int& z = reff();   //tutaj otrzymujemy referencje (==oryginalny x)
    int z2 = reff();   //tutaj przypisujemy zwracan� z funkcji referencje do nowej zmiennej z2 (tworzymy kopie oryginalnego x)
    std::cout << std::endl << z;

}

