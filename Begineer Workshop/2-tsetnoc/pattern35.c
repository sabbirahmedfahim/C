#include <stdio.h>
void reverseStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    reverseStarPattern(n);

    return 0;
}