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
    
    for (int j = 0; j < n; j++)
    {
        printf("%d ", MyArray[j]);
    }
    for (int k = n-1; k >=0 ; k--)
    {
        printf("%d ", MyArray[k]);
    }
    if (MyArray[j]==MyArray[k])
    {
        printf("Yes\n");
    } else
    {
        printf("No\n");
    }
    
    

    return 0;
}