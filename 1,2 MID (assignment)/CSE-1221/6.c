#include <stdio.h>

int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    while (n >= 1)
    {
        sum += n;
        n -= 1;
    }
    printf("%lld", sum);
 
    return 0;
}
