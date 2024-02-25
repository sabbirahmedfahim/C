// YOU MUST SEE. VERY BASIC

// Tutorial 5.142 : Pattern Part-1
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.143 : Pattern Part-2
// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", row);
//         } printf("\n");
//     }

//     return 0;
// }

// TWO
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d ", col%2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// THREE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row<=n; row++)
//     {
//         for (int col = 1; col<=row; col++)
//         {
//             printf("%d ", row%2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// FOUR
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row<=n; row++)
//     {
//         for (int col = 1; col<=row; col++)
//         {
//             printf("# ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// FIVE (alhamdulillah)
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row<=n; row++)
//     {
//         for (int col = 1; col<=row; col++)
//         {
//             char letter = 'A';
//             printf("%c ", letter+row-1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// SIX
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row<=n; row++)
//     {
//         for (int col = 1; col<=row; col++)
//         {
//             char letter = 'A';
//             printf("%c ", letter+col-1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.144 : Pattern Part-3
// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = n; row >=1; row--)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.145 : Pattern Part-4
// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");
//     }
//     for (int row = n-1; row >=1; row--)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");
//     }
// }

// TWO
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", row);
//         } printf("\n");
//     }
//     for (int row = n-1; row >=1; row--)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", row);
//         } printf("\n");
//     }
// }

// Tutorial 5.146 : Pattern Part-5
// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }
//     for (int row = n-1; row >=1; row--)
//     {
//         for (int col = 1; col <=row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }
// }

// Tutorial 5.147 : Pattern Part-6
// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = n; col > row; col--)
//         {
//             printf("  ");
//         }
//         for (int col = 1; col <=row; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.148 : Pattern Part-7
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <=n; row++)
//     {
//         for (int col = n; col > row; col--)
//         {
//             printf("  ");
//         }
//         for (int col = 1; col <=row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.149 : Pattern Part-8
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = n; row>=1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }

//         for (int col = 1; col<=row; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.150 : Pattern Part-9
// VERY VERY IMPORTANT
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row<=n; row++)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }

//         for (int col = 1; col<=row; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }
//     for (int row = n-1; row>=1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }

//         for (int col = 1; col<=row; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.151 : Pattern Part-10
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.152 : Pattern Part-11
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d ", row*col);
//         } printf("\n");

//     }

//     return 0;
// }

// Tutorial 5.153 : Pattern Part-12
// PYRAMID-I
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row*2-1; col++)
//         {
//             printf("%d", col);
//         } printf("\n");

//     }

//     return 0;
// }

// Tutorial 5.154 : Pattern Part-13
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = n; row >= 1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf("  ");
//         }
//         for (int col = 1; col <= row*2-1; col++)
//         {
//             printf("%d ", col);
//         } printf("\n");

//     }

//     return 0;
// }

// // Tutorial 5.155 : Pattern Part-14
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf("  ");
//         }
//         for (int col = 1; col <= row*2-1; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     for (int row = n-1; row >= 1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf("  ");
//         }
//         for (int col = 1; col <= row*2-1; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     return 0;
// }

// // Tutorial 5.156 : Pattern Part-15
// // PYRAMID-II
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.157 : Pattern Part-16

// ONE
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = n; row >= 1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     return 0;
// }

// TWO
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter N= ");
//     scanf("%d", &n);

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }
//     for (int row = n-1; row >= 1; row--)
//     {
//         for (int col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             printf("* ");
//         } printf("\n");
//     }

//     return 0;
// }

// Tutorial 5.158 : Pattern Part-17
// RECTANGLE
#include <stdio.h>

int main()
{
    int n;
    printf("Enter N= ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        } printf("\n");
    }

    return 0;
}

// Tutorial 5.159 : Pattern Part-18