
#include <stdio.h>

int main()
{
   const float PI = 3.14159;
   float r;
      scanf("%f", &r);
   float singleArmOfSquare = 2*r;
   float areaOfSquare = singleArmOfSquare*singleArmOfSquare;
   float areaOfCircle = PI*r*r;
   printf("%.2f", areaOfSquare-areaOfCircle);

   return 0;
}
