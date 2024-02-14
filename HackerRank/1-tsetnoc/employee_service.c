
#include <stdio.h>

int main()
{
   int age;
   char gender, maritalStatus;
//    scanf("%d %c %c", age, gender, maritalStatus); //small mistake
   scanf("%d %c %c", &age, &gender, &maritalStatus);
   if (gender=='F')
   {
    printf("Urban Areas");
   } else if (gender=='M' && maritalStatus=='N' && age>=20 && age<=40)
   {
    printf("Anywhere");
   } else if (gender=='M' && age>=40 && age<=60 && maritalStatus=='Y' || maritalStatus=='N')
   {
    printf("Urban Areas");
   } else
   {
    printf("ERROR");
   }
   
   return 0;
}
