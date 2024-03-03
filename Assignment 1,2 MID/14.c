#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int productOfDigits = 1;
    int divisors = 0;
    while (n != 0)
    {
        divisors = n % 10;
        productOfDigits = productOfDigits * divisors;
        n=n/10;
    }
    printf("%d", productOfDigits);

    return 0;
}
