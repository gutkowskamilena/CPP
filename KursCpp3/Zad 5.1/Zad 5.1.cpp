#include <iostream>
#include "Zad5_1solution.h"

int main()
{
    const int n = 20;
    int num[n];
    
    for (int i = 0; i < n; i++)
    {
        num[i] = rand()%10+1;
    }

    taskA(num, n);
    taskB(num, n);
    taskC(num, n);
    taskD(num, n);
    taskE(num, n);
    taskG(num, n);
    taskH(num, n, 2);
    taskI(num, n, 3);
}

