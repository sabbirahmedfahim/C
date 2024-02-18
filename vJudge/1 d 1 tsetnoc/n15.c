
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a<c || a<b && a>c)
    {
        printf("%d\n", a);
    } else if (b>a && b<c || b<a && b>c)
    {
        printf("%d\n", b);
    } else if (c>a && c<b || c<a && c>b)
    {
        printf("%d\n", c);
    }
    
   }
   

   return 0;
}

