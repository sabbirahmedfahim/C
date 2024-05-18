
#include <stdio.h>

int main()
{
   int N, D;
   scanf("%d %d", &N, &D);
   if (N>1 && N<100 && D>1 && D<N)
   {
    int integerValue = N/D;
    int fractionValue = N%D;
    printf("%d %d %d", integerValue, fractionValue,  D);
   }
   
   return 0;
}
