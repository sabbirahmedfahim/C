
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int locateDay =  n%7;
   if (n>=1 && n<=50)
   {
    if (n==1 || locateDay==1)
    {
        printf("Saturday");
    } if (n==2 || locateDay==2 )
    {
        printf("Sunday");
    }if (n==3 || locateDay==3)
    {
        printf("Monday");
    }if (n==4 || locateDay==4)
    {
        printf("Tuesday");
    }if (n==5 || locateDay==5)
    {
        printf("Wednesday");
    }if (n==6 || locateDay==6)
    {
        printf("Thursday");
    }if (n==7 || locateDay==0 )
    {
        printf("Friday");
    }
   }
   
   return 0;
}
