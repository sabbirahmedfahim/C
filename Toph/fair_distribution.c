// 4 14 2
// 2 5 1
// 6 13 5
// Done

#include <stdio.h>
int main()
{
   int X, Y;
   scanf("%d %d", &X, &Y);
   if (X>0 && Y<=150)
   {
       if (Y%X == 0)
   {
    printf("He can distribute");
   }
   else if (Y%X != 0)
   {
    int eliminated = Y/X; 
    int multiplyDivision = ((eliminated+1)*X) - Y;
    //  printf("%d\n", eliminated);
    printf("%d\n", multiplyDivision);
    
   }
   }
   else
   {
      printf("Invalid input");
   }

   return 0;
}


