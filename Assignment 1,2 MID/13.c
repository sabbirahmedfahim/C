
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sumOfDigits = 0;
    int divisors = 0;
    while (n != 0)
    {
        divisors = n % 10;
        sumOfDigits = sumOfDigits + divisors;
        n=n/10;
    }
    printf("%d", sumOfDigits);

    return 0;
}
