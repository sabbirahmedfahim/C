
// But where is the  mistake?
#include <stdio.h>

int main()
{
   long long int N;
   scanf("%lld", &N);
   if (N>=-1000000000000000 && N<=1000000000000000)
   {
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
   } else
   {
     printf("Invalid input\n");
   }
   
   return 0;
}
