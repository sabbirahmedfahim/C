#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int i = 1;
    while (i > 0)
    {
        printf("%lld ", i);
        i = i + 1;
        if (n + 1 == i)
        {
            break;
        }
    }

    return 0;
}
