
#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    float chargeRemovedfromX = (float) X-0.50;
    if (X>0 && X<=2000 && Y>=0 && Y<=2000)
    {
         if (X%5==0 && chargeRemovedfromX<=Y)
    {
        float updatedBalance = (float) Y-(X+0.50);
        printf("%.2f", updatedBalance);
    } else
    {
        printf("%.2f", (float)Y);
    }
    } 
    
    
   return 0;
}
