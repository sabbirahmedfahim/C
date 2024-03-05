// failed
// the proper divisors of 12 are 1, 2, 3, 4, and 6 (excluding 12).
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
    int sumOfDivisors = 0;
    n = temp;

    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        for (int i = 1; i < digit; i++)
        {
            if (digit % i == 0)
            {
                sumOfDivisors += i;
            }
        }
        finalOutput = sumOfDivisors + finalOutput;
    }
    if (finalOutput == originalNumber)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }

    return 0;
}
