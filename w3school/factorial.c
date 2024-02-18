
#include <stdio.h>

int main()
{
   int n;
   int factorial = 1;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
   {
    factorial = factorial*i;
   }
   printf("%d", factorial);
   
   
   return 0;
}
