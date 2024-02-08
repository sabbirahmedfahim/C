
// 6 6/1 = 6
// 6/2 = 3
// 6/3 = 2

#include <stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   for (int i = 1; i <= a; i++)
   {
    if (a%i==0)
    {
        printf("%d ", i);
    }
    
   }
   
   return 0;
}

