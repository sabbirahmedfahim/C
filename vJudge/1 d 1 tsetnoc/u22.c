
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a;
    scanf("%d",&a);
    int dividedBy100 = a/100;
    int dividedBy50 = (a%100)/50;
    int dividedBy10 = (a%50)/10;
    int dividedBy5 = (a%10)/5;
    int dividedBy2 = (a%5)/2;
    int dividedBy1 = (a%2)/1;
    printf("%d\n", dividedBy100+dividedBy50+dividedBy10+dividedBy5+dividedBy2+dividedBy1);
   }
   
   
   return 0;
}


