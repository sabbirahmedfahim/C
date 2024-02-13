// Alhamdulillah Solved 
#include <stdio.h>

int main()
{
   long long int x, y;
   scanf("%lld %lld", &x,&y);
   long long int difference;

   if (x >=1 && x<=100000 && y >=1 && y<=100000)
   {
     if (x>y)
   {
    difference = x-y;
   } else if (x<y)
   {
    difference = y-x;
   } else
   {
    difference = 0;
   }
     printf("Perbedaan = %lld", difference);
   }
   return 0;
}
