#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag = 1;
        }
    } if (flag==0 && n!=1)
    {
        printf("Prime");
    } else if (flag==1 || n==1)
    {
        printf("Not Prime");
    }
    
    

    
    

    return 0;
}