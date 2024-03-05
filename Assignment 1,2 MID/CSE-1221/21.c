#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { 
        if (n % i == 0)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0 && i != 1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
