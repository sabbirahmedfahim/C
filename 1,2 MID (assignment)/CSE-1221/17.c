#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%lld", factorial);

    return 0;
}
