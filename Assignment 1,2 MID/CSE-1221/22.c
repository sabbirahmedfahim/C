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
        int a_power_b = 1;
        int digit = n % 10;
        n = n / 10;
        // printf("%d ", digit);
        for (int i = 0; i < numOfDigits; i++)
        {
            a_power_b = a_power_b * digit;
            // mistakenly wrote a_power_b * n instead of a_power_b * n
        }
        finalOutput = a_power_b + finalOutput;
    }
    if (finalOutput == originalNumber)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }

    return 0;
}
