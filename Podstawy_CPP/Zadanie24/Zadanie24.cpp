#include <iostream>

 float funkcjaWartoscBezwzgledna(const float number)
{

    if (number >= 0)
    {
        return (number);
    }
    else
    {
        return (-number);
    }

}

int main()
{
    float a = -0.5;
	std::cout << funkcjaWartoscBezwzgledna(a) << std::endl;
    float b = -6;
    std::cout << funkcjaWartoscBezwzgledna(b) << std::endl;
    float c = 1;
    std::cout << funkcjaWartoscBezwzgledna(c) << std::endl;

}


