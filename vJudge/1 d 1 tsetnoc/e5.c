// confused what i am doing 
// done done alhamdulillah

// ONE (failed attemp. goto TWO for accurate code)
// #include <stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     for (int i = 0; i < T; i++)
//     {
//         int leftMostDigit;
//         int storedValueOfRemainder;
//         int a;
//         scanf("%d", &a);
//     while (a/10!=0)
//     {    
//         a = a/10; 
//         if (a!=0)
//         {
//             storedValueOfRemainder = a%10;
//             printf("%d\n", storedValueOfRemainder);
//         }
    
//     } leftMostDigit = a;
    
//     printf("%d\n",storedValueOfRemainder);
//     printf("%d\n",leftMostDigit);
    
   
//     } 
    
    
//    return 0;
// }


// TWO 

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int sum =0;
        int N;
        scanf("%d", &N);

        while (N!=0)
    {
        int remainder = N%10; 
        sum = sum + remainder; 
        N = N/10; 
    } printf("%d\n", sum);
    }

   return 0;
}
