// angle = (30*H) - (11/2 * M )

#include <stdio.h>

int main()
{
   int H, M;
   scanf("%d %d", &H, &M);
   float angle = (30.0*H) - (11.0/2 * M); // Use 11.0 instead of 11 for floating-point division
   printf("%f", angle);
   return 0;
}

