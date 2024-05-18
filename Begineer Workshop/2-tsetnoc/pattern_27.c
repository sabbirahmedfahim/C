// Done 
// ONE  (added comments for better understanding) goto TWO for clear code
// #include <stdio.h>

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

//     char Letter = 'A'+i-1; // 'A'; // 'A', 'B'
//     for (int j = 1; j <=i; j++) //1; //1, 2
//     {
//         printf("%c", Letter--); // A(bujini); //A, BA
//     }
    
//     printf("\n"); //A; //BA
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

    char Letter = 'A'+i-1; 
    for (int j = 1; j <=i; j++) 
    {
        printf("%c", Letter--); 
    }
    
    printf("\n");
   }
   
   
   return 0;
}



