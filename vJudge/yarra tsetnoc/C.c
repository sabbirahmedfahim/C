#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int MyArray[n];
   for (int i = 1; i <= n; i++)
   {
    scanf("%d", &MyArray[i]);
   }
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
    sum = sum + MyArray[i];
   }
   printf("%d", sum);
   return 0;
}


