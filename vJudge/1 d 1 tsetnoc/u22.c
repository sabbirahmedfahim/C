// code is okay in my view, why vjudge says wrong?
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a;
    int dividedBy100 = 0;
    int dividedBy50 = 0;
    int dividedBy10 = 0;
    int dividedBy5 = 0;
    int dividedBy2 = 0;
    int dividedBy1 = 0;
    scanf("%d",&a);
    dividedBy100 = a/100;
    dividedBy50 = (a%100)/50; 
    dividedBy10 = (a%50)/10; 
    dividedBy5 = (a%10)/5;
    dividedBy2 = (a%5)/2;
   if (a%2==1)
   {
      dividedBy1 = 1;
   }
    printf("%d\n", dividedBy100+dividedBy50+dividedBy10+dividedBy5+dividedBy2+dividedBy1);
   }
   
   
   return 0;
}


