/*https://codeforces.com/problemset/problem/4/A*/
#include <stdio.h>

int main()
{
   int weight;
   scanf("%d", &weight);
   if (weight >= 1 && weight<=100)
   {
      if (weight>2 && weight%2==0)
      {
         printf("YES");
      } else
      {
         printf("NO");
      }
   }
   
  
   return 0;
}
