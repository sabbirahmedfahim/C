#include <stdio.h>

int main()
{
   long long int N;
   scanf("%lld", &N);
   if (N<0)
   {
    printf("Negative\n");
   } else if (N>0)
   {
    printf("Positive\n");
   } else if (N==0)
   {
    printf("Neutral\n");
   }
   return 0;
}
