
#include <stdio.h>
int main()
{
//    printf("Bismillah");
   int n, a, b;
   int a_power_b = 1; //failed to remember giving initial value for a_power_b first timee
   int difference;
   scanf("%d %d %d", &n,&a,&b);
   switch (n)
   {
   case 1:
    printf("%d", a+b);
    break;
   case 2:
   if (a>b)
   {
    difference = a-b;
   } else if (a<b)
   {
    difference = b-a;
   } else
   {
    difference = 0;
   }
     printf("%d", difference);
    break;
   case 3:
    printf("%d", a*b);
    break;
   case 4:
    printf("%.2f", (float) a/b);
    break;
   case 5:
    for (int i = 0; i<b; i++)
   {
      a_power_b = a_power_b*a;
   }  printf("%d\n", a_power_b);
    break;
   case 6:
    printf("%d", a%b);
    break;
   case 7:
    if (a>b)
   {
    printf("%d", a);
   } else if (a<b)
   {
    printf("%d", b);
   } else
   {
    printf("%d", a);
   }
    break;
   case 8:
        if (a<b)
   {
    printf("%d", a);
   } else if (a>b)
   {
    printf("%d", b);
   } else
   {
    printf("%d", a);
   }
    break;
   case 9:
    printf("%.2f", (float) (a+b)/2);
    break;
   
   default:
   printf("Invalid input");
    break;
   }
   return 0;
}
