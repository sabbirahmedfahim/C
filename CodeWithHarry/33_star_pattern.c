#include <stdio.h>

int starPattern(int n)
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
int revStarPattern(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    starPattern(a);
    revStarPattern(b);
    // starPattern(5);
    // revStarPattern(5);

    return 0;
}