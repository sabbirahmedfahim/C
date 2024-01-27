//(1,2) MidTerm Q. Solve
//Guess the output
// #include <stdio.h>

// int main()
// {
//    int a[5] = {1,2,3,4,5};
//    for (int i = 0; i < 5; i++)
//    {
//     if ((char)a[i] == '5') 
//     {
//         printf("%d\n", a[i]);
//     }
//     else
//     {
//         printf("FALL\n");
//     }
//    }
//    return 0;
// }

//(1,2) MidTerm Q. Solve
// #include <stdio.h>

// int main()
// {
//    int N;
//    int  M;
//    printf("Enter total run & over: ");
//    scanf("%d %d", &N, &M);
   
// //    if (N = M) //wrong
//    M = M*36; 
//    if (N <= M)
//    {
//     printf("YES");
//    }
//    else
//    {
//     printf("NO");
//    }
//    return 0;
// }

//(1,2) MidTerm Q. Solve
// #include <stdio.h>

// int main()
// {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for (int i = 0; i < 5; i++)
//    {
//     printf("%d\n", arr[i]);
//    }

//    return 0;
// }

//(1,2) MidTerm Q. Solve
//Find Second largest number among 3 numbers
// #include <stdio.h>

// int main()
// {
//     int A, B, C;
//     printf("Enter 3 numbers A, B & C: ");
//     scanf("%d %d %d", &A, &B, &C);
//     // if (A < B < C) 
//     if ((A < B && B < C) || (C<B && B<C))
//     {
//     printf("Second largest number is: %d", B); }
//     // else if (B < A < C) 
//     else if ((B < A && A < C) || (C<A && A<B))
//     {
//     printf("Second largest number is: %d", A);
//     }
//     // else if (A < C < B)
//     else if ((B < C && C < A) || (A<C && C<B))
//     {
//     printf("Second largest number is: %d", C);
//     }
    

//    return 0;
// }


//(1,2) MidTerm Q. Solve
// Equal distribute candies
// #include <stdio.h>

// int main()
// {
//     int  candies;
//     int friends;
//    printf("How many candies & friends? ");
//    scanf("%d %d", &candies, &friends);
//    if (candies%friends == 0)
//    {
//     printf("Yes");
//    }
//    else
//    {
//     printf("No");
//    }
   

//    return 0;
// }


//(1,2) MidTerm Q. Solve
//Guess the output MINDGAME
// #include <stdio.h>

// int main()
// {
//    int a = -1, b = -a;
//    int x,y;

//    x = (a>0) && (b<0) || (a<0) && (b>0); //1
//    y = (a<=0) || (b>=0) && (a>=0) || (b<=0);
//    printf("%d\n", x == y);
//    return 0;
// }

//(1,2) MidTerm Q. Solve
//Pirnt all the even numbers from 120 to 520
// #include <stdio.h>

// int main()
// {
//    for (int i = 120; i < 521; i+=2)
//    {
//     printf("%d ", i);
//    }
   

//    return 0;
// }

//(1,2) MidTerm Q. Solve
//Pirnt all the multiples of 11 from 13 to 1000
#include <stdio.h>

int main()
{
    int a = 11;
   for (int i = 13; i < 1001; i+=1)
   {
    printf("%d\n", i*a);
   }
   

   return 0;
}








