#include <stdio.h>
int main()
{
    int k;
    printf("0 for star, 1 for reversed star pattern:\n");
    scanf("%d", &k);
    int n;
    scanf("%d", &n);

    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (k == 1)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}