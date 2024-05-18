#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int originalNumber = n;
    int numOfDigits = 0;
    while (n != 0)
    {
        n = n / 10;
        numOfDigits += 1;
    }

    int finalOutput = 0;
    n = temp;

    while (n != 0)
    {
        int factorial = 1;
        int digit = n % 10;
        n = n / 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }
        finalOutput = factorial + finalOutput;
    }
    if (finalOutput == originalNumber)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }

    return 0;
}
