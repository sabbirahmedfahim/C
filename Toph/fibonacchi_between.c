// 0 1 = 1    0 1 1 2 3 5 8
// 1 1 = 2
// 1 2 = 3
// 2 3 = 5
// 3 5 = 8
//failed, but i MUST find out the logic
#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int prevNum = 0;
   int prevPrevnum = 0;
   int CurrentNum = 1;
   for (int i = 0; i < n-2; i++)
   {
      prevPrevnum = prevNum;
      prevNum = CurrentNum;
      CurrentNum = prevNum + prevPrevnum;
   }
      printf("%d", CurrentNum);

   return 0;
}


