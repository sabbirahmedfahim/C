#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int MyArray[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &MyArray[i]);
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum + MyArray[i];
    }
    printf("%d", sum);
    return 0;
}