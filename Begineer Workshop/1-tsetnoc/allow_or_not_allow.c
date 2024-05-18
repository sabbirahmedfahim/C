
#include <stdio.h>

int main()
{
   int totalClasses, totalAttended;
   scanf("%d %d", &totalClasses, &totalAttended);
   int perceties = totalAttended*100/totalClasses;
   if (perceties>=75)
   {
    printf("Allowed");
   } else if (perceties<75)
   {
    printf("Not Allowed");
   }
   
   
   
   return 0;
}
