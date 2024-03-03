#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        int flag = 0;
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                flag = 1;
            }
        }
        if (flag==0 && k!=1)
        {
            sum+=k;
        }
    } printf("%d", sum);

    return 0;
}