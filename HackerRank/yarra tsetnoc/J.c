// what is the mistake?
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int MyArray[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &MyArray[i]);
    }
    long long int minn = MyArray[0];
    for (long long int i = 0; i < n; i++)
    {
        if (minn > MyArray[i])
        {
            minn = MyArray[i];
        }
    }
    for (long long int i = 0; i < n; i++)
    {
        if (MyArray[i] == minn)
        {
            printf("%lld", i);
            break;
        }
    }

    return 0;
}