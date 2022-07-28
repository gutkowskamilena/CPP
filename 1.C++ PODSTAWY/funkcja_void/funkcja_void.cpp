#include <iostream>

void helloWorld()
{
    std::cout << "Hello World!" << std::endl;
}

void printWithNewLine(int num)
{
    std::cout << num << std::endl;
    
}

int getFromUser()
{
    int number = 0;
    std::cout << "Podaj liczbe" << std::endl;
    std::cin >> number;
    std::cout << "Wczytano: " << number << std::endl;
    return number;
}

int checkIfEven(int intNum)
{
    if (intNum > 0)
    {
        if ((intNum % 2) == 0)
        {
            return 2 * intNum;
        }
        else
        {
            return -intNum;
        }

    }
    else 
    {
        return intNum;
    }
  
}

double poleKola(double r, double pi = 3.14)
{
    return pi * r * r;
}

int countEven(int howMany)
{
    int input = 0;
    int even = 0;

    for (int i = 0; i < 10; i++)
    {
        
        std::cout << "Podaj liczbe ";
        std::cin >> input;

        if ((input % 2) == 0)
        {
            even++;
        }
    }
    return even;
}

int countNegativeNumbers(int n)
{
    int negativeSum = 0;

    for (int i = 1; i <= n; i++)
    {
        negativeSum -= i;
    }
    return negativeSum;
}

int countNegativeNumbers2(int n)
{
    int sum = 0;

    for (int i = 0; i >= n; i--)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    //helloWorld();
    //printWithNewLine(5);
    //int a = getFromUser();           //do int a przypisuje wynik funkcji getFromUser, czyli to co jest w jej returnie
    //int b = getFromUser();

    //std::cout << "a= " << a << std::endl;
    //std::cout << "b= " << b << std::endl;

    //int m = checkIfEven(5);
    //int n = checkIfEven(6);
    //int l = checkIfEven(-3);

    //std::cout << "m= " << m << std::endl;
    //std::cout << "n= " << n << std::endl;
    //std::cout << "l= " << l << std::endl;

    //double pole1 = poleKola(2);
    //std::cout << "Pole kola wynosi " << pole1 << std::endl;


	

    //int even = 0;

    //for (int i = 0; i < 10; i++)
    //{
    //    int input = 0;
    //    std::cout << "Podaj liczbe ";
    //    std::cin >> input;
    //    
    //    if ((input % 2) == 0)
    //    {
    //        even++;
    //    }
    //}

    //int even1 = countEven(10);

    //std::cout << "ilosc wprowadzonych liczb parzystych: " << even;

    //oblicz n ujemnych 

    int n = 0;
    std::cout << "Ile liczb ujemnych zsumowac? ";
    std::cin >> n;
    std::cout << "Suma " << n << " kolejnych ujemnych liczb wynosi" << countNegativeNumbers(n);

}

