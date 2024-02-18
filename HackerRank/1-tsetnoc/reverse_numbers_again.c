
#include <stdio.h>

int main()
{
int N;
scanf("%d", &N);
int reverse =0;
if (N>=100 && N<=999)
{
    while (N!=0)
    {
        int remainder = N%10; //multiple integer doesn't matter. always %10 :p
        reverse = reverse*10 + remainder;  
        N = N/10; 
    }
    printf("%d", reverse);
    
}

   return 0;
}
