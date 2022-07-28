//Zad 5. 
//Korzystaj¹c ze stosu odwróæ ³añuch znaków
#include <iostream>
#include <stack>

int main()
{
    std::string poem = "Ala ma kota";

    std::stack<char> reverser;

    for (size_t i = 0; i < poem.size(); ++i)
    {
        reverser.push(poem[i]);
    }

    std::cout << poem << "ODWRACAM"<< std::endl;

    while(!reverser)

}
