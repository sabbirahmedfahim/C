// Done 
// ONE (goto TWO for  the successful code)
// failed
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         // for (int j = 1; j <=n-i; j++)
//         for (int j = 1; j < i; j++)
//         {
//             printf("  "); // two space
//         }

//         // for (int j = 1; j <=i; j++)
//         for (int j = 0; j <= n - i; j++)
//         {
//             if (n == 1)
//             {
//                 printf("1");
//                 break;
//             }
//             int j = 1;

//             if (j < n)
//             {
//                 printf(" ");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }

// TWO
// 1 1 1 1 1 1 1 1 1
//   1 1 1 1 1 1 1
//     1 1 1 1 1
//       1 1 1
//         1
#include <stdio.h>
void Pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < n * 2 - i * 2 - 1; j++)
        {
            printf("1 ");
        }

        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    Pattern(n);

    return 0;
}