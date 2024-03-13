// Let's run a code that will find an ODD PERFECT number and stop once it does.

#include <stdio.h>

int main()
{
    long long int n = 1;

    long long int finalOutput = 0;
    long long int sumOfDivisors = 0;

    while (n!=0)
    {
        for (long long int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sumOfDivisors += i;
        }
    }
    finalOutput = sumOfDivisors + finalOutput;

    if (finalOutput == n)
    {
        printf("\n");
        printf("%lld is a Perfect Number", n);
        break;
    } 
    else
    {
        printf("%lld", n);
    }
    n+=2;
    }
    

    

    return 0;
}