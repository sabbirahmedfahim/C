#include<stdio.h>
int main()
{
    int n = 4;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxx = arr[0];
    int minn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxx)
        {
            maxx = arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<minn)
        {
            minn = arr[i];
        }
        
    }
    printf("%d\n%d", minn, maxx);
    
    
    
    return 0;
}