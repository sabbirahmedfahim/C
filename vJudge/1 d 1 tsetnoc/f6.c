
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a;
    scanf("%d", &a);
    int factorial = 1;
    for (int i = 1; i <= a; i++)
   {
    factorial = factorial*i;
   }
   printf("%d\n", factorial);
   }
   
   
   return 0;
}
