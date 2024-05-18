#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int fibonacchiSeries = 0;
   for (int i = 0; i <=n; i++)
   {
    fibonacchiSeries+=i;
    printf("%d ", fibonacchiSeries);
   }
   return 0;
}


