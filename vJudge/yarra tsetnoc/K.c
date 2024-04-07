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

    int flag;
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        flag = 0;
        if (MyArray[i] != MyArray[j])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}