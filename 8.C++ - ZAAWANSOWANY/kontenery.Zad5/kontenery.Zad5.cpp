//Zad 5. 
//Korzystaj�c ze stosu odwr�� �a�uch znak�w
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
