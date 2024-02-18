
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        printf("%d\n", a);
        printf("%d\n", a+b);
    } else if (a<b)
    {
        printf("%d\n", b);
        printf("%d\n", a+b);
    } else if (a==b)
    {
        printf("%d\n", a);
        printf("%d\n", a+b);
    }
    
    
   }
   
   
   return 0;
}


