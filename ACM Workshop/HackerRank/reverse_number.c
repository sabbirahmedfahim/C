// ONE
//Build your basic here, for free :D
// #include <stdio.h>

// int main() {

//   int n, reverse = 0, remainder;

//   printf("Enter an integer: ");
//   scanf("%d", &n);
//   //LEARN, easy. Find remainders
// //   4mod10=4
// //   6mod10=6
// //   17mod40=17
  
//   //LOGICAL bepar separ
//   while (n != 0) {
//     remainder = n % 10; //45 5, second time 4 4, third time n=0 Loop stopped
//     reverse = reverse * 10 + remainder; //0+5, second time 54,
//     n = n/10; //4, second time 0
//   }

//   printf("Reversed number = %d", reverse);

//   return 0;
// }

// TWO
#include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   int reverse = 0;
   if (N>=10 && N<=99)
   {
    while (N!=0)
    {
        int  remainder = N%10;
        reverse = reverse*10 + remainder;
        N = N/10;
        // printf("%d", reverse); //mistake, we are under loop
    }
    printf("%d", reverse);
   }
   
   return 0;
}
