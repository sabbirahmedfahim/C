// Done
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int MyArray[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &MyArray[i]);
    }
    int a;
    int flag = 0;
    scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        if (MyArray[i]==a)
        {
            flag = 1;
            printf("Yes");
            break;
        }
        
    } if (flag==0)
    {
        printf("No");
    }
    
    
    
    return 0;
}