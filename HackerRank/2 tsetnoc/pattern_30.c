// Done
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
   for (int i = 1; i<=n; i++)
   {

    for (int j = 1; j <= n-i; j++)
        {
            printf("  "); //two space
        }
     
    // char Letter = 'A' +  i -1;
    char Letter = 'A';
    // for (int j = 1; j <=i; j++)
    for (int j = 1; j <=2*i-1; j++)
    {
        printf("%c ", Letter);
        Letter++;
        // printf("%c", Letter);
        // printf("%c", Letter++);
    }
    
    printf("\n");
   }
   
   
   return 0;
}


