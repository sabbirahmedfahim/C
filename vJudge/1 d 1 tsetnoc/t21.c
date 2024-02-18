
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    int sum = a+b+c;
    if (sum == 180)
    {
        printf("YES\n");
    } else if (sum!=180)
    {
        printf("NO\n");
    }
   }
   
   
   return 0;
}

