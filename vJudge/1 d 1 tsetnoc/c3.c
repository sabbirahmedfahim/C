// Done 
#include <stdio.h>

int main()
    {
    int howManyTimes;
    scanf("%d", &howManyTimes);

    for (int i = 0; i < howManyTimes; i++)
    {
        int a=0, b=0;
        scanf("%d %d", &a,&b);
        printf("%d\n", a+b);
    }
    return 0;
    }
