// where is the  problem?
//  If the year is divisible by 4 but also divisible by 100 and not divisible by 400, it is not a leap year
// 1600 1700(x) 1800(x) 1900(x) 2000 2004
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   if (n<=1000000 && n>=1000)
   {
if (n%4==0 && n%100!=0 || n%100==0 && n%400==0)
   {
    printf("Yes! It's a Leap Year");
   } else
   {
    printf("Oops! It's not a Leap Year");
   }
   }
   
   return 0;
}
