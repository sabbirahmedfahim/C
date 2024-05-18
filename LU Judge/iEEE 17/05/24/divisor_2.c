// unsolved 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum *= arr[i];
    }

    long long int count = 0;
    for (int i = 1; i <= sum; i++)
    {
        if (sum % i == 0)
        {
            count++;
        }
    }
    printf("%lld", count);

    return 0;
}