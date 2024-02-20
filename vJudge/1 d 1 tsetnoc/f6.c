// dunno what is  my mistake
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a;
    scanf("%d", &a);
    double factorial = 1;
    for (int j = 1; j <= a; j++)
   {
    factorial = factorial*(double)j;
   }
   printf("%.0Lf\n", factorial);
   }
   
   
   return 0;
}
