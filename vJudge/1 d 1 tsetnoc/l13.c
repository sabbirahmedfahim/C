#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);
        int mySqrt = sqrt(n);
        printf("%d\n", mySqrt);
    }

    return 0;
}
