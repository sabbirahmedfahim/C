
// done 
#include <stdio.h>

int main()
{
int N;
scanf("%d", &N);
int a;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        int reserveA = a;
        int reverse =0;
        while (a!=0)
    {
        int remainder = a%10; 
        reverse = reverse*10 + remainder;  
        a = a/10; 
    } if (reserveA==reverse)
    {
        printf("wins\n");
    } else if (reserveA!=reverse)
    {
        printf("loses\n");
    }

    }

   return 0;
}
