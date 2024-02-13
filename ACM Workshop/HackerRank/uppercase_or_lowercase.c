
#include <stdio.h>

int main()
{
//    printf("Bismillah");
   char Word;
//    char A ='A', Z='z', a='a', z='z'; //mistakenly wrote lower-case z two times
    char A ='A', Z='Z', a='a', z='z';
   scanf("%c", &Word);
   if (Word>=A && Word<=Z)
   {
    printf("Wow Uppercase");
   } else if (Word>=a && Word<=z)
   {
    printf("Oops Lowercase");
   }
   
   
   return 0;
}
