
#include <iostream>
#include<time.h>
int main()
{

    srand(time(NULL));
    double number = 0;
    
    do {

        number = rand() / 10000.0;
        std::cout << number << std::endl;
    } while (number >= 0.03);
   
}
