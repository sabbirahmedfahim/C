// first time they did not completely accept bcz i did not used 'long long int'
#include <stdio.h>

int main()
{
long  long int kg;
scanf("%lld", &kg);
long long int taka = kg*50;
if (taka>1000)
{
    long long int discount = taka*10/100;
    printf("%lld", discount);
} else
{
    printf("Sorry. No Discount!");
}


   return 0;
}
