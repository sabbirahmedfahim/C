// Done
// ONE (added comments for better understanding) goto TWO for clear code
// int main()
// {
//     int n;
//     scanf("%d", &n); //1; //2
//    for (int i = 1; i<=n; i++)
//    {

//     for (int j = 1; j <= n-i; j++) //0; //0, 1
//         {
//             printf(" ");
//         }

//     for (int j = 1; j <=i; j++) //1; //1, 2
//     {
//         printf("%d", j);
//     }
//     printf("\n"); //1; //1, 2
//    }
   
   
//    return 0;
// }

// TWO 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); 
   for (int i = 1; i<=n; i++)
   {

    for (int j = 1; j <= n-i; j++) 
        {
            printf(" ");
        }

    for (int j = 1; j <=i; j++) 
    {
        printf("%d", j);
    }
    printf("\n");
   }
   
   
   return 0;
}
