// Solved
// You have to understand you're comparing all types as a character, though  it looks number vs character

#include <stdio.h>

int main()
{
//    printf("Bismillah");
   char NLS[100];
   scanf("%s", &NLS);
   char A='A', Z='Z', a='a', z='z';
//    if (NLS[0]>=0 && NLS[0]<=9) //character's can't compared by values
   if (NLS[0]>='0' && NLS[0]<='9')
   {
    printf("Hello Digit!");
   } else if (NLS[0]>=A && NLS[0]<=Z || NLS[0]>=a &&NLS[0]<=z)
   {
    printf("Hi Letter!");
   } else
   {
    printf("Bye Bye Special Character!");
   }
   
   
   return 0;
}
