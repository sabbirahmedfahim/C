// what is the mistake?
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
    int minn = MyArray[0];
    for (int i = 0; i < n; i++)
    {
        if (minn > MyArray[i])
        {
            minn = MyArray[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (MyArray[i] == minn)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}