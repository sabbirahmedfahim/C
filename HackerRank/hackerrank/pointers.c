#include <stdio.h>

void increment(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    if (temp - *b > 0)
    {
        *b = temp - *b;
    }
    else
    {
        *b = *b - temp;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    increment(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}