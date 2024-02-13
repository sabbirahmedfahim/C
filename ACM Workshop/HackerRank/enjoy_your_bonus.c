
#include <stdio.h>

int main()
{
   char maleOrFemale;
   int salary, yearOfService;
   scanf("%c %d %d", &maleOrFemale, &salary, &yearOfService);
   if (yearOfService>=10 && maleOrFemale=='M')
   {
    float Bonus = (float) salary*10/100;
    printf("TOTAL SALARY = R$ %.2f", Bonus+salary);
   } else if (yearOfService>=10 && maleOrFemale=='F')
   {
    float Bonus = (float) salary*15/100;
    printf("TOTAL SALARY = R$ %.2f", Bonus+salary);
   } else if (yearOfService<10 && maleOrFemale=='F')
   {
    // printf("TOTAL SALARY = R$ %.2f", salary); //LEARN data type conversion :D
    printf("TOTAL SALARY = R$ %.2f", (float)salary);
   }
   
   return 0;
}
