#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    while (n >= 1)
    {
        printf("%lld ", n);
        n = n - 1;
    }

    return 0;
}
