// Done
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int MyArray[num];
    // remember the format specifier
    for (long long int i = 0; i < num; i++)
    {
        scanf("%lld", &MyArray[i]);
    }
    long long int sum = 0;
    for (long long int i = 0; i < num; i++)
    {
        sum = sum + MyArray[i];
    }
    printf("%lld", sum);
    return 0;
}