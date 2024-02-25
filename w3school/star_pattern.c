// ONE 
// case1:Triangular star pattern.
// #include <stdio.h>
// void starPattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j<=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     starPattern(n);

//     return 0;
// }

// TWO
// case2: Reversed Triangular Star Pattern
#include <stdio.h>
void reverseStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    reverseStarPattern(n);

    return 0;
}

