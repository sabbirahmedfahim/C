
// ONE 
// #include <stdio.h>

// int main()
// {
//    char Letter1 = 'A';
//    char Letter2 = 'C';
//    // printf("%c\n", Letter1);
//    // printf("%c\n", Letter1+1);
//    // printf("%c\n", Letter1+25);

//    printf("%c\n", Letter2); //C
//    printf("%c\n", Letter2+1); //D
//    printf("%c\n", Letter2-1); //B
//    printf("%c\n", Letter2--); //C 
//    printf("\n");

//    for (int i = 1; i <= 2; i++)
//    {
//       printf("%c\n", Letter2--); //B, A
//    } printf("\n");
//    for (int i = 1; i <= 2; i++)
//    {
//        printf("%c\n", Letter1--); //A(bujini), @
//    }
   
   

//    return 0;
// }

// TWO 
// why it prints A first time? (Run the code for your answer)
#include <stdio.h>

int main()
{
   char Letter1 = 'A';
   char Letter2 = 'C';

   for (int i=1; i <=2; i++)
   {
      printf("%c\n", Letter1--);
   } printf("\n");
   for (int i=1; i <=2; i++)
   {
      printf("%c\n", Letter2--);
   }
   
   return 0;
}


