
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
   for (int i = 0; i<n; i++)
   {
    for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

    for (int j = 1; j <=i; j++) //first time breaked loop
        {
            printf("*");
        }
    for (int k = 1; k<=i; k++) //first time breaked loop
        {
            printf("*");
        }
    printf("*");
    printf("\n");
   }
   
   
   return 0;
}
