// let's run a code up and until that will find a ODD PERFECT number and stop

#include <stdio.h>

int main()
{
    int n = 1;

    int finalOutput = 0;
    int sumOfDivisors = 0;

    while (n!=0)
    {
        for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sumOfDivisors += i;
        }
    }
    finalOutput = sumOfDivisors + finalOutput;

    if (finalOutput == n)
    {
        printf("Perfect Number");
        break;
    } 
    else
    {
        printf("Not a Perfect Number");
    }
    n+=2;
    }
    

    

    return 0;
}