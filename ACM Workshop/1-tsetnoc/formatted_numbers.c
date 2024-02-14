
#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   if (n>=10 && n<=99)
   {
    int a = n/10; //98 9
    int b = n%10; //8
    printf("%d %d", a, b);
   }
   
   return 0;
}
