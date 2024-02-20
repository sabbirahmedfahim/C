//Ready for submission but it's not a 'good practice' to submit without understanding 

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

    char Letter = 'A';
    for (int k = 1; k <=i; k++)
    {
        printf("%c", Letter++);
    }
       for (int l = 1; l<=i; l++)
    {
        printf("%c ", Letter++);
    }
   
    printf("%c",Letter);
    printf("\n");
   }
   
   
   return 0;
}


