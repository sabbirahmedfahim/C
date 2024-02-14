
#include <stdio.h>

int main()
{
   int salary, yearOfService;
   scanf("%d %d", &salary, &yearOfService);
   if (yearOfService>5)
   {
    int Bonus = salary*5/100;
    printf("%d", Bonus);
   } else
   {
    printf("Sorry. No Bonus!");
   }
   
   
   return 0;
}
