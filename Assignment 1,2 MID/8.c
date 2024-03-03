#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int sum = 0;
    while (n >= 0)
    {
        if (n % 2 != 0)
        {
            sum+=n;
        }
        n -= 1;
    } printf("%lld", sum);

    return 0;
}
