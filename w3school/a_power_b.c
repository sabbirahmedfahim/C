
#include <stdio.h>

int main()
{
   int a, b;
//    int a_power_b = 0; //oBhaiiii :D
   int a_power_b = 1;
   scanf("%d %d", &a, &b); // 5 3: 5 25 125
   for (int i = 0; i<b; i++)
   {
      a_power_b = a_power_b*a;
   }  printf("%d\n", a_power_b);
   return 0;
}
