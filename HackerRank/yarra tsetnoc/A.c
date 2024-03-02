// Alhamduliiah Done
// code runs but AVOID USING 1 as first index, it always be 0
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int array[n];
   for (int i = 1; i <= n; i++)
   {
    scanf("%d", &array[i]);
   }
   for (int i = n; i >=1; i--)
   {
    printf("%d ", array[i]);
   }
   
   return 0;
}


