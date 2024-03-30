#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int MyArray[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &MyArray[i]);
   }
   for (int i = 0; i < n; i++)
   {
    printf("%d ", MyArray[i]);
   }
   return 0;
}