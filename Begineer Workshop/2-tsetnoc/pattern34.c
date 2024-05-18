// Done 
#include <stdio.h>
void Pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j<n-i; j++)
        {
            printf("# ");
        }

        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    Pattern(n);

    return 0;
}