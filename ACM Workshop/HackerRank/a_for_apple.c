
#include <stdio.h>

int main()
{
//    int cha;
   char cha;
   scanf("%c", &cha);
//    char A='A', B='B', C='C', D='D', E='E', F='F';

   switch (cha)
   {
//    case A: // guess the error
   case 'A':
    printf("Apple");
    break;
    case 'B':
    printf("Ball");
    break;
    case 'C':
    printf("Car");
    break;
    case 'D':
    printf("Doll");
    break;
    case 'E':
    printf("Elephant");
    break;
    case 'F':
    printf("Fish");
    break;

   default:
   printf("Invalid Character");
    break;
   }
   return 0;
}


