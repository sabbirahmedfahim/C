// done
#include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   if (N>=100 && N<=999)
   {
    int firstNum = N/100;
    // int secondNum = N/10; //incorrect
    int secondNum = (N%100)/10;
    int thirdNum = N%10;
    printf("%d %d %d", firstNum, secondNum, thirdNum);
   }
   
   return 0;
}
