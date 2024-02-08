// failed

// ONE
// // 1 = 1 - i
// //this is fibonacchi number finding program, not related to the toph problem. check next codes
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a>0 && a<50)
//     {
//         int factorial  = 1;
//             for (int i = 1; i <= a; i++)
//             {
//                 factorial = factorial*i;
//                 // printf("%d\n", factorial); //think why printf is outside the loop
//             }
//             printf("%d\n", factorial);     
//     }
//     else
//     {
//         printf("invalid input\n");
//     }

//    return 0;
// }



// TWO
// find summation of 0-100
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//       sum = sum + i;
//       printf("i = %d, sum %d\n", i, sum);
//     } 
    
//    return 0;
// }


// THREE
// 1, 1, 2, 3, 5, 8, 12, ...
// 1 1 2
// 1 2 3
// 2 3 5
// 0 
// 0 1
// 1 2 3
// input  2 : output 1
// input  3 : output 2
// input  5 : output 3

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
      sum = sum + i;
      printf("i = %d, sum %d\n", i, sum);
    } 
    
   return 0;
}





