
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int firstDigit;
    int lastDigit = n % 10;
    while (n != 0)
    {
        firstDigit = n;
        n = n / 10;
    }
    printf("%d", firstDigit + lastDigit);

    return 0;
}
