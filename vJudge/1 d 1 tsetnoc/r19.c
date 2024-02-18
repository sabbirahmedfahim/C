
// done 
#include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   for (int i = 0; i < N; i++)
   {
    int a;
    scanf("%d", &a);
    if (a<10)
    {
        printf("Thanks for helping Chef!\n");
    } else
    {
        printf("-1\n");
    }

   }
   
   
   return 0;
}

