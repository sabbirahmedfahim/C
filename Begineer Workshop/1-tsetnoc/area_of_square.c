#include <stdio.h>

int main()
{
    // int n; //mistake
   long long int n;
   scanf("%lld", &n);
   if (n >= 1 && n<= 1000000)
   {
     printf("%lld", n*n);
   }

   return 0;
}
