// Alhamdulilah done
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int array[n];
//    first time it shows error because index was 1
//    for (int i = 1; i <= n; i++)
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &array[i]);
   }
//    for (int i = n; i>=1; i--)
   for (int i = n-1; i>=0; i--)
   {
    printf("%d ", array[i]);
   }
   
   return 0;
}


